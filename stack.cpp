#include<iostream>
using namespace std;
 int n= 10 , stack[100]= {1} ;
 int pushStk( int val , int top   )
 {
      if(top>=n) cout<<" \n overflow occured \n";
    else  if (top == 0)  {  cout<<"stack is empty \n" ;}
      //stack is empty;
        top ++;
        
        stack[top] = val ; 
        return 0 ;
	}
 void displayStack(int top)
 {
   if(top>0)
   {
    cout<<"displaying stack elemnets \n" ;
       for(int i = top ; i>0 ; i--)
     cout<<" \n "<<stack[i]<<endl;
     }
    else  cout<<"stack is empty";   
 }
int main()
{  
   int top , item;
   top = 2 ;
   cout<<" Enter value you want to insert \n";
   cin>>item;
   pushStk(item , top);
   displayStack(top);
}
