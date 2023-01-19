// pattern: prefix sum
// Give an integer array 'a', return the prefix sum/running sum in the same array
// without creating a new array ...

#include <iostream>
#include <vector>

using namespace std;

void prefixSum(vector<int> &v)
{
  for (int i = 1; i < v.size(); i++)
  {
    v[i] += v[i - 1];
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
  prefixSum(v);

  for (int j = 0; j < v.size(); j++)
  {
    cout << v[j] << " ";
  }

  return 0;
}