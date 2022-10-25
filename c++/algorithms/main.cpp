#include<iostream>
#include<vector>

std::vector<int> v;
int size;
bool sortAscending;
// searching algorithms





// sorting algorithms

void printSortingAlgorithms() {
   std::cout << "1) BubbleSort" << std::endl;
}

bool isSortedAscending() {
   if(sortAscending) {
      for(int i = 1; i < size; i++) { // Linear Search; O(n);
         if(v.at(i) < v.at(i - 1)) {
            return false;
         }
      }
      return true;
   } else {
      for(int i = 1; i < size; i++) { // Linear Search; O(n);
         if(v.at(i) > v.at(i - 1)) {
            return false;
         }
      }
      return true;
   }
}

void printSorted() {
   for(int &element : v) {
      std::cout << element << " ";
      std::cout << std::endl;
   }
}


void bubbleSort() {
   int temp; 
   size = v.size();

   for(int i = 0; i < size; i++) {
      for(int j = 1; j < size; j++) {
         if(v.at(j) < v.at(j - 1)) {
            temp = v.at(j);
            v.at(j) = v.at(j - 1);
            v.at(j - 1) = temp;
         }
      }
      if(isSortedAscending) {
         std::cout << "Exit loop." << std::endl;
         break;
      }
   }

   printSorted();
}



int main() {
   int N, n, sortChoice, searchChoice; char repeat; 
   
   do {
      std::cin >> N;

      for(int i = 0; i < N; i++) {
         std::cin >> n;
         v.push_back(n);
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
      
   } while(repeat != 'n' || repeat != 'N'); 


   return 0;
} 
