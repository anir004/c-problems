// Count the number of elements strictly greater than value x of an given Array...

#include <iostream>
#include <vector>
using namespace std;

int totalOccurrence(vector<int> &v, int element)
{
  int occurrence = 0;
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] > element)
    {
      occurrence++;
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
  cout << totalOccurrence(vec1, element);
  return 0;
}