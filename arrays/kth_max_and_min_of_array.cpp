#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k; //123456  2
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    cout << "Kth min:" << arr[k - 1] << endl;
    cout << "Kth max" << arr[n - k] << endl;
}
