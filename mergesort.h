/*Dylan Parrott
Includes the functions needed for MergeSort*/
#ifndef MERGESORT_H
#define MERGESORT_H
#include <iostream>
#include<vector>
using namespace std;

class mergesort
{
  public:
    void mergeSort(vector<int> &temp, vector<int> &my_vector,int start, int end);
    /*does the determining of mergeSizes and which segments of elements will be sorted*/
    void merge(vector<int> &temp, vector<int> &my_vector, int curLeft, int curRight, int endright);
    /*does the merging of two parts of the vector*/
};
#endif
