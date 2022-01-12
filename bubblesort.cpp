#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    for(i = 0;i < n; i++)
    {
        for(j = 0;j < n-i-1; j++)
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j+1] = temp;
        }
    }
}

int main()
{
    int size, k, array[100];
    cout<<"\nEnter the size of an array: ";
    cin>>size;
    cout<<"\nEnter "<<size<<" elements in random order: ";
    for(k = 0;k < size; k++)
    {
        cin>>array[k];
    }
    cout<<"\nArray BEFORE sorting!: ";
    for(k = 0;k < size; k++)
    {
        cout<<array[k]<<"  ";
    }
    cout<<endl;
    bubbleSort(array, size);
    cout<<"Array AFTER sorting: ";
    for(k = 0;k < size; k++)
    {
        cout<<array[k]<<"  ";
    }
}