void main() {

    List<int> data = [2, 3, 1, 4];

    print("Unsorted Data:");
    for(int n in data) {
        print(n);
    }

    data = Bubble_Sort(data);
    
    print("Sorted Data:");
    for(int n in data) {
        print(n);
    }

}

bool is_sorted(List<int> data) {
    for(int i = 0; i < data.length - 1; i++) {
        if(data[i] > data[i + 1]) {
                return false;
        }
    } 

    return true;
}

// used temp because there is no swap function unlike in c++
List<int> Bubble_Sort(List<int> data) {
    int temp;
    while(!is_sorted(data)) {
        for(int i = 0; i < data.length - 1; i++) {
            if(data[i] > data[i + 1]) {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
            }
        }
    }

    return data;
}
