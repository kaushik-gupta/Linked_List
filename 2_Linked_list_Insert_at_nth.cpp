#include<iostream>
#include<conio.h>

using namespace std;

struct node
{
    int data;
    node *link ;
};

int main()
{
    int e,n;
    node *head = NULL;
    cout<<"Enter 1 for entering element:"<<endl;
    while(1)
    {
        int y;
        cout<<"Want to insert element?"<<endl;
        cin>>y;

        if(y!=1)
            break;

        else
        {


            node *temp = new node();

            if(head == NULL)
            {
                cout<<"Enter element"<<endl;
                cin>>e;
                temp->data = e;
                temp->link = NULL;
                head = temp;
            }
            else
         {
            cout<<"Enter element"<<endl;
            cin>>e;
            cout<<"Enter position"<<endl;
            cin>>n;
             node *var = head;
             int val=1;
             while(val!=n-1)
             {
                 var = var->link;
                 val++;
             }

             temp->data = e;

             if(var->link==NULL)
             {
                 var->link = temp;
                 temp->link = NULL;
             }
             else
             {
                 temp->link = var->link;
                 var->link = temp;
             }
            }
        }
    }

    cout<<"Entered elements are:"<<endl;
    node *temp = head;
    while(temp->link!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }

}
