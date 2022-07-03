// { Driver Code Starts
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int intersectPoint(struct Node* head1, struct Node* head2);

Node* inputList(int size)
{
    if(size==0) return NULL;
    
    int val;
    cin>> val;
    
    Node *head = new Node(val);
    Node *tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

/* Driver program to test above function*/
int main()
{
    int T,n1,n2,n3;

    cin>>T;
    while(T--)
    {
        cin>>n1>>n2>>n3;
        
        Node* head1 = inputList(n1);
        Node* head2 = inputList(n2);
        Node* common = inputList(n3);
        
        Node* temp = head1;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        temp = head2;
        while(temp!=NULL && temp->next != NULL)
            temp = temp->next;
        if(temp!=NULL) temp->next = common;
        
        cout << intersectPoint(head1, head2) << endl;
    }
    return 0;
}

// } Driver Code Ends


/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

int intersectPoint(Node* head1, Node* head2)
{
   // Your Code Here
   Node *c=head1;
   int c1=0;
   while(c)
   {
       c1++;
       c=c->next;
   }
   int c2=0;
   c=head2;
   while(c)
   {
       c2++;
       c=c->next;
   }
   Node *t2=head2;
   Node *t1=head1;
   
   if(c1<c2)
   {
       while(c2-1!=c1)
       {
           t2=t2->next;
           c2--;
       }
       while(t1!= NULL && t2!=NULL)
       {
           if(t2->next==t1)
           return t1->data;
           else
           {
               t1=t1->next;
               t2=t2->next;
           }
       }
       return -1;
   }
   else if(c1>c2)
   {
       while(c1-1!=c2)
       {
           t1=t1->next;
           c1--;
       }
       while(t1!= NULL && t2!=NULL)
       {
           if(t1->next==t2)
           return t2->data;
           else
           {
               t1=t1->next;
               t2=t2->next;
           }
       }
       return -1;
   }
   else
   {
       while(t1!= NULL && t2!=NULL)
       {
           
           if(t1->next==t2->next)
           return t2->next->data;
           else
           {
               t1=t1->next;
               t2=t2->next;
           }
       }
       return -1;
   }
}