#include<iostream>
#include<vector>

int arr[5];
int size;
bool sortAscending;
// searching algorithms





// sorting algorithms

void printSorted() {
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


void printSortingAlgorithms() {
   std::cout << "1) BubbleSort" << std::endl;
}


void bubbleSort() {

    int i;
    int n = 5;
    bool isUnsorted;
    do {
        isUnsorted = false;
        for (int i = 0; i < (n - 1); i++) {
            if (arr[i] > arr[i + 1]) {
                isUnsorted = true;
                for (; i < (n - 1); i++) {
                    if (arr[i] > arr[i + 1]) {
                        std::swap(arr[i], arr[i + 1]);
                    }
                }
            }
        }
    } while (isUnsorted);
 
   printSorted();
}



int main() {
   int N, n, sortChoice, searchChoice; char repeat; 
   
   do {
      std::cin >> N;

      for(int i = 0; i < N; i++) {
         std::cin >> n;
         arr[i] = n;
      }

      printSortingAlgorithms();
      std::cin >> sortChoice;
   
      // add logic for repeating if input is not in the choices
      switch(sortChoice) {
         case 1:
            bubbleSort();
            break;
         default:
            break;
      }
      
      std::cout << "Press any key to repeat, n to exit: ";
      std::cin >> repeat;
      
   } while(repeat != 'n'); 

   return 0;
} 
