#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr1[], int size)
{
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (arr1[i] > max)
    {
      max = arr1[i];
    }
  }
  return max;
}
int getMin(int arr1[], int size)
{
  int min = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    if (arr1[i] < min)
    {
      min = arr1[i];
    }
  }
  return min;
}
int main()
{
  int size;
  cin >> size;

  int arr[100];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "the max number is " << getMax(arr, size) << endl;
  cout << "the min number is " << getMin(arr, size) << endl;
  return 0;
}