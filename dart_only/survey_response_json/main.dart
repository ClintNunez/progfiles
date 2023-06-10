import 'dart:convert';
import 'dart:io';

/*
   can only be used in flutter
   import 'package:flutter/services.dart' show rootBundle;

   Future<dynamic> readJsonData() async {
   String jsonString = await rootBundle.loadString('assets/data.json');
   return jsonDecode(jsonString);
   }
   */

/* // previous
   class Survey { final String title; final String description;
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
   */

// chat gpt
class Survey {
    final String title;
    final String description;
    final List<Question> questions;
    final List<Map<String, Map<String, int>>> responses;

    Survey(this.title, this.description, this.questions, this.responses);

    Survey.fromJson(Map<String, dynamic> json)
        : title = json['title'] as String,
        description = json['description'] as String,
        questions = (json['questions'] as List<dynamic>)
          .map((question) => Question.fromJson(question as Map<String, dynamic>))
          .toList(),
          responses = (json['responses'] as List<dynamic>)
          .map((response) => _convertResponse(response as Map<String, dynamic>))
          .toList();

    static Map<String, Map<String, int>> _convertResponse(Map<String, dynamic> response) {
        Map<String, Map<String, int>> convertedResponse = {};
        response.forEach((key, value) {
                convertedResponse[key] = value.cast<String, int>();
                });
        return convertedResponse;
    }

    Map<String, dynamic> toJson() => {
        'title': title,
            'description': description,
            'questions': questions.map((question) => question.toJson()).toList(),
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

    Question.fromJson(Map<String, dynamic> json)
        : questionType = json['questionType'],
        problem = json['problem'],
        choices = (json['choices'] as List<dynamic>)
          .map((choice) => choice as String)
          .toList();

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

    // TODO add code for making the responses template for each question added. This will make it easier to update the data when adding responses
    List<Map<String, Map<String, int>>> responses = [];
    //List<dynamic> questionsList = [];
    List<Question> questionsList = [];

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

        Map<String, int> choicesResponeSetup = {};
        choices.forEach((element) {
                //choicesResponeSetup.addAll({'$element': 0});
                choicesResponeSetup['$element'] = 0;
                });

        Map<String, Map<String, int>> problemResponesSetup = {};
        problemResponesSetup['$problem'] = choicesResponeSetup;

        responses.add(problemResponesSetup);

        questionsList.add(Question(questionType, problem!, choices));

        numOfQuestions++;

        stdout.writeln('Add more questions? (y/n)');
        repeat = stdin.readLineSync();
    } while (repeat == 'y');

    Survey newSurvey = Survey(title!, description!, questionsList, responses);

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
    //List<Map<String, Map<String, int>>> responsesFromJson = data.elementAt(index)['responses'];
    //List<dynamic> responsesFromJson = data.elementAt(index)['responses'];
    Survey currentSurvey = Survey.fromJson(data.elementAt(index));
    String? answer;

    currentSurvey.responses.forEach((problems) {
        problems.keys.forEach((element) {
            print(element);
            problems['$element']!.keys.forEach((choices) {
                print(choices);
            });       

            stdout.writeln('Answer:');
            answer = stdin.readLineSync();
            
            problems['$element']!['$answer'] = problems['$element']!['$answer']! + 1;
        });
    });
    
    print(currentSurvey.responses);
    //final String encodedData = JsonEncoder.withIndent('  ').convert(currentSurvey.toJson());
    final String encodedData = JsonEncoder.withIndent('  ').convert(data);
    file.writeAsStringSync(encodedData);
}
