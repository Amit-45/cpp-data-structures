//union of two arrays
//method1:
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int c[n + m];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        c[k++] = a[i];
    }
    for (int i = 0; i < m; i++)
    {
        int l = 0;
        for (int j = 0; j < n; j++)
        {
            if (c[j] == b[i])
            {
                l++;
            }
        }
        if (l > 0)
            continue;
        else
        {
            c[k++] = b[i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
}
int main()
{
    int t = 1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    //cin>>t;
    while (t--)
    {
        solve();
    }
}


//method2:

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        unordered_map<int,int> map;


        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            map[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
            map[b[i]]++;
        }
        cout<<map.size()<<endl;
        
    }
    return 0;
}*/
//Input :2
//5 3
//1 2 3 4 5
//1 2 3
//output
//5
//7
