#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int key = 0;    //define key variable
    int j = 0;      //define j variable
    int i;
    for(i = 1;i < n; i++)   //start traversing from a[1] element, not from a[0]
    {
        key = arr[i];       //initially assigning a[1] value to key variable
        j = i - 1;          //initially assigning a[0] value to j
        while (j >= 0 && arr[j] > key)  //compare j to actual 0 and value at j variable to key variable
        {
            arr[j+1] = arr[j];          //move j to j+1
            j = j-1;
        }
        arr[j+1] = key; 
    }
}

int main()
{
    int sortarray[5], k;
    cout<<"\nEnter 5 elements in random order: ";
    for(k = 0;k < 5; k++)
    {
        cin>>sortarray[k];
    }
    cout<<"\nArray BEFORE sorting: "<<endl;
    for(int k = 0;k < 5; k++)
    {
        cout<<sortarray[k];
        cout<<"  ";
    }
    cout<<endl;
    insertionSort(sortarray, 5);
    cout<<"\nArray AFTER sorting: "<<endl;
    for(int k = 0;k < 5; k++)
    {
        cout<<sortarray[k];
        cout<<"  ";
    }
    return 0;
}