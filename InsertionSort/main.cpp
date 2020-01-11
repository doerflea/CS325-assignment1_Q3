#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>

#include "insertionSort.hpp"
#include "output.hpp"

int main(){
   std::ifstream file_input;

   std::string file_input_name;
   using std::ios;

   std::cout << "Enter file name to open: ";
   std::cin >> file_input_name;

   file_input.open(file_input_name.c_str(),std::ios::in);

   while(file_input.fail()){
      std::cout << "An error occured while opening the file" << std::endl;
      std::cout << "Enter file name to open: ";
      std::cin >> file_input_name;
      file_input.open(file_input_name,std::ios::in);
   }
   std::cout << "File sucessfully opened." << std::endl;
   if(file_input.good())
   {
      std::string str;
      while(getline(file_input,str)){
	 std::vector<int>array;
	 std::istringstream ss(str);
	 int num;
	 while(ss >> num){
	    array.push_back(num);
	 }
	 insertionSort(&array);
	 output(array);
      }

      file_input.close();

   }
   return 0;
}
