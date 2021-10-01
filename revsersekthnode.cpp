#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val)
        {
            data = val;
            next = NULL;
        }
};
void insertAthead(node* &head, int val)
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
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head)
{
    node* temp = head;
    while(temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reversekth(node* &head, int k)
{ 
    node* preptr = NULL;
    node* curptr = head;
    node* nextptr;
    int count = 0;
    while(curptr !=NULL && count<k)
    {
        nextptr = curptr->next;
        curptr->next = preptr;
        preptr = curptr;
        curptr = nextptr;
        count++;
    }
    if(nextptr !=NULL)
    {
        head->next=reversekth(nextptr,k);
    }
    return preptr;
}

int main()
{
    node* head=NULL;
    insertAttail(head,1); 
    insertAttail(head,2);
    insertAttail(head,3);
    insertAttail(head,4);
    insertAttail(head,5);
    insertAttail(head,6);
    display(head);
    int k =3;
    node* newhead = reversekth(head, k);
    display(newhead);
}