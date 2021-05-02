//Method 1:Dutch national flag algorithm
//This algorithm is used to sort an array of 0s 1s and 2s without the use of extra space or sorting algorithms
//Most optimal solution
//Other approaches-ARRAY SORTING or COUNTING SORT
//O(n) time comlexity
//O(1) space complexity
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void sort012(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            continue;
        case 1:
            mid++;
            continue;
        case 2:
            swap(a[mid], a[high--]);
            continue;
        }
    }
}

int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    //cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort012(a, n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}

//method2:
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int c0 = 0;//count of 0
    int c1 = 0;//count of 1
    int c2 = 0;//count of 2

    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;

        if (arr[i] == 1)
            c1++;

        else
            c2++;
    }

    int k=0;
    for (i = 0; i < c0; i++)
    {
        arr[k++]=0;
    }
    for (i = 0; i < c1; i++)
    {
        arr[k++]=1;
    }
    for (i = 0; i < c2; i++)
    {
        arr[k++]=2;
    }

    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

*/
