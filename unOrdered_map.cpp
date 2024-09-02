#include<iostream>
#include<unordered_map>

using namespace std;
int main() {
    //Key => This is kind of an index, Value => value
    // Key data type => String
    // value data type => int
    unordered_map<string, int> myMap;

    myMap["ABC"] = 1;
    myMap["B"] = 2;
    myMap["CA"] = 3;
    //Key value pair: (("ABC", 1), ("B", 2), ("CA", 3), null). End = null

    for (auto a: myMap)
        cout<<"key = "<<a.first<<", value = "<<a.second<<"\n";

    cout<<"I am looking for a key = ABC \n";
    if (myMap.find("ABC") != myMap.end())
        cout<<"Value is = "<<myMap["ABC"] <<"\n";


return 0;
}
