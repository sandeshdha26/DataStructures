#include<iostream>
using namespace std;
void shellSort(int arr[], int size)
{
    for(int gap = size / 2;gap > 0; gap /= 2)
    {
        for(int j = gap;j < size; j+=1)
        {
            int temp = arr[j];
            int i = 0;
            for(i = j;(i>=gap) && (arr[i - gap]>temp);i-=gap)
            {
                arr[i] = arr[i-gap];
            }
            arr[i]=temp;
        }
    }
}

int main()
{
    int size;
    cout<<"\nEnter the size of the array: ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter "<<size<<" elements in random order: ";
    for(int i = 0;i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nBefore sorting: ";
    for(int i = 0;i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    shellSort(arr, size);
    cout<<"\nAfter sorting: ";
    for(int i = 0;i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}