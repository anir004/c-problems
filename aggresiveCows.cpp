#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
  int cowsCount = 1;
  int lastpos = stalls[0];
  for (int i = 0; i < stalls.size(); i++)
  {
    if (stalls[i] - lastpos >= mid)
    {
      cowsCount++;
      if (cowsCount == k)
      {
        return true;
      }
      lastpos = stalls[i];
    }
  }
  return false;
}

int aggresiveCows(vector<int> &stalls, int k)
{
  sort(stalls.begin(), stalls.end());
  int start = 0;
  int maxi = -1;
  for (int i = 0; i < stalls.size(); i++)
  {
    maxi = max(maxi, stalls[i]);
  }
  int end = maxi;
  int answer = -1;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (isPossible(stalls, k, mid))
    {
      answer = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return answer;
}

int main()
{
  vector<int> stalls = {4, 2, 1, 3, 6};
  int k = 2; // No. of Cows
  cout << "The largest minimum distance is : " << aggresiveCows(stalls, k) << endl;
  return 0;
}