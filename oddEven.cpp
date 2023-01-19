// pattern: Two pointer
//  Give an array of integers 'a', move all the even integers at the beginning at the array followed by all the odd integers...

#include <iostream>
#include <vector>
using namespace std;

void findOddEven(vector<int> &v)
{
  int leftPtr = 0;
  int rightPtr = v.size() - 1;

  while (leftPtr < rightPtr)
  {
    if (v[leftPtr] % 2 == 1 && v[rightPtr] % 2 == 0)
    {
      swap(v[leftPtr], v[rightPtr]);
      leftPtr++;
      rightPtr--;
    }
    if (v[leftPtr] % 2 == 0)
    {
      leftPtr++;
    }
    if (v[rightPtr] % 2 != 0)
    {
      rightPtr--;
    }
  }
  return;
}

int main()
{
  int n;
  cin >> n;
  vector<int> v;

  // scan the value from user

  for (int i = 0; i < n; i++)
  {
    int element;
    cin >> element;
    v.push_back(element);
  }
  findOddEven(v);
  for (int j = 0; j < n; j++)
  {
    cout << v[j] << " ";
  }
  return 0;
}