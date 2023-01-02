/*Dylan Parrott cpp for mergeSort class*/
#include "mergesort.h"
using namespace std;
void mergesort::mergeSort(vector<int> &temp, vector<int> &my_vector, int start, int end)
{

  for (int mergeSize = 1; mergeSize <= my_vector.size()-1;mergeSize=2*mergeSize)
  {

    for (int i = 0; i < my_vector.size()-1;i+= 2*mergeSize)
    {
      int minimum;
      int mid = i+mergeSize;



      if (i+2*mergeSize-1 > my_vector.size()-1)
      {
        minimum = my_vector.size()-1;

      }
      else
      {
        minimum = i+2*mergeSize-1;
      }
      if (mid > my_vector.size()-1)
      {
        mid = i+((my_vector.size()-i)/2);
      }
      merge(temp,my_vector,i,mid,minimum);
    }
  }

}

void mergesort::merge(vector<int> &temp, vector<int> &my_vector, int curLeft, int curRight, int endRight)
{

  int endLeft = curRight-1;
  int curTemp = curLeft;
  int numElems = endRight - curLeft + 1;


  while (curLeft <= endLeft && curRight <= endRight)
  {
    if (my_vector[curLeft] <= my_vector[curRight])
    {

      temp[curTemp++] = my_vector[curLeft++];
    }
    else
    {
      temp[curTemp++] = my_vector[curRight++];
    }
  }
  while (curLeft <= endLeft)
  {
    temp[curTemp++] = my_vector[curLeft++];
  }
  while (curRight <= endRight)
  {
    temp[curTemp++] = my_vector[curRight++];
  }
  for (int i = 0; i < numElems; i++,endRight--)
  {
    my_vector[endRight] = temp[endRight];
  }
}
