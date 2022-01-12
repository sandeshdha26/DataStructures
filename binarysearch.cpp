#include<iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int num)
{
    while(left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == num)
        {
            return mid; 
        }
        else if(arr[mid] > num)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int array[10], number, output;
    cout<<"\nEnter 10 integers in ascending sorted order: ";
    for(int i = 0;i < 9; i++)
    {
        cin>>array[i];
    }
    cout<<"\nEnter the number to search: ";
    cin>>number;
    output = binarySearch(array, 0, 9, number);
    if(output == -1)
    {
        cout<<"\nNo match found.";
    }
    else
    {
        cout<<"\nThe number is found at "<<output<<" location";
    }
    return 0;
}