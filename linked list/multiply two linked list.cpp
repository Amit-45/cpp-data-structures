#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

struct Node *newNode(int data)
{
    struct Node *new_node = new Node(data);
    return new_node;
}
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}  
void reverse(Node** r)
{
    Node* prev=NULL;
    Node* cur=*r;
    Node* nxt;
    
    while(cur!=NULL)
    {
        nxt=cur->next;
        cur->next=prev;
        prev=cur;
        cur=nxt;
    }
    
    *r=prev;
}
void freeList(struct Node *Node)
{
    struct Node* temp;
    
    while(Node!=NULL)
    {
        temp=Node;
        Node=Node->next;
        free(temp);
    }
    
}
long long  multiplyTwoLists (Node* l1, Node* l2)
{
    Node* a=l1;
    Node* b=l2;
    long long n1=0,n2=0,m=1000000007;
    
    while(a)
    {
        n1=(n1*10)%m+a->data;
        a=a->next;
    }
    
    while(b)
    {
        n2=(n2*10)%m+b->data;
        b=b->next;
    }
    
    return (n1%m * n2%m)%m;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        struct Node* first = NULL;
        struct Node* second = NULL;
   
        int n,m,i,x;    
        cin>>n; 
        for(i=0;i<n;i++)
        {
            cin>>x;
       
            push(&first,x);
        }
        cin>>m; 
        for(i=0;i<m;i++)
        {
            cin>>x;
            push(&second,x);
        }
        reverse(&first);
        reverse(&second);
        cout<<"Result is: ";
        cout<<multiplyTwoLists(first, second)<<"\n";
        freeList(first);
        freeList(second);
    
    }
    
    return 0;
}
