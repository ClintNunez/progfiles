import 'dart:html';
import 'dart:io';

void main() {
    List<int> data = [1, 2, 3, 4, 5, 6];

    for(int n in data) {
        stdout.write('$n ');
    }

    stdout.write('Enter number you want to find: ');
    final int value = int.parse(stdin.readLineSync().toString());

    num result = binarySearch(data, value);

    if(result != -1) {
        stdout.writeln('Element found at index $result');
    } else {
        stdout.writeln('Element not found');
    }
}

num binarySearch(List<int> data, int value) {
    int firstPos = 0, lastPos = data.length - 1, middle;

    while(firstPos <= lastPos) {
        middle = (firstPos + lastPos) ~/ 2;
        if(value < data.elementAt(middle)) {
            lastPos = middle - 1;
        } else if(value > data.elementAt(middle)) {
            firstPos = middle + 1;
        } else if(value == data.elementAt(middle)) {
            return middle;
        }
    }
    return -1;
}
