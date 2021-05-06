//Program to find the duplicate as well as the missing element of an array containing n-1 integers 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void missingAndRepeating(int a[], int n)
{
    int b[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (b[i] == 0)
        {
            cout << "Missing no=" << i << endl;
        }
        if (b[i] > 1)
        {
            cout << "Repeating no=" << i << endl;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    missingAndRepeating(a, n);
}

/*
Input:
5
1 2 3 3 4
Output:
Repeating no=3
Missing no=5
*/
