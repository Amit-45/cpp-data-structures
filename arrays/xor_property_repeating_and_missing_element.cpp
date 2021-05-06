#include <bits/stdc++.h>
using namespace std;

void repeatAndMissing(int arr[], int n, int b[])
{
    int xor1;

    int set_bit_no;

    int i;

    xor1 = arr[0];

    for (i = 1; i < n; i++)
        xor1 = xor1 ^ arr[i];//xor of array elements

    for (i = 1; i <= n; i++)
        xor1 = xor1 ^ i;

    /* Get the rightmost set bit in set_bit_no */
    set_bit_no = xor1 & ~(xor1 - 1);

    for (i = 0; i < n; i++)
    {
        if (arr[i] & set_bit_no)

            b[0] = b[0] ^ arr[i];

        else

            b[1] = b[1] ^ arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        if (i & set_bit_no)
            b[0] = b[0] ^ i;
        else
            b[1] = b[1] ^ i;
    }
}


int main()
{
    int arr[] = {1, 3, 4, 5, 5, 6, 2};
    int b[] = {0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    repeatAndMissing(arr, n, b);
    cout << "Missing element = " << b[0] <<endl;
    cout<<"Repeating element = "<<b[1]<<endl;
      
    getchar();
}
