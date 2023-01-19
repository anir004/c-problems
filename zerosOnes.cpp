// pattern Two pointer
//  Sort an array consisting of only 0's and 1's..

#include <iostream>
#include <vector>
using namespace std;

void sortZerosOnes(vector<int> &v)
{

  int zeroOnes = 0;
  // counting zeros
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == 0)
      zeroOnes++;
  }
  for (int j = 0; j < v.size(); j++)
  {
    if (j < zeroOnes)
      v[j] = 0;
    else
      v[j] = 1;
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
  sortZerosOnes(v);
  for (int j = 0; j < n; j++)
  {
    cout << v[j] << " ";
  }
  return 0;
}