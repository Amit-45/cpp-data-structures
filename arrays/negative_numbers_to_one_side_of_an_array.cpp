#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);

    int n; //123456  2
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 

    int t = 0;
    int i = -1;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > t)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
