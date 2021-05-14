#include <bits/stdc++.h>
using namespace std;

int countKey(int arr[], int n, int key)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      count++;
    }
  }
  return count;
}
int main()
{

  int arr[] = {1, 5, 4, 7, 8, 9, 0, 7, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 7;

  cout << countKey(arr, n, key);
}
