// Pattern: targetSum..
// TODO: Find the total number of pairs in the Array whose sum is equal to the given value x....

#include <iostream>
using namespace std;
int findPairs(int array1[], int size, int targetSum)
{
  int pairs = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = i + 1; j < size; j++)
    {
      if (array1[i] + array1[j] == targetSum)
      {
        pairs++;
      }
    }
  }
  return pairs;
}
int main()
{
  int array1[5] = {5, 8, 7, 3, 1};
  int targetSum = 8;
  int size = sizeof(array1) / sizeof(array1[0]);
  cout << findPairs(array1, size, targetSum) << endl;

  return 0;
}