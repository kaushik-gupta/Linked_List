#include<iostream>>
#include<conio.h>

using namespace std;
struct node
{

    int data;
    node* link;
};

node* head = NULL;   // header.
//head = NULL;

//node* temp = new node();   // creates new node.

 //temp->data = 2;      // new insert.
 //temp->link = NULL;

 //head = temp; // head points new node.

 int main()
 {
     int e;
     cout<<"Enter 1 if insert an element: "<<endl;
     while(1)
     {
         int inp;
         cout<<"Want to enter element"<<endl;
         cin>>inp;
         if(inp!=1)
            break;
         cout<<"Enter element"<<endl;
         cin>>e;
         node* temp = new node();
         temp->data = e;
         temp->link = NULL;
         if(head == NULL)
         {
             head = temp;
         }
         else
         {
             node* var = head;

             while(var->link!=NULL)
             {
                 var = var->link;
             }
             var->link = temp;
         }
     }

    cout<<"Existing elements are:"<<endl;
    node* tem = head;
    while(tem!=NULL)
    {
        cout<<tem->data<<" ";
        tem = tem->link;
    }
 }
