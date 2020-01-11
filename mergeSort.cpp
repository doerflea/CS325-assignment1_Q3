
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
  // std::vector<int>L;
  // std::vector<int>R;

   //int nL = mid - l;
   //int nR = r - mid - 1;
   
   //std::cout << "nL size" << nL << std::endl;
   //std::cout << "nR size" << nR << std::endl; 

   //L.assign(array->begin(),array->begin());
  
  /* for(int i = 0; i < L.size(); i++){
      std::cout << L[i] << std::endl;
   }
   R.assign(array->begin()+ mid, array->begin()+mid+nR);
   for(int i = 0; i < R.size();i++){
      std::cout << R[i] << std::endl;
   }

   int i = 0;
   int j = 0;
   int k = 0;

   //std::cout << L[i] << std::endl;
   std::cout << R[j] << std::endl; 
   while(i < nL && j < nR){
      if(L[i] < R[j]){
	 array->at(k) = L[i];
	 i++;
      }
      else{
	 array->at(k) = R[j];
	 j++;
      }
      k++;
   }
   while(i < nL){
      array->at(k) = L[i];
      k++;
      i++;
   }
   while(j < nR){
      array->at(k) = R[j];
      k++;
      j++;
   }*/
   int k = 0;
   int p = l;
   int q = mid + 1;

   std::vector<int>temp_arr;
   for(int i = l; i <= r; i++){
      if(p > mid){
	 temp_arr.push_back(array[q++]);
      }
      else if(q > r){
	 temp_arr.push_back(array[p++]);
      }
      else if(array[p] < array[q]){
	 temp_arr.push_back(array[p++]);
      }
      else{
	 temp_arr.push_back(array[q++]);
      }
      k++;
   }
   for(int i = 0; i < k; i++){
      array[l++] = temp_arr[i];
   }
}


