#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"\nEnter number to check prime or not: ";
    cin>>num;   //takes input from user.
    if(num%2 == 0)  //condition to check prime number. 
    {
        cout<<"\nThe number is NOT prime."<<endl;
    }
    else
    {
        cout<<"\nThe number is prime."<<endl;
    }
    return 0;
}