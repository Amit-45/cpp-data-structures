#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    int q;
    cin >> n >> q;
    vector<int> a[n];
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        int o;
        for(int j = 0; j < m; j++)
        {
            cin >> o;
            a[i].push_back(o);
        }
    }
    
    int r,s;
    for(int k = 1; k <= q; k++)
    {
        cin >> r >> s;
        cout << a[r][s] << endl;
    }
    return 0;
}
/*
Input:
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Output:
5
9
*/
