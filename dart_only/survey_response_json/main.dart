import 'dart:convert';
import 'dart:io';

class Survey {
    final String title;
    final String description;
    final String filePath;

    Survey(this.title, this.description, this.filePath);

    // This could be Map<String, String>
    Survey.fromJson(Map<String, dynamic> json): title = json['title'], description = json['description'], filePath = json['filePath'];

    Map<String, dynamic> toJson() => {
        'title': title,
            'description': description,
            'filepath': filePath
    };
}

void main() {
    final String fileName = 'surveylist.json';
    final File file = File(fileName);


    if (file.existsSync()) {
        stdout.writeln('File exists!'); 
    } else {
        // this is just a practice for creating json files. In the mobile app, the survey list should already be created in the lib directory 
        stdout.writeln('File does not exist! Creating the file manually');

        Map<String, List> SurveyFile = {'survey': []};
        final String encodedFile = json.encode(SurveyFile);
        file.writeAsStringSync(encodedFile);
    }

    final String content = file.readAsStringSync();
    final Map<String, dynamic> data = json.decode(content);

    final List<dynamic> survey = data['survey'];

    stdout.write('Add(1) or Edit(2) a survey?');
    String? choice = stdin.readLineSync();

    switch(choice) {
        case '1':
            AddSurvey(file, data);
            break;
        case '2':
            int index = 0;

            survey.where((eachSurvey) => eachSurvey['title'])
                .forEach((element) {
                    print(element);
                    index++;
            });

            stdout.write('Write the index of survey you want to edit: ');
            String? surveyIndex = stdin.readLineSync();

            EditSurvey(file, data, survey, surveyIndex);
            break;
    }
}

void AddSurvey(File file, Map<String, dynamic> data) {
    stdout.write('Title: ');
    String? title = stdin.readLineSync();
    stdout.write('Description: ');
    String? description = stdin.readLineSync();

    final String filePath = 'survey_response_json/${title!.toLowerCase()}';

    Survey newSurvey = Survey(title, description!, filePath);

    data['survey'].add(newSurvey.toJson());

    final String updatedSurveyList = json.encode(data);
    file.writeAsStringSync(updatedSurveyList);
}

void EditSurvey(File file, Map<String, dynamic> data, List<dynamic> survey, String? surveyIndex) {
    stdout.writeln('Previous data: ');
    print(data['survey'][int.tryParse(surveyIndex!)]);

    stdout.writeln('New data: ');
    stdout.write('Title: ');
    String? title = stdin.readLineSync();
    stdout.write('Description: ');
    String? description = stdin.readLineSync();

    Survey editedSurvey = Survey(title!, description!, survey.elementAt(int.tryParse(surveyIndex)!)['filepath']);

    survey.removeAt(int.tryParse(surveyIndex)!);
    survey.add(editedSurvey.toJson());

    final String updatedSurveyList = json.encode(data);
    file.writeAsStringSync(updatedSurveyList);
}
