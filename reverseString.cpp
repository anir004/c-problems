#include <iostream>
using namespace std;

void reverse(char *name, int n)
{
  int start = 0;
  int end = n - 1;
  while (start <= end)
  {
    swap(name[start++], name[end--]);
  }
}

int stringLength(char *name)
{
  int count = 0;
  for (int i = 0; name[i] != '\0'; i++)
  {
    count++;
  }
  return count;
}
int main()
{
  //   char arr1[20];

  //   cout << "My Name is " << arr1 << endl;

  char name[20];
  cin >> name;
  int length = stringLength(name);
  cout << "length: " << length << endl;
  reverse(name, length);
  cout << "My Name is : " << name << endl;
  return 0;
}