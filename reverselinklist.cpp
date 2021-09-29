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

node* reverse(node* &head)
{
    node*  preptr=NULL;
    node* curptr = head;
    node* nextptr;
    while(curptr !=NULL)
    {
        nextptr = curptr->next;
        curptr->next = preptr;
        preptr = curptr;
        curptr = nextptr;
    }
    return preptr;
}

node* reverseRcursive(node* &head)
{

    if(head==NULL || head->next==NULL)
        return head;

    node* newhead = reverseRcursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}


int main()
{
    node* head = NULL;
    insertAttail(head,1);
    insertAttail(head,2);
    insertAttail(head,3);
    // display(head);
    insertAttail(head,4);
    display(head);
    node* newhead = reverseRcursive(head);
    display(newhead);
}

