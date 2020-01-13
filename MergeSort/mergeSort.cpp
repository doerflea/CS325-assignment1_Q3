
#include "mergeSort.hpp"
#include "output.hpp"

void mergeSort(std::vector<int>&array,int l, int r){
   if(l < r){
      int mid = (l+r)/2;
      mergeSort(array,l,mid); //sort first half of array
      mergeSort(array,mid+1,r); // sort second half of the array;
      merge(array,l, mid, r); // merge sorted halves
   }
}

void merge(std::vector<int>&array, int l, int mid, int r){

   int k = 0;
   int p = l; //first half of array
   int q = mid + 1; //second half of array

   std::vector<int>temp_arr; // temporary array used to store correct values
   for(int i = l; i <= r; i++){
      if(p > mid){ //If we have finished pushing left hand values, push right hand values
	 temp_arr.push_back(array[q++]);
      }
      else if(q > r){ //If we have finished pushing right hand values, push left hand values
	 temp_arr.push_back(array[p++]);
      }
      else if(array[p] < array[q]){  //If current left value is < current right value, push left
	 temp_arr.push_back(array[p++]);
      }
      else{
	 temp_arr.push_back(array[q++]); //push right value
      }
      k++;
   }
   for(int i = 0; i < k; i++){
      array[l++] = temp_arr[i]; //assign sorted values from temporary array to array
   }
}
