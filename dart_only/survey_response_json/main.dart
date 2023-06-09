import 'dart:convert';
import 'dart:io';
// change all dynamics to explicit

class Survey {
    final String title;
    final String description;
    final List<dynamic> questions;
    final List<Map<String, Map<String, int>>> responses;

    Survey(this.title, this.description, this.questions, this.responses);

    Survey.fromJson(Map<String, dynamic> json): title = json['title'], description = json['description'], questions = json['questions'], responses = json['responses'];

    Map<String, dynamic> toJson() => {
        'title': title,
            'description': description,
            'questions': questions,
            'responses': responses,
    };
}

List<String> QuestionType = [
    'MultipleChoice',
    'CheckBox',
    'Sentence',
];

class Question {
    final String questionType;
    final String problem;
    final List<String> choices;

    Question(this.questionType, this.problem, this.choices);

    Question.fromJson(Map<String, dynamic> json): questionType = json['questionType'], problem = json['problem'], choices = json['choices'];

    Map<String, dynamic> toJson() => {
        'questionType': questionType,
            'problem': problem,
            'choices': choices,
    };
}



void main() {
    final String fileName = 'surveys.json';
    final File file = File(fileName);

    if (file.existsSync()) {
        stdout.writeln('File exists!'); 
    } else {
        // this is just a practice for creating json files. In the mobile app, the survey list should already be created in the lib directory 
        stdout.writeln('File does not exist! Creating the file manually');

        List<dynamic> surveyFile = [];
        final String encodedFile = json.encode(surveyFile);
        file.writeAsStringSync(encodedFile);
    }

    final String content = file.readAsStringSync();
    final List<dynamic> data = json.decode(content);

    int index = 0;
    data.forEach((element) {
            print('$index ${element['title']}');
            index++;
            });

    stdout.write('Add(1)\nEdit(2)\nAdd response(3)');
    String? choice = stdin.readLineSync();

    switch(choice) {
        case '1':
            AddSurvey(file, data);
            break;
        case '2':
            break;
        case '3':
            stdout.writeln('Enter index of survey:');
            int chosenSurveyIndex = int.parse(stdin.readLineSync()!);
            AddResponse(file, data, chosenSurveyIndex);
            break;
    }
}

void AddSurvey(File file, List<dynamic> data) {
    // make survey
    stdout.writeln('Enter title of survey:');
    String? title = stdin.readLineSync();
    stdout.writeln('Enter description for survey:');
    String? description = stdin.readLineSync();
    // make question

    stdout.writeln('Proceeding to make questions');
    int numOfQuestions = 0;
    late String? repeat;

    List<dynamic> questionsList = [];
    do {
        List<String> choices = [];
        stdout.writeln('Number of questions: $numOfQuestions');

        stdout.writeln('Choose question type:\n1) MultipleChoice\n2) CheckBox\n3) Sentence');
        String? questionTypeChoice = stdin.readLineSync();
        String? questionType = QuestionType.elementAt(int.parse(questionTypeChoice!) - 1);

        stdout.writeln('Enter question:');
        String? problem = stdin.readLineSync();

        do {
            stdout.writeln('Enter choice:');
            choices.add(stdin.readLineSync()!);

            if(choices.length >= 2) {
                stdout.writeln('Add more choices? (y/n)');
                repeat = stdin.readLineSync();
            }
        } while(choices.length < 2 || repeat == 'y');

        questionsList.add(Question(questionType, problem!, choices));

        numOfQuestions++;

        stdout.writeln('Add more questions? (y/n)');
        repeat = stdin.readLineSync();
    } while (repeat == 'y');

    List<Map<String, Map<String, int>>> responsesSample = [];
    Survey newSurvey = Survey(title!, description!, questionsList, responsesSample);

    data.add(newSurvey.toJson());

    final String encodedData = JsonEncoder.withIndent('  ').convert(data);
    file.writeAsStringSync(encodedData);
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

// TODO try getting the title of the survey instead of the index
void AddResponse(File file, List<dynamic> data, int index) {
    /*
        update?
        get the responses from the json file

        get the questions from the json file
         - loop through each question:
            - get the problem
            - get the choices
            - 


    */
    List<Map<String, Map<String, int>>> currentResponses;
    
    List<dynamic> currentQuestions = data.elementAt(index)['questions'];

    currentQuestions.forEach((element) {
        print(element['problem']);
        element['choices'].forEach((element) {
            print(element);

            stdout.writeln('input answer:');
        });
    });
}
