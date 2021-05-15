//Program to check if a string is empty or not
//Using the empty() functiom
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "abc";
    str.clear(); //converts string to empty string
    if (str.empty())
        cout << "empty";
    else
        cout << "Not empty";
}
