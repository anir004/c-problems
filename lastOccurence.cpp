// Find the last occurrence of an element x in an given Array...

#include <iostream>
#include <vector>
using namespace std;

int lastOccurrence(vector<int> &v, int element)
{
  int occurrence = -1;
  for (int i = v.size() - 1; i >= 0; i--)
  {
    if (v[i] == element)
    {
      occurrence = i;
      return occurrence;
    }
  }
  return occurrence;
}

int main()
{
  vector<int> vec1(5);
  cout << "Enter the elements of the vector: " << endl;
  for (int i = 0; i < vec1.size(); i++)
  {
    cin >> vec1[i];
  }
  int element;
  cout << "Enter an element which you found: ";
  cin >> element;
  cout << lastOccurrence(vec1, element);
  return 0;
}