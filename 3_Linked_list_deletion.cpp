#include<iostream>
#include<conio.h>

using namespace std;

struct node
{
    int data;
    node *link;
};

int main()
{
    node *head = NULL;

    int y,e;
    cout<<"Enter 1 for inserting element:"<<endl;
    while(1)
    {
        cout<<"Want to enter element?"<<endl;
        cin>>y;

        if(y!=1)
            break;

        else
        {
            cout<<"Enter element:"<<endl;
            cin>>e;
            node *temp = new node;
            temp->data = e;
            if(head==NULL)
            {

                temp->link=NULL;
                head=temp;
            }
            else
            {
                temp->link = NULL;
                node *t = head;
                while(t->link!=NULL)
                {
                    t = t->link;
                }
                t->link = temp;
            }
        }
    }

    cout<<"Entered elements are: "<<endl;
    node *temp = head;
    while(temp->link!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->link;
    }

}
