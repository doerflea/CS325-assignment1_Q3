#include<iostream>
#include<fstream>
#include<vector>
#include<string>

#include "insertionSort.hpp"
#include "output.hpp"
//#include "mergeSort.hpp"

int main(){
   std::ifstream file_input;
   std::ofstream file_output_insert;
   std::ofstream file_output_merge;

   std::string file_input_name;
   using std::ios;

   std::cout << "Enter file name to open: ";
   std::cin >> file_input_name;

   file_input.open(file_input_name.c_str(),std::ios::in);

   while(file_input.fail()){
      std::cout << "An error occured while opening the file" << std::endl;
      std::cout << "Enter file name to open.";
      std::cin >> file_input_name;
      file_input.open(file_input_name,std::ios::in);
   }
   std::cout << "File sucessfully opened." << std::endl;
   std::vector<int>array;
   while(!file_input.eof()){
     int num;
     std::cin >> num;
     array.push_back(num);
   }

   file_input.close();

   insertionSort(array);
   output(array);
   return 0;
 }
