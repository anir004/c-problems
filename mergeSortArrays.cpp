// TODO: Given teo vectors arr1[] and arr2[] of size m and n in the increasing order. Merge two arrays into a single sorted array of size m + n...

#include <iostream>
#include <vector>
using namespace std;
void mergeSortArrays(int arr1[], int arr2[], int m, int n)
{
  int i = 0, j = 0, k = 0;
  int result[m + n];
  while (i < m and j < n)
  {
    if (arr1[i] < arr2[j])
    {
      result[k] = arr1[i];
      k++;
      i++;
    }
    else
    {
      result[k] = arr2[j];
      k++;
      j++;
    }
  }
  while (i < m)
  {
    result[k] = arr1[i];
    i++;
    k++;
  }
  while (j < n)
  {
    result[k] = arr2[j];
    j++;
    k++;
  }
  for (int i = 0; i < (m + n); i++)
    cout << result[i] << " ";
  return;
}
int main()
{
  int arr1[] = {0, 1, 2, 5, 9};
  int arr2[] = {3, 4, 7, 9};
  int m = 5, n = 4;
  mergeSortArrays(arr1, arr2, m, n);
  return 0;
}
