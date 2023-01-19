#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
void pattern5(int n)
{
  for (int row = 0; row < 2 * n; row++)
  {
    // int totalColsInRow = row > n ? 2 * n - row : row;
    int totalColsInRow;
    if (row > n)
    {
      totalColsInRow = 2 * n - row;
    }
    else
    {
      totalColsInRow = row;
    }
    for (int col = 0; col < totalColsInRow; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
void pattern6(int n)
{
  for (int row = 0; row < 2 * n; row++)
  {
    // int totalColsInRow = row > n ? 2 * n - row : row;
    int totalColsInRow;
    if (row > n)
    {
      totalColsInRow = 2 * n - row;
    }
    else
    {
      totalColsInRow = row;
    }

    int noOfSpaces = n - totalColsInRow;
    for (int spaces = 0; spaces < noOfSpaces; spaces++)
    {
      cout << " ";
    }

    for (int col = 0; col < totalColsInRow; col++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void pattern30(int n)
{
  for (int row = 1; row <= n; row++)
  {
    for (int space = 0; space < n - row; space++)
    {
      cout << "  ";
    }
    for (int col = row; col >= 1; col--)
    {
      cout << col << " ";
    }
    for (int col = 2; col <= row; col++)
    {
      cout << col << " ";
    }
    cout << endl;
  }
}

void pattern31(int n)
{
}

void fibonacci(int n)
{
  int a = 0, b = 1;
  cout << a << " " << b << " ";
  for (int i = 1; i <= n; i++)
  {
    int nextNumber = a + b;
    cout << nextNumber << " ";
    a = b;
    b = nextNumber;
  }
}
int main()
{
  // pattern30(5);
  // fibonacci(10);
  // for (int i = 0; i <= 5; i--)
  // {
  //   cout << i << " ";
  //   i++;
  // }
  int b = 445;
  cout << sizeof(b);
  // for (; b < 8; b++)
  // {
  //   cout << b;
  // }
  return 0;
}