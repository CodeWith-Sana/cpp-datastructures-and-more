#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int Esum , Osum;
    Esum =0 ;
    Osum = 0;
   vector<int> Arr{10 ,2 , 5, 1, 5  , 6,7 ,  8,9 ,0};
   unordered_map<int , int> E ;
   unordered_map<int , int> O;
   for(int i= 0 ; i<Arr.size() ; i++)
   {
      if(Arr[i]%2 == 0)
      {
         E[i] = Arr[i] ;
         Esum = Esum + Arr[i];
		} 
     else
     {
         O[i] = Arr[i];
         Osum= Osum + Arr[i];
     } 
   }
   cout<<" Sum Of even and odd numbers in tha given array is \n";
   cout<<" EVEN SUM =  "<<Esum<<endl;
   cout<<" ODD SUM = "<<Osum<<endl;
   cout<<" Displaying even  numbers with its locations ; \n";
   for ( auto a : E)
   {
    cout<<" index : "<<a.first <<"  , No :"<<a.second<<endl;
    }
    cout<<" Displaying odd  numbers with its locations ; \n";
    for ( auto a : O)
    {   
     cout<<" index : "<<a.first<<" , NO : "<<a.second<<endl;
    }
}
