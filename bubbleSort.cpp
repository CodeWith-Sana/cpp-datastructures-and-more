#include<iostream>
#include<vector>

using namespace std;
void bubble_sort(vector<int> &A )
{
    int temp;
    cout<<"\nTo sort array in asscending order \n";
    for(int i = 0 ; i<A.size(); i++)
    {
        for(int j= 0 ; j<A.size()-i-1; j++)
        {
           if(A[j] > A[j+1])
           {
               temp = A[j];
               A[j] = A[j+1];
               A[j+1] = temp;
           }
        }
    }


}
void print_array(vector<int> A)
{
    for(int i =0  ; i<A.size() ; i++)
        cout<<""<<A[i]<<"   ";
}

int main()
{
    vector<int> T{ 12,3,4,5,0,8,1,6,7};
    cout<<" Before sorting \n ";
    for(int i= 0 ; i<T.size() ; i++)
    cout<<" "<<T[i]<<"  ";
   bubble_sort(T);
   cout<<"AFter sorting \n";
   print_array(T );

}
