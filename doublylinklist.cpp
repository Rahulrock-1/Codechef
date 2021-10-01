#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node* prev;

        node(int val)
        {
            data = val;
            next = NULL;
            prev = NULL;
        }
};
void insertAthead(node* &head, int val)
{
    node* n = new node(val);
    n->next = head;
    if(head != NULL)
    {
        head->prev = NULL;
    }
    head = n;
}


void insertAttail(node* &head, int val)
{
    if(head==NULL)
    {
        insertAthead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void deleteAthead(node* &head)
{
    node* todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}

void deletion(node* &head, int pos)
{
    if(pos==1)
    {
        deleteAthead(head);
        return;
    }
    node* temp = head;
    int count = 1;
    while(temp !=NULL && count !=pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if(temp->next !=NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}


void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    node* head = NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    insertAttail(head, 5);
    insertAttail(head, 6);
    display(head);
    insertAthead(head, 7);
    display(head);
    deletion(head, 5);
    display(head);
    deleteAthead(head);
    display(head);
    // int n;
    // cin>>n;
    // int arr[100];
    // for(int i= 0; i<n; i++)
    // {
    //     insertAttail(head, arr[i]);
    // }
    // display(head);

}