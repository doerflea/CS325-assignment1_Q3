#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<string>

#include "output.hpp"
#include "mergeSort.hpp"

int main(){
   std::ifstream file_input;

   std::string file_input_name;
   using std::ios;

   //User enters file name to enter
   std::cout << "Enter file name to open: ";
   std::cin >> file_input_name;

   file_input.open(file_input_name.c_str(),std::ios::in);

   //Invalid file names will be reprompted
   while(file_input.fail()){
      std::cout << "An error occured while opening the file" << std::endl;
      std::cout << "Enter file name to open: ";
      std::cin >> file_input_name;
      file_input.open(file_input_name,std::ios::in);
   }
   std::cout << "File sucessfully opened." << std::endl;
   //If file was sucessfully located
   if(file_input.good())
   {
      std::string str;
      while(getline(file_input,str)){ //Get file by line
	       std::vector<int>array;
	       std::istringstream ss(str);
	       int num;
	       while(ss >> num){ //Get each int in current line
	          array.push_back(num);
	       }
	       mergeSort(array,0,array.size()-1); //Sort line
	       output(array); //Append sorted line to output file
      }

      file_input.close(); //Close file

   }
   return 0;
}
