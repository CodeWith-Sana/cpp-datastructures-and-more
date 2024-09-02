#include<iostream>
using namespace std;
int main()
{
 int Arr[10] = {1 ,3 ,4 ,5,6 ,7,8 ,9 ,0 ,12};
 int evenSm = 0;
 int oddSm = 0;
 int evenArr[10] , oddArr[10];
 int i , j ,k ;
 i = 0 ;
 k=0;
 j=0;
  while(i<10)
  {
    if(Arr[i]%2 == 0)
    {  evenSm = evenSm +Arr[i];
       evenArr[j] = i ;
       j++;}
       else
         if(Arr[i]%2 ==1)
         {
         oddSm = oddSm + Arr[i];
         oddArr[k]= i ;
         k ++;}
       i ++;
    }
  cout<<"sum of even numbers in an array "<<evenSm<<"\n sm of odd numbers in an array "<<oddSm<<"\n";
   for(int i= 0 ; i<10 ;i++)
   {
     cout<<" "<<evenArr[i]<<" ";
   }
}
