#include<iostream>
#include<vector>
using namespace std;
class sana
{
   int x ;
public:
         sana( int y ) {  x = y+2;}
    void displayData()
    {
        cout<<"x = "<<x<<endl;
    }
};
int main()
{
    vector<sana> xyz;
    xyz.push_back(sana(6));
    xyz.push_back(sana(20));
    for(auto a : xyz)
    {
        a.displayData();
}
}
