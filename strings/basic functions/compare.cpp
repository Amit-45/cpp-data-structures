/*compare function compares the value of the string with the string passed in the
parameter and returns an integer accordingly. 
Its time complexity is O(N +M) where N is the size of the first string and M is the size of the second
string.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "abc";
    string s2 = "def";
    int res = s2.compare(s1);     //returns 0 or 1
    cout << res;
}
//Jst as if s2 - s1 is done but lexicographically
//If we get 0 that means we have same string
//If we get a positive number that means
//the second string is lexicographically bigger than the first
