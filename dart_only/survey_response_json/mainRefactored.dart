import 'dart:convert';
import 'dart:io';

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
      convertedResponse[key] = value.cast<String,int>();
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
      : questionType = json['questionType'] as String,
        problem = json['problem'] as String,
        choices = (json['choices'] as List<dynamic>).map((choice) => choice as String).toList();

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

  stdout.write('Add(1)\nAdd response(2)');
  String? choice = stdin.readLineSync();

  switch (choice) {
    case '1':
      AddSurvey(file, data);
      break;
    case '2':
      stdout.writeln('Enter index of survey:');
      int chosenSurveyIndex = int.parse(stdin.readLineSync()!);
      AddResponse(file, data, chosenSurveyIndex);
      break;
  }
}

void AddSurvey(File file, List<dynamic> data) {
  stdout.writeln('Enter title of survey:');
  String? title = stdin.readLineSync();
  stdout.writeln('Enter description for survey:');
  String? description = stdin.readLineSync();

  stdout.writeln('Proceeding to make questions');
  int numOfQuestions = 0;
  late String? repeat;

  List<Map<String, Map<String, int>>> responses = [];
  List<Question> questionsList = [];

  do {
    List<String> choices = [];
    stdout.writeln('Number of questions: $numOfQuestions');

    stdout.writeln('Choose question type:\n1) MultipleChoice\n2) CheckBox\n3) Sentence');
    String? questionTypeChoice = stdin.readLineSync();
    String? questionType = QuestionType[int.parse(questionTypeChoice!) - 1];

    stdout.writeln('Enter question:');
    String? problem = stdin.readLineSync();

    do {
      stdout.writeln('Enter choice:');
      choices.add(stdin.readLineSync()!);

      if (choices.length >= 2) {
        stdout.writeln('Add more choices? (y/n)');
        repeat = stdin.readLineSync();
      }
    } while (choices.length < 2 || repeat == 'y');

    Map<String, int> choicesResponeSetup = {};
    choices.forEach((element) {
      choicesResponeSetup[element] = 0;
    });

    Map<String, Map<String, int>> problemResponesSetup = {problem!: choicesResponeSetup};
    responses.add(problemResponesSetup);

    questionsList.add(Question(questionType, problem, choices));

    numOfQuestions++;

    stdout.writeln('Add more questions? (y/n)');
    repeat = stdin.readLineSync();
  } while (repeat == 'y');

  Survey newSurvey = Survey(title!, description!, questionsList, responses);
  data.add(newSurvey.toJson());

  final String encodedData = JsonEncoder.withIndent('  ').convert(data);
  file.writeAsStringSync(encodedData);
}

void AddResponse(File file, List<dynamic> data, int index) {
  Survey currentSurvey = Survey.fromJson(data[index] as Map<String, dynamic>);
  String? answer;

  currentSurvey.responses.forEach((problems) {
    problems.keys.forEach((element) {
      print(element);
      problems[element]!.keys.forEach((choices) {
        print(choices);
      });

      stdout.writeln('Answer:');
      answer = stdin.readLineSync();

      problems[element]![answer!] = problems[element]![answer]! + 1;
    });
  });

  print(currentSurvey.responses);
  final String encodedData = JsonEncoder.withIndent('  ').convert(data);
  file.writeAsStringSync(encodedData);
}

