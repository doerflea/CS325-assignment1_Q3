#include "insertionSort.hpp"

#include<iostream>
#include<vector>

void insertionsort(std::vector<int> &array){

   int n = array.size();
   int i;
   int key;

   for(int j = 1; j < n; j++){
      key = array[j];
      i = j - 1;
      while(i >=0 && array[i] > key){
	       array[i+1] = array[i];
	        array[i] = key;
	         i--;
      }
   }
}
