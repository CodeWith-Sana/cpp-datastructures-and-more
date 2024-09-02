#include<iostream>
using namespace std;
class linked
{
public:
   int data;
   linked* next;
   linked* prev;
};
void  push(linked** head , int newdata)
     {
         linked* newnode = new linked();

         newnode->data = newdata;
         newnode->prev = NULL;
         newnode->next = (*head);
         if((*head)!= NULL)
          (*head) ->prev  =  newnode;
             (*head)  =  newnode;
    }
 void print(linked * node)
 {
     while(node != NULL)
     {
         cout<<node->data<<" ";
         node  =  node->next;
     }
}
 void insertAfter( linked* prevnode , int newdata)
 {
     linked* newnode = new linked();
       newnode->data = newdata;
       newnode-> next = prevnode->next;
       prevnode->next =  newnode;
       newnode->prev =  prevnode;
       if(newnode->next != NULL)
           newnode->next->prev = newnode;

 }
 void atEnd(linked** head , int newdata)
 {
     linked* newnode =  new linked();
     linked* last  = *head;
     newnode->data = newdata;
     newnode->next= NULL;
     if(*head == NULL)
     {
         newnode->prev = NULL;
        *head  =  newnode;
     }
     while(last->next != NULL)
     {
         last = last->next;
        newnode->prev = last;
     }
}


int main()
{

   linked* head  =  NULL;
   push(&head , 1);
   push(& head , 3);
   insertAfter(head->next, 4);
   cout<<"doube linked  example : \n ";
   print(head);
}
