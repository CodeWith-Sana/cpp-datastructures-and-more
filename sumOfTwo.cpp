#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main() {
    vector<int> list{1,10,20,31,1};

    //Brute force implementation: O(n^2) comparison
    int numComparisons = 0;
    int sumOfTwo = 2;
    bool found = false;
    for (int i =0; i<list.size(); i++)
    {
        for(int j=0; j<list.size(); j++)
            {
                numComparisons++;
                if(i != j && list[i]+list[j]==sumOfTwo) {
                    cout<<"Numbers are : "<<list[i]<<" and "<<list[j]<<"\n";
                    found = true;
                    break;

                }

            }
            if (found) break;
        }

        if(!found) cout<<"Sorry, the two numbers are not present \n";

        cout<<"Total comparisons are "<<numComparisons<<"\n";
    //Fast implementation

    //create a unordered_map map
    unordered_map<int, int> myMap;
    //initialize the myMap
    for(int i=0; i<list.size(); i++) myMap[list[i]]=i;

    numComparisons =0;
    //print the myMap
    for(auto a: myMap) cout<<a.first<<"--> "<<a.second<<"\n";

    //Now, lets search
    found = false;
    for(int i=0; i<list.size(); i++) {

        int remainingNumber = sumOfTwo-list[i];
        cout<<"Looking for "<<remainingNumber<<"\n";
        //check if the number is present or not
        numComparisons++;
        if(myMap.find(remainingNumber) !=myMap.end())
        {
            //check if indexes are not the same
            if (myMap[remainingNumber] != i)
                cout<<"Number is present:"<<list[i]<<", and "<<remainingNumber<<"\n";
                cout<<"Indexes are "<<i<<", and "<<myMap[remainingNumber]<<"\n";
                found = true;
            break;
        }
    }
    if(!found) cout<<"Sorry, couldn't find the numbers even in new way!\n";

    cout<<"Number of Comparisons in new way is "<<numComparisons<<"\n";

}
