#include <iostream>
using namespace std;
bool checkPalindrome(char a[], int n)
{
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    if (a[start] != a[end])
      return false;
    else
    {
      start++;
      end--;
    }
  }
  return true;
}
int main()
{
  char arr1[] = {'a', 'b', 'c', 'b', 'a'};
  cout << checkPalindrome(arr1, 5) << endl;

    return 0;
}