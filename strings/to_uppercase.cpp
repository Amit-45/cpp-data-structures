//Covert lower case to upper case
#include <bits/stdc++.h>
using namespace std;
char toUpper(char c)
{
    return 'A' + (c - 'a');
}

void solve()
{
    string s;

    while (cin >> s)
    {
        for (int i = 0; s[i] != '\0'; i++)
        {
            s[i] = toUpper(s[i]);
        }
        cout << s << "\n";
    }
}
int main()
{
    solve();
}
