#include<iostream>
using namespace std;

class Queue
{
    private:
    int front;
    int rear;
    int arr[7];
    public:
        Queue()
        {
            front = -1;
            rear = -1;
            for(int i = 0;i < 7; i++)
            {
                arr[i] = 0;
            }
        }
    bool isEmpty()
    {
        if(front == -1 && rear == -1)
        return true;
        else
        return false;
    }
    bool isFull()
    {
        if(rear == sizeof(arr)-1)
        return true;
        else
        return false;
    }
    void enqueue(int val)
    {
        if(isFull())
        {
            cout<<"\nQueue is Full"<<endl;
            return;
        }  
        else if(isEmpty())
        {
            rear = 0;
            front = 0;
            arr[rear] = val;
        }
        else
        {
            rear++;
            arr[rear] = val;
        }
    }
    int dequeue()
    {
        int x = 0;
        if(isEmpty())
        {
            cout<<"\nQueue is Empty"<<endl;
            return 0;
        }
        else if(front == rear)
        {
            x = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front++;
            return x;
        }
    }
    void display()
    {
        for(int i = 0;i < 7; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
    int count()
    {
        return (rear - front + 1);
    }
};

int main()
{
    Queue qu;
    int value, option;

    do
    {
        cout<<"\n----------------QUEUE----------------"<<endl;
        cout<<"1. isFull\n2. isEmpty\n3. Enqueue\n4. Dequeue\n5. Display contents\n6. Counting Size\n7. Exit"<<endl;
        cout<<"Enter any choice you want: ";
        cin>>option;
        switch (option)
        {
        case 1:
            if(qu.isFull())
                cout<<"\nQueue is full."<<endl;
            else
                cout<<"There is some space.";
            break;
        case 2:
           if(qu.isEmpty())
            cout<<"Queue is empty."<<endl;
            else
                cout<<"Something is there in the Queue.";
            break;
        case 3:
            cout<<"\nEnter something to enqueue: ";
            cin>>value;
            qu.enqueue(value);
            cout<<value<<" has been inserted."<<endl;
            break;
        case 4:
            cout<<"The number "<<qu.dequeue()<<" has been deleted."<<endl;
            break;
        case 5:
            cout<<"Elements in the Queue displayed: ";
            qu.display();
            break;
        case 6:
            cout<<"Size of the Queue: "<<endl;
            cout<<qu.count();
            break;
        case 7:
            exit(0);
            break;
        default:
            cout<<"Invalid Option"<<endl;
            break;
        }
    } while (option != 0);  
    return 0;
}