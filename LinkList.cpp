#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* next;

        node(int val)
        {
            data = val;
            next = NULL;
        }
};

insertAthead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    head = n;
}

void insertAttail(node* &head, int val)
{
    node* n = new node(val);
    if(head == NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp ->next !=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void deleteAthead(node* &head)
{
    node* todelete = head;
    head = head->next;
    delete todelete;
}

void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteAthead(head);
    }
    node* temp = head;
    while(temp->next->data !=val)
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp= temp->next;
    }
    cout<<"NULL"<<endl;
}

bool search(node* head, int key)
{
    node* temp = head;
    while(temp != NULL)
    {   if(temp->data==key)
        {
            return true;
        }
        temp = temp->next;    
    }
    return false;
}

// node* reverse(node* &head)
// {
//     node*  preptr=NULL;
//     node* curptr = head;
//     node* nextptr;
//     while(curptr !=NULL)
//     {
//         nextptr = curptr->next;
//         curptr->next = preptr;
//         preptr = curptr;
//         curptr = nextptr;
//     }
//     return preptr;
// }


int main()
{
    node* head = NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    // display(head);
    insertAthead(head,4);
    display(head);
    // node* newhead = reverse(head);
    // display(newhead);
    cout<<search(head,3)<<endl;
    deletion(head, 3);
    deleteAthead(head);
    display(head);
}