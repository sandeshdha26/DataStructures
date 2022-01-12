#include<iostream>
using namespace std;
/*void swap(int &aa, int &ab)     //defining swap function to use later
{
    int temp = aa;
    aa = ab;
    ab = temp;
}*/
int partition(int arr[], int start_element, int end_element)
{
    int pivot = arr[end_element];
    int pIndex = start_element;
    for(int i = start_element;i <= end_element - 1; i++)
    {
        if(arr[i] < pivot)
        {
            //swap(arr[i], arr[pIndex]);
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    //swap(arr[end_element], arr[pIndex]);
    int temp = arr[end_element];
    arr[end_element] = arr[pIndex];
    arr[pIndex] = temp;
    return pIndex;
}
void quickSort(int arr[], int start_element, int end_element)
{
    if(start_element < end_element)
    {
        int p = partition(arr, start_element, end_element);
        quickSort(arr, start_element, (p - 1));     //recursion occurs here for left partition
        quickSort(arr, (p + 1), end_element);       //recursion occurs here for right partition
    }
}

int main()
{
    int size = 0;
    cout<<"\nEnter the size: ";
    cin>>size;
    int myArray[size];      //you can define an array with dynamic size in this way.
    cout<<"\nEnter "<<size<<" elements in random order: "<<endl;
    for(int i = 0;i < size; i++)
    {
        cin>>myArray[i];
    }
    cout<<"\nArray BEFORE sorting: ";
    for(int i = 0;i < size; i++)
    {
        cout<<myArray[i]<<"  ";
    }
    //cout<<endl;
    quickSort(myArray, 0, (size-1));
    cout<<"\nArray AFTER sorting: ";
    for(int i = 0;i < size; i++)
    {
        cout<<myArray[i]<<"  ";
    }
    return 0;
}