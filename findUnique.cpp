// TODO: Array Manipulation
// TODO: Find the unique element in an Array..

#include <iostream>
using namespace std;
int findUnique(int arr[], int size)
{
  int answer = 0;
  for (int i = 0; i < size; i++)
  {
    answer = answer ^ arr[i];
  }
  return answer;
}
int main()
{
  int array[] = {2, 2, 1, 1, 9, 3, 3};
  int size = sizeof(array) / sizeof(array[0]);
  cout << findUnique(array, size) << endl;
  return 0;
}