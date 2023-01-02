/*Dylan Parrott main method where file is added and ints are read into vector
and vector is outputted to another output file*/
#include "mergesort.h"
#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char** argv)
{
  char* filename = argv[1];
  char*outFileName = argv[2];
  ifstream inFile;
  inFile.open(filename);
  int temp;
  vector<int> my_vector;
  vector<int> temp2;
  mergesort newSort;
  if (inFile.fail())
  {
    cout<<"Could not open to read"<<filename<<endl;
    exit(1);
  }
  ofstream outFile;
  outFile.open(outFileName);
  if (outFile.fail())
  {
    cout<<"Could not open "<<outFileName<<endl;
  }
  while (inFile >> temp)
  {
    my_vector.push_back(temp);
  }
  temp2 = my_vector;
//  cout<<"size of vector is "<<newSort.my_vector.size()<<endl;
  newSort.mergeSort(temp2,my_vector,0,(my_vector.size() - 1));
//  for (int i = 0; i < newSort.my_vector.size(); i++)
//  {
//    cout<<newSort.my_vector[i]<<endl;
//  }
cout<<my_vector.size()<<endl;
  for (int i = 0; i < my_vector.size();i++)
  {
    outFile<<my_vector[i]<<endl;
  }
}
