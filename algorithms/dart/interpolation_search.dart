import 'dart:io';

void main() {
    List<int> data = [1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024];

    for(int val in data) {
        stdout.write('$val ');
    }

    stdout.writeln('\nEnter number to find: ');
    final int value = int.parse(stdin.readLineSync().toString());

    int result = interpolation_search(data, value);

    if(result != -1) {
        stdout.writeln('Value found at index $result');
    } else {
        stdout.writeln('Value not found');
    }
}
    
int interpolation_search(List<int> data , int value) {
    int high = data.length - 1;
    int low = 0;

    while(value >= data[low] && value <= data[high] && low <= high) {
        int probe = low + (high - low) * (value - data[low]) ~/ (data[high] - data[low]);

        // probe is the index
        stdout.writeln('probe: $probe');

        if(data[probe] == value) return probe;
        else if(data[probe] < value) low = probe + 1;
        else high = probe - 1;
    }

    return -1;
}
