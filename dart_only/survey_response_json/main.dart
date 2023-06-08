import 'dart:convert';
import 'dart:io';

class Survey {
    final String title;
    final String description;
    final List<dynamic> questions;

    Survey(this.title, this.description, this.questions);

    // This could be Map<String, String>
    Survey.fromJson(Map<String, dynamic> json): title = json['title'], description = json['description'], questions = json['questions'];

    Map<String, dynamic> toJson() => {
        'title': title,
        'description': description,
        'questions': questions
    };
}

class Question {

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


    final String updatedSurveyList = json.encode(data);
    file.writeAsStringSync(updatedSurveyList);

    /*
    final List<dynamic> survey = data['survey'];

    stdout.write('Add(1) or Edit(2) a survey?');
    String? choice = stdin.readLineSync();


    switch(choice) {
        case '1':
            AddSurvey(file, data);
            break;
        case '2':
            int index = 0;

            survey.forEach((element) {
                stdout.writeln('$index) ${element['title']}');
                index++;
                });

            stdout.write('Write the index of survey you want to edit: ');
            String? surveyIndex = stdin.readLineSync();

            EditSurvey(file, data, survey, surveyIndex);
            break;
    }
    */
}

void AddSurvey(File file, Map<String, dynamic> data) {
    stdout.write('Title: ');
    String? title = stdin.readLineSync();
    stdout.write('Description: ');
    String? description = stdin.readLineSync();

    final String filePath = 'survey_response_json/$title';

//    Survey newSurvey = Survey(title!, description!, filePath);

 //   data['survey'].add(newSurvey.toJson());

    final String updatedSurveyList = json.encode(data);
    file.writeAsStringSync(updatedSurveyList);
}

void EditSurvey(File file, Map<String, dynamic> data, List<dynamic> survey, String? surveyIndex) {
    stdout.writeln('Previous data: ');
    
    var currentSurvey = Survey.fromJson(survey.elementAt(int.parse(surveyIndex!)));

    print(currentSurvey.title);
    print(currentSurvey.description);

    stdout.writeln('New data: ');
    stdout.write('Title: ');
    String? title = stdin.readLineSync();
    stdout.write('Description: ');
    String? description = stdin.readLineSync();

    final String newfilePath = 'survey_response_json/$title}';

    /*
    Survey editedSurvey = Survey(title!, description!, newfilePath);

    renameFile(currentSurvey.filePath, newfilePath);

    survey.removeAt(int.parse(surveyIndex));
    survey.add(editedSurvey.toJson());

    final String updatedSurveyList = json.encode(data);
    file.writeAsStringSync(updatedSurveyList);
    */
}

void renameFile(String oldPath, String newPath) {
  final file = File(oldPath);
  file.renameSync(newPath);
  print('File renamed successfully.');
}
