// pattern: Two pointer
//  Given an integer array 'a' sorted in non - decreasing order, return an array of the squares of each number sorted in non-decreasing order...

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortedSquaredArray(vector<int> &v)
{
  vector<int> answer;
  int leftPtr = 0;
  int rightPtr = v.size() - 1;

  while (leftPtr <= rightPtr)
  {
    if (abs(v[leftPtr]) < abs(v[rightPtr]))
    {
      answer.push_back(v[rightPtr] * v[rightPtr]);

      rightPtr--;
    }
    else
    {
      answer.push_back(v[leftPtr] * v[leftPtr]);
      leftPtr++;
    }
  }
  reverse(answer.begin(), answer.end());
  for (int i = 0; i < v.size(); i++)
  {
    cout << answer[i] << " ";
  }
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
  sortedSquaredArray(v);

  return 0;
}