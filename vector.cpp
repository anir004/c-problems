#include <iostream>
#include <vector>
using namespace std;
void printVector(vector<int> &v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
int main()
{
  vector<int> v;
  int element, size;
  cout << " Enter thr size of your vector" << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    cout << "Enter an element to add this vector: ";
    cin >> element;
    v.push_back(element);
  }
  // v.pop_back();
  printVector(v);
  v.insert(v.begin() + 3, 6, 23);
  printVector(v);
  // v[0] = 12;
  // cout << v[0] << endl;
  // cout << v.size() << endl;
  // cout << v.capacity() << endl;
  // v.resize(2);
  // cout << v.size() << endl;
  // cout << v.capacity() << endl;
  // v.push_back(2);
  // cout << v[0] << endl;
  // cout << v[1] << endl;

  return 0;
}
