// TODO: Find yhe total number of triplets in the Array whose sum is equal to the given value x..
#include <iostream>
using namespace std;
int findTriplets(int array1[], int size, int targetSum)
{
  int pairs = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      for (int k = j + 1; k < size; k++)
      {
        if (array1[i] + array1[j] + array1[k] == targetSum)
        {
          pairs++;
        }
      }
    }
  }
  return pairs;
}
int main()
{
  int array1[] = {5, 8, 7, 3, 1, 2};
  int targetSum = 8;
  int size = sizeof(array1) / sizeof(array1[0]);
  cout << findTriplets(array1, size, targetSum);
  return 0;
}
