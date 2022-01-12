#include<iostream>
using namespace std;

class Node
{
    public:
        int key;
        int data;
        Node* next;
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
    }
};

class circularLL
{
    public:
    Node* head;

    circularLL()
    {
        head = NULL;
    }

    Node* nodeExists(int k)
    {
        Node* temp = NULL;
        Node* ptr = head;
        if(ptr == NULL)
        {
            return temp;
        }
        else
        {
            do
            {
                if(ptr->key == k)
                {
                    temp = ptr;
                }
                ptr = ptr->next;
            } while (ptr != head);
            return temp;
        }
    }

    void appendNode(Node *new_node)
    {
        if(nodeExists(new_node->key) != NULL)
        {
            cout<<"Node already exists with key value "<<new_node->key<<". Try with new key"<<endl;
        }
        else
        {
            if(head == NULL)
            {
                head = new_node;
                new_node->next = head;
                cout<<"\nNode appended at head position."<<endl;
            }            
            else
            {
                Node* ptr = head;
                while(ptr->next != head)
                {
                    ptr = ptr->next;
                }
                ptr->next = new_node;
                new_node->next = head;
                cout<<"\nNode appended."<<endl;
            }
        }
    }
    void prependNode(Node* new_node)
    {
        if(nodeExists(new_node->key) != NULL)
        {
            cout<<"\nNode with "<<new_node->key<<" key already exists. Try with another key value."<<endl;
        }
        else
        {
            if(head == NULL)
            {
                head = new_node;
                new_node->next = head;
                cout<<"\nNode prepended at head position."<<endl;
            }
            Node* ptr = head;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr -> next = new_node;
            new_node -> next = head;
            head = new_node;
            cout<<"\nNOde prepended."<<endl;
        }
    }

    void insertAfterNode(int k, Node* new_node)
    {
        Node* ptr = nodeExists(k);
        if(ptr==NULL)
        {
            cout<<"\nNo node exists with key value "<<k<<endl;
        }
        else
        {
            if(nodeExists(new_node->key)!=NULL)
            {
                cout<<"\nNode already exists with key "<<new_node->key<<"."<<endl;
                cout<<"Try another key..."<<endl;
            }
            else
            {
                if(ptr->next==head)
                {
                    new_node->next = head;
                    ptr->next = new_node;
                    cout<<"\nNode inserted at the end."<<endl;
                }
                else
                {
                    new_node -> next = ptr -> next;
                    ptr -> next = new_node;
                    cout<<"\nNOde inserted after "<<ptr->key<<"."<<endl;
                }
            }
        }
    }
    
    void delelteNodeByKey(int k)
    {
        Node* ptr = nodeExists(k);
        if(ptr == NULL)
        {
            cout<<"No node exists with such value."<<endl;
        }
        else
        {
            if(ptr == head)
            {
                if(head -> next == head)
                {
                    head = NULL;
                    cout<<"\nHead deleted. List is empty."<<endl;
                }
                else
                {
                    Node* ptr1= head;
                    while(ptr1 -> next !=head)
                    {
                        ptr1 = ptr1 ->next;
                    }
                    ptr1->next=head->next;
                    head=head->next;
                    cout<<"\nNode unlinked with key "<<k<<"."<<endl;
                }
            }
            else
            {
                Node* temp = NULL;
                Node* prevptr = head;
                Node* curptr = head -> next;
                while (curptr != NULL)
                {
                    if(curptr -> key == k)
                    {
                        temp = curptr;
                        curptr = NULL;
                        //delete(curptr);
                    }
                    else
                    {
                        prevptr = prevptr->next;
                        curptr = curptr->next;
                    }
                }
                prevptr->next=temp->next;
                cout<<"Node unlinked with value "<<k<<"."<<endl;
            }
        }
    }

    void updateNode(int k, int d)
    {
        Node* ptr = nodeExists(k);  
        if (ptr != NULL)
        {
            ptr -> data = d;
            cout<<"\nNode updated successfully"<<endl;
        }
        else
        {
            cout<<"\nNode not found"<<endl;
        }   
    }
    void printList()    //print linked list
    {
        if(head == NULL)
        {
            cout<<"\nNothing is here. Try inserting some nodes first."<<endl;
        }
        else
        {
            cout<<"Head Address: "<<head<<endl;
            cout<<"Doubly Linked List Values: "<<endl;
            Node* temp = head;
            do
            {
                cout<<"["<<temp->key<<", "<<temp->data<<", "<<temp->next<<"] --> ";
                temp = temp -> next;
            } while(temp != head);
        }
    }
};  

int main()  //main function
{
    circularLL cll;
    int option;
    int key1, k1, data1;
    do
    {
        cout<<"\n-----------Doubly Linked List-----------";
        cout<<"\nOperations on the list. Enter 0 to exit."<<endl;
        cout<<"1. appendNode(Insert at last)"<<endl;
        cout<<"2. prependNode(insert at first)"<<endl;
        cout<<"3. insertAfterNode()"<<endl;
        cout<<"4. deleteNode()"<<endl;
        cout<<"5. updateNode()"<<endl;
        cout<<"6. Print()"<<endl;
        cout<<"7. Clear screen"<<endl;
        cout<<"Enter option here: ";
        cin>>option;
        Node* n1 = new Node();
        switch (option)
        {
        case 0:
            /* code */
            break;
        case 1:
            cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            cll.appendNode(n1);
        break;
        case 2:
            cout << "Prepend Node Operation \nEnter key & data of the Node to be Appended" << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
            cll.prependNode(n1);
        break;
        case 3:
            cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
            cin >> k1;
            cout << "Enter key & data of the New Node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1 -> key = key1;
            n1 -> data = data1;
        cll.insertAfterNode(k1, n1);
        break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      cll.delelteNodeByKey(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      cll.updateNode(key1, data1);

      break;
    case 6:
      cll.printList();
      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number "<<endl;
    }

  } while (option != 0);
  return 0;
}