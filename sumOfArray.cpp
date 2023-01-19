#include <iostream>
using namespace std;
int sumOfArray(int arr1[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr1[i];
  }
  return sum;
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
  cout << "The sum of array is " << sumOfArray(arr, size) << endl;
  return 0;
}
