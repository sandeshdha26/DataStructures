#include<iostream>
using namespace std;

int main()
{
    int n, i, temp;
    cout<<"\nHow many numbers in array: ";
    cin>>n;
    cout<<"\nEnter elements in array: ";
    int arr[n];
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i];
    }
        {
            //temp = arr[0], i;
            temp = arr[0];
            for(i = 0;i< n-1; i++)
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
        cout<<"\nArray after rotation: ";
    for(int i = 0;i < n;i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;
}