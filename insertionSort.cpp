#include<iostream>
#include<vector>
using namespace std;
template <class T>
void insertionSort (vector<T> &inputList) {
    for (int i =0; i<inputList.size(); i++) {
        T valueToInsert = inputList[i];
        int currentIndex = i;
        while(currentIndex>=0 && inputList[currentIndex-1] > valueToInsert)
        {
            inputList[currentIndex] = inputList[currentIndex-1];            currentIndex --;
        }
        inputList[currentIndex] = valueToInsert;
    }
}


//Template example
template <class A>

int main() {

vector<int> myList{1,3,0,10,2};
cout<<"Before sorting, list is \n";
for(auto a: myList) cout<<a<<"\t";
cout<<"\n \n Start of Sorting \n";
cout<<"Sorting the input with Insertion Sort \n";
insertionSort(myList);
cout<<"After sorting, list is \n";
for(auto a: myList) cout<<a<<"\t";
cout<<"\n \n End of Sorting \n";

vector<string> charList {"ab", "ze", "be", "cde"};
insertionSort(charList);
for(auto a: charList) cout<<a<<"\t";
cout<<"\n";
/*
double x = sum(10.0, 1.1);
cout<<"Result is "<<x<<"\n";
bool y = sum(false, false);
cout<<"Result for bool is "<<y<<"\n"; */
return 0;
}
