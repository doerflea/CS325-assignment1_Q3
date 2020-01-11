#include "output.hpp"
#include<iostream>
#include<fstream>
#include<vector>

void output(std::vector<int>array){
  std::fstream output_file;
  output_file.open("merge.txt", std::ios::out | std::ios::app);
  for(int i = 0; i < array.size(); i++){
    output_file << array[i] << " ";
  }
  output_file << std::endl;
  output_file.close();
}
