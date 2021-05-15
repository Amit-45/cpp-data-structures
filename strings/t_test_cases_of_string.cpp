  
//Taking multiple lines of input for t test cases (using cin.ignore() and getline())
//Sample input :  3                Sample output:  abc def
//                abc def                          ghi jkl
//                ghi jkl					       mno pqr
//                mno pqr
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        cout << s << "\n";
    }
}
