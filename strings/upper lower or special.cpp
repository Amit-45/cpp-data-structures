//Upper case , lower case ,Digit or special character
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    char c;
    cin >> c;
    if (c >= 'a' && c <= 'z')
    {
        cout << "Lower case"
             << "\n";
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "Upper case"
             << "\n";
    }
    else if (c >= 48 && c <= 57)
    {
        cout << "Digit"
             << "\n";
    }

    else
    {
        cout << "Special character"
             << "\n";
    }
}
int main()
{
    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();
    }
}
