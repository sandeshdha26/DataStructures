#include<iostream>
using namespace std;

void selectionSort(int arr[])
{
    for(int i = 0;i < 4; i++)
    {
        int min = i;
        for(int j = i+1;j < 5; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }     
        }   
        if(min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}

int main()
{
    int i, array[5];
    cout<<"\nEnter the 5 size array: "<<endl;
    for(i = 0; i < 5; i++)
    {
        cin>>array[i];
    }
    cout<<"\nArray BEFORE sorting: ";
    for(i = 0;i < 5; i++)
    {
        cout<<array[i]<<"  ";
    }
    cout<<endl;
    selectionSort(array);
    cout<<"\nArray AFTER sorting: ";
    for(i = 0;i < 5; i++)
    {
        cout<<array[i]<<"  ";
    }
    cout<<endl;
    return 0;
}