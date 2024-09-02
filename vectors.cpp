#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> myVector;

    myVector.push_back(1);
    myVector.push_back(2);
    myVector.push_back(3);
    for(auto a: myVector)
        cout<<a<<"\n";


    cout<<"Typical Loop\n";

    for(int i=0;i<myVector.size(); i++)
    {
        if(myVector[i]%2 ==0)
            cout<<myVector[i]<<"\n";
    }

}
