
void main() {
    List<int> unsorted_list = [5, 4, 6, 3, 1, 2, 3, 1, 5, 7];

    print("Unsorted: ");
    for(int n in unsorted_list) {
        print("$n ");
    }

    List<int> sorted_list = Selection_Sort(unsorted_list);

    print("Sorted: ");
    for(int n in sorted_list) {
        print("$n ");
    }
}

List<int> Selection_Sort(List<int> unsorted_list) {
    List<int> sorted_list = [];
    
    if(unsorted_list.isNotEmpty) {
        int smallest, index;

        while(unsorted_list.isNotEmpty) {
            smallest = unsorted_list[0];
            index = 0;

            for(int i = 0; i < unsorted_list.length; i++) {
                if(unsorted_list[i] <= smallest) {
                    smallest = unsorted_list[i];
                    index = i;
                }
            }

            unsorted_list.removeAt(index);

            sorted_list.add(smallest);
        }

    } else {
        print("Unsorted list empty.");
    }

    return sorted_list;
}
