// pattern: prefix sum
// check if we can partition the array two subarrays with equal sum...
#include <iostream>
#include <vector>
using namespace std;

string findEqualSum(vector<int> &v)
{
  int totalSum = 0, prefixSum = 0, suffixSum = 0;
  for (int i = 0; i < v.size(); i++)
  {
    totalSum += v[i];
  }

  for (int j = 0; j < v.size(); j++)
  {
    prefixSum += v[j];
    suffixSum = totalSum - prefixSum;
    if (prefixSum == suffixSum)
    {
      return "true";
    }
  }
  return "false";
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
  cout << findEqualSum(v);
  return 0;
}