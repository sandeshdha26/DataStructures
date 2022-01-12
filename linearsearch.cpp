#include<iostream>
using namespace std;
void linearSearch(int a[], int n, int s)
{
    int i;
    for(i = 0;i < 50; i++)
    {
        if(a[i] == n)   //n means value to be searched
        {
            cout<<"\nElement is found at "<<i<<" location."<<endl;
            break;
        }
    }
        if(a[i] != n)
        {
            cout<<"Element not found anywhere!"<<endl;
        }
}
int main()
{
    int n, size;
    cout<<"\nEnter the size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter array elements: ";
    for(int i = 0;i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter number to be searched: ";
    cin>>n;
    linearSearch(arr, n, size);
    return 0;
}