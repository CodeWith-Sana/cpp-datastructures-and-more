#include<iostream>
#include<vector>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void select_sort(vector<int> & A)
{
    int min , temp;
    for( int i= 0 ; i<A.size()-1; i++)
    {
        min = i;
        for( int j = i+1 ; j<A.size() ; j++)
        {
            if(A[j]<A[min])
                min = j;
            swap(&A[min] ,&A[j]);
        }

    }
}
void print(vector<int> &A)
{
    for(int i=  0 ; i<A.size(); i++)
    cout<<A[i]<<endl;
}
int main()
{
    vector<int> Arr {1 ,30 ,0 ,10 , 3, 5,6};
    select_sort(Arr );
    print(Arr );

}
