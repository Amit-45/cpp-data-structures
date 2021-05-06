#include <bits/stdc++.h>
using namespace std;

int minJumps(int arr[], int n)
{

    if (n <= 1)
    {

        return 0;
    }
    if (arr[0] == 0)
    {

        return -1;
    }
    int jump = 1, step = arr[0], r = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {

            return jump;
        }
        r = max(r, i + arr[i]);
        step--;
        if (step == 0)
        {
            jump++;
            if (i >= r)
            {

                return -1;
            }
            step = r - i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << minJumps(arr, n) << endl;
    }
    return 0;
}

/*
Input :
N= 6
arr= 1 4 3 2 6 7
Output: 2*/
