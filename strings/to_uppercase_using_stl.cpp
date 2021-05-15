//Upper case using stl
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abcdefgh";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;
}

//Syntax-First two arguements (beginning iterator,ending iterator)-->Takes the string as input
//-Third arguement (From which position of the string you want to covert )
//-Fourth arguement - converts the string to upper case
