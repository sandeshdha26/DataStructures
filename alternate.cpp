#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout<<"\nEnter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the numbers in array: ";
    for(int i = 0;i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe array as it is: ";
    for(int i = 0;i < n; i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"\nArray in which alternate numbers are printed out: ";
    for(int j = i;j < n; j++)
    {
        cout<<"\t"<<arr[j];
        j += 1;
    }
    return 0;
}