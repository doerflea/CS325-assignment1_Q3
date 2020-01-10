#include "insertionSort.hpp"

#include<iostream>
#include<vector>

void insertionSort(std::vector<int> *array){

   int n = array->size();
   int i;
   int key;

   for(int j = 1; j < n; j++){
      key = array->at(j);
      i = j - 1;
      while(i >=0 && array->at(i) > key){
	       array->at(i+1) = array->at(i);
	        array->at(i) = key;
	         i--;
      }
   }
}
