//Convert upper case to lower case
#include <bits/stdc++.h>
using namespace std;

char toLower(char c)
{
    return 'a' + (c - 'A');
}

void solve()
{
    string s;

    while (cin >> s)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = toLower(s[i]);
        }
        cout << s << "\n";
    }
}
int main()
{
    solve();
}
