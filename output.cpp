#include "output.hpp"
#include<iostream>
#include<fstream>
#include<vector>

void output(std::vector<int>&array){
  std::fstream output_file;
  output_file.open("insert.txt", std::ofstream::out);
  for(int i = 0; i < array.size() - 1; i++){
    output_file << array[i] << " ";
  }
}
