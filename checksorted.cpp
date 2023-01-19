// Check if the Array sorted or not...

#include <iostream>
using namespace std;
int main()
{
  int arr1[] = {1, 2, 3, 4, 5, 6, 7};
  bool sortedFlag = true;
  for (int i = 1; i < 7; i++)
  {
    if (arr1[i] <= arr1[i - 1])
    {
      sortedFlag = false;
    }
  }
  cout << sortedFlag;
  return 0;
}