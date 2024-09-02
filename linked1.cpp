#include<iostream>
#include<cstdlib>
using namespace std;
struct linked_list
{
    int data ;
    linked_list *next;
    linked_list()
    {
        data = 0;
        next = NULL;
    }
    linked_list(int x , linked_list *y)
    {
        this->data = x;
        this->next= y;
    }
};
 void traverse(linked_list *N)
 {
     while(N!= NULL)
     {
         cout<<"\n value is "<<N->data<<endl;
         N = N->next;
    }

}
linked_list insert_End(linked_list *X , linked_list node2  )
{
   while(X!= NULL)
   {
       X = X->next;
   }
   X->next = &node2;
   while(X!= NULL)
   {
       cout<<" \n value is  "<<X->data<<"next loaction is "<<X->next<<endl;
        X = X->next;
}
   return *X;
}

int main()
{
   linked_list x3(3 ,NULL);
   linked_list x2(2 ,&x3);
   linked_list root(1 , &x2);
   cout<<" \n root value is "<<root.data<<"  next   : "<<root.next<<endl;
   traverse(&root);
   linked_list *node ;
   node->data = 0;
   node->next = &root ;
   cout<<" after inserting value at the begining \n";
   traverse(node);
   cout<<"insert value at end \n";
   linked_list node2(4 , NULL);
       root = insert_End(node , node2);






}
