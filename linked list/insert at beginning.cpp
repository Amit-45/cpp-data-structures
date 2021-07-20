//Insertion at Beginning in Singly Linked List 
#include <bits/stdc++.h>
using namespace std;

struct node 
{
    int num;                
    node *nextptr;             
}*stnode;

void createList(int n);                 
void insertatBegin(int num);	            
void display();                          
 
int main()
{
    int n,num;
		
    cout<<"Enter the number of nodes: ";
    cin>>n;
    createList(n);
    cout<<"\nLinked list data: \n";		
    display();
    cout<<"\nEnter data you want to insert at the beginning: ";
    cin>>num;
    insertatBegin(num);
    cout<<"\nLinked list after insertion: \n";		
    display();

    return 0;
}
void createList(int n) //create linked list.
{
    struct node *frntNode, *tmp;
    int num, i;
 
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode == NULL)        
    {
        cout<<" Memory can not be allocated";
    }
    else
    {
                                  
        cout<<"Enter the data for node 1: ";
        cin>>num;
        stnode-> num = num;      
        stnode-> nextptr = NULL; 
        tmp = stnode;
 
        for(i=2; i<=n; i++)
        {
            frntNode = (struct node *)malloc(sizeof(struct node)); 
 

            if(frntNode == NULL)
            {
                cout<<" Memory can not be allocated";
                break;
            }
            else
            {
                cout<<"Enter the data for node "<<i<<": ";
                cin>>num;
                frntNode->num = num;         
                frntNode->nextptr = NULL;    
                tmp->nextptr = frntNode;     
                tmp = tmp->nextptr;
            }
        }
    }
} 

void insertatBegin(int num) 
{
    struct node *frntNode;
    frntNode = (struct node*)malloc(sizeof(struct node));
    if(frntNode == NULL)
    {
        cout<<" Memory can not be allocated";
    }
    else
    {
        frntNode->num = num;         
        frntNode->nextptr = stnode;
        stnode = frntNode; 
    }
}

void display() 
{
    struct node *tmp;
    if(stnode == NULL)
    {
        cout<<" No data found in the list";
    }
    else
    {
        tmp = stnode;
        cout<<"Linked List: ";
        while(tmp != NULL)
        {
            cout<<"\t"<<tmp->num;         
            tmp = tmp->nextptr;         
        }
    }
} 
