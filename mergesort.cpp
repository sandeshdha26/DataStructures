#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int i = l;
    int j = m+1;
    int k = l;
    int temp[10];

    while(i<=m && j<=r)
    {
        if(arr[i] < arr[j]) //if left sub-array element is greater
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else    //if right sub-array element is greater
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    while(j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    for(int s = l;s <= r; s++) //moving elements from temp to arr
    {
        arr[s] = temp[s];
    }
}
void mergeSort(int arr[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    cout<<"\nEnter elements to sort in ranodm order: ";
    int array[10];
    for(int b = 0; b < 10; b++)
    {
        cin>>array[b];
    }
    cout<<"\nBEFORE sorting: ";
    for(int b = 0; b < 10; b++)
    {
        cout<<array[b]<<"  ";
    }
    mergeSort(array, 0, 9);
    cout<<"\nAFTER sorting: ";
    for(int b = 0; b < 10; b++)
    {
        cout<<array[b]<<"  ";
    }
    return 0;
}