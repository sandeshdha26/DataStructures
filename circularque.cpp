#include<iostream>
using namespace std;

class CircularQ
{
    private:
    int front;
    int rear;
    int arr[5];
    int itemCount;
    public:
    CircularQ()
    {
        itemCount = 0;
        rear = -1;
        front = -1;
        for(int i = 0;i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty() //function to check queue whether it is empty or not
    {
        if(rear == -1 && front == -1)
            return true;
        else
            return false;
    }
    bool isFull() //function to check queue whether it is full or not
    {
        if((rear + 1) % 5 == front)
            return true;
        else
            return false;
    }
    void enqueue(int val) //function for enqueing element in the queue
    {
        if(isFull()) //if the queue is full
        {
            cout<<"\nQueue is full. Try dequeing some elements.";
            return;
        }
        else if(isEmpty()) //if the queue is empty
        {
            front = 0;
            rear = 0;
            arr[rear] = val;
        }
        else
        {
            rear = (rear + 1) % 5;
            arr[rear] = val;
        }
        itemCount++;
    }
    int dequeue() //function for dequeue
    {
        int x = 0;
        if(isEmpty()) //if the queue is empty
        {
            cout<<"\nQueue is empty. Try enqueing something.";
            return x;
        }
        else if(rear == front) //if the queue has only single element
        {
            x = arr[front];
            front = -1;
            rear = -1;
            itemCount--;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            itemCount--;
            return x;
        }
    }
    int count()
    {
        return (itemCount);
    }
    void display()
    {
        for(int i = 0;i < 5; i++)
        {
            cout<<arr[i]<<"\t";
        }
    }
};

int main()
{
    CircularQ cq;
    int value, option;

    do
    {
        cout<<"\n----------------QUEUE----------------"<<endl;
        cout<<"1. isFull\n2. isEmpty\n3. Enqueue\n4. Dequeue\n5. Count\n6. Displaying Queue\n7. Exit\n8. Clear Screen"<<endl;
        cout<<"Enter any choice you want: ";
        cin>>option;
        switch (option)
        {
        case 1:
            if(cq.isFull())
                cout<<"\nQueue is full."<<endl;
            else
                cout<<"There is some space.";
            break;
        case 2:
           if(cq.isEmpty())
            cout<<"Queue is empty."<<endl;
            else
                cout<<"Something is there in the Queue.";
            break;
        case 3:
            cout<<"\nEnter something to enqueue: ";
            cin>>value;
            cq.enqueue(value);
            cout<<value<<" has been inserted."<<endl;
            break;
        case 4:
            cout<<"The number "<<cq.dequeue()<<" has been deleted."<<endl;
            break;
        case 5:
            cout<<"Size of the Queue: "<<endl;
            cout<<cq.count();
            break;
        case 6:
            cout<<"Elements in the Queue displayed: ";
            cq.display();
            break;
        case 7:
            exit(0);
            break;
        case 8:
            system("cls");
            break;
        default:
            cout<<"Invalid Option"<<endl;
            break;
        }
    } while (option != 0);  
    return 0;
}