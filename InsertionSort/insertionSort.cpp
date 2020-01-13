#include "insertionSort.hpp"

void insertionSort(std::vector<int> *array){

   int n = array->size();
   int i;
   int key;

   for(int j = 1; j < n; j++){
      key = array->at(j); //Assign current index as key
      i = j - 1;
      while(i >=0 && array->at(i) > key){  //If previous index is greater than the key
	       array->at(i+1) = array->at(i);  //Current index = preivous index
	        array->at(i) = key; //Preivous index = key
	         i--; //Contine until index 0
      }
   }
}
