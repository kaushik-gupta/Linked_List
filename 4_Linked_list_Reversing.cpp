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

    cout<<"Enter 1 for insertion"<<endl;
    int y;
    while(1)
    {
        cout<<"Want to enter element?"<<endl;
        cin>>y;

        if(y!=1)
            break;
        else
        {
            node *temp = new node();

            cout<<"Enter the element."<<endl;
            cin>>temp->data;
            if(head==NULL)
              {
                  head = temp;
                  temp->link = NULL;
              }
            else
            {
                node *t = head;
                while(t->link!=NULL)
                {
                    t = t->link;
                }
                t->link = temp;
                temp->link = NULL;
            }
        }
    }

    cout<<"The entered elements are:"<<endl;
    node *t = head;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t = t->link;
    }

    cout<<"------------Reversing the list--------------"<<endl;


}
