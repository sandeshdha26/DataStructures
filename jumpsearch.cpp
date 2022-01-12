#include<iostream>
#include<cmath>
using namespace std;

int jumpSearch(int arr[], int elem, int n)
{
    int i = 0;
    int m = sqrt(n);

    while (arr[m] <= elem && m < n)
    {
        i = m;
        m = m + sqrt(n);
        if(m > n-1)
            return -1;
    }
    for(int x = i; x < m; x++) //linear search is performed
    {
        if(arr[x]==elem)
        return x;
    }
    return -1;   
}

int main()
{
    int elem, loc;
    int arr[] = {0,11,21,34,43,51,67,74,89,98,107,116,125,134,143,152,161};
    cout<<"\nEnter number to be seached: "<<endl;
    cin>>elem;
    int n = sizeof(arr) / sizeof(arr[0]);
    loc = jumpSearch(arr, elem, n);
    if(loc >= 0)
        cout<<elem<<" is found at "<<loc<<" location."<<endl;
    else
        cout<<"Number is not present in an array."<<endl;
    return 0;
}