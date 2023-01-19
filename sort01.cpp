// pattern: Two pointer
//  Sort an array consisting of only 0's and 1's..

#include <iostream>
#include <vector>
using namespace std;

void sortZerosOnes(vector<int> &v)
{
  int leftPtr = 0;
  int rightPtr = v.size() - 1;

  while (leftPtr < rightPtr)
  {
    if (v[leftPtr] == 1 && v[rightPtr] == 0)
    {
      v[leftPtr++] = 0;
      v[rightPtr--] = 1;
    }
    if (v[leftPtr] == 0)
    {
      leftPtr++;
    }
    if (v[rightPtr] == 1)
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
  sortZerosOnes(v);
  for (int j = 0; j < n; j++)
  {
    cout << v[j] << " ";
  }
  return 0;
}