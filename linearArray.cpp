#include <iostream>
using namespace std;
bool linearSearch(int arr[], int size, int key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return 1;
    }
  }
  return 0;
}
int main()
{
  int arr[10] = {45, 12, 4, 5, -6, 21, 3, 1, 9, 8};
  int key;
  cout << "Enter the element to search for " << endl;
  cin >> key;
  bool found = linearSearch(arr, 10, key);
  if (found)
  {
    cout << "key is present" << endl;
  }
  else
  {
    cout << "key is not present" << endl;
  }

  return 0;
}