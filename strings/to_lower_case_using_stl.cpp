#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "ABCDEFG";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s;
}

//Syntax-First two arguements (beginning iterator,ending iterator)-->Takes the string as input
//-Third arguement (From which position of the string you want to covert )
//-Fourth arguement - converts the string to lower case
