//Reverse of a string using push_back
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string s_rev;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        s_rev.push_back(s[i]);
    }
    cout << s_rev;
}
//push_back() function is used to push elements into a vector or array from the back.
