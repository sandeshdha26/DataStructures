#include<iostream>
using namespace std;

class stack
{
private:
    int top;
    int arr[10];
public:
    stack()     //class constructor
    {
        top = -1;
        for(int i = 0;i < 10; i++)
        {
            arr[i] = 0;
        }
    }
    
    bool isFull()   //function to check if stack is full
    {
        if(top == 9)
            return true;
        else
            return false;
    }
    bool isEmpty()  //function to check if stack is empty
    {
        if(top == -1)
            return true;
        else   
            return false;
    }
    void push(int val)  //function for pushing element in stack
    {
        if(isFull())
            cout<<"\nArray Overflow."<<endl;
        else
        {
            top++;              //first increment top index
            arr[top] = val;     //then add value to top index
        }
    }    
    int pop()   //function for popping element from stack
    {
        if(isEmpty())
        {
            cout<<"\nStack Underflow."<<endl;
            return 0;
        }
        else
        {
            int temp = arr[top];    //move top index value to temp variable
            arr[top] = 0;           //set value to 0, means there is no value at top
            top--;                  //decrement top index
            return temp; 
        }
    }
    void change(int pos, int val)   //if you want to change certain value at specified position
    {
        arr[pos] = val;
        cout<<"Value Changed.";
    }
    int display()   //function to display contents of stack
    {
        for(int i = 10;i >= 0; i--)
        {
            cout<<"\n"<<arr[i]<<endl;
        }
        return 0;
    }
};

int main()
{
    stack st;
    int ch, value, position;
    do
    {
        cout<<"\n----------------Stack Operation----------------"<<endl;
        cout<<"1. isFull\n2. isEmpty\n3. Push\n4. PoP\n5. Change\n6. Display\n7. Exit\n8. Clear Screen."<<endl;
        cout<<"Enter any choice you want: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            if(st.isFull())
                cout<<"\nStack is full."<<endl;
            else
                cout<<"There is some space.";
            break;
        case 2:
           if(st.isEmpty())
            cout<<"Stack is empty."<<endl;
            else
                cout<<"Something is there in the stack.";
            break;
        case 3:
            cout<<"\nEnter something to push in stack: ";
            cin>>value;
            st.push(value);
            cout<<value<<" has been pushed."<<endl;
            break;
        case 4:
            cout<<"The number "<<st.pop()<<" has been popped"<<endl;
            break;
        case 5:
            cout<<"\nEnter the position you want to change: ";
            cin>>position;
            cout<<"\nEnter the value to replace: ";
            cin>>value;
            st.change(position, value);
            cout<<"\nTask completed."<<endl;
            break;
        case 6:
            cout<<"\nDisplaying Stack: ";
            st.display();
            break;
        case 7:
            exit (0);
            break;
        case 8:
            system("cls");
            break;
        default:
            cout<<"\nSO you have chosen, DEATH !"<<endl;
            break;
        }
    } while (ch != 0);
    return 0;
}