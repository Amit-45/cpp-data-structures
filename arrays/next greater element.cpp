#include<iostream>                             
using namespace std;
void nextgreaterelement(int arr[],int n)                
{
    int next,i,j;
    for(int i=0;i<n;i++)
    {
        next=-1;                             
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                next=arr[j];
                break;
            }
        }
        cout<<arr[i]<<"_ _"<<next<<endl;     
    }
}
int main()                                    
{
   int arr[]={10,12,20,4};                     
    int n=sizeof(arr)/sizeof(arr[0]);
    nextgreaterelement(arr,n);                         
    return 0;
}
