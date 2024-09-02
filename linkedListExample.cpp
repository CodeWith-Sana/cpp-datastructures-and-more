#include<iostream>
#include<vector>
using namespace std;
struct Node {
    int value;
    Node* next;
    // Struct init method
    Node(): value(-1), next(NULL) {}
    Node(int x, Node* y): value(x),next(y){}
    };

void traverse(Node* root) {
    if (root == NULL) return;
    cout<<"Value is "<< root->value<<"\n";
    traverse(root->next);
}
void traverseAlternativeWay(Node* root) {

     while(root != NULL) {

         cout<<"Value is "<<root->value <<"\n";
         root = root->next;
    }
}
Node* insertAscendingOrder(Node *newNode, Node* root) {
    if(!root) {
        return  newNode;}
    if (root->value >newNode->value) {

        cout<<"Modifying first node \n";
        newNode->next = root->next;
        root->next = newNode;
        cout<<"root value now is "<<newNode->value<<"\n";
        return newNode;
    }
    return NULL;


}
int main() {

    Node n2 = Node(2, NULL);
    Node n1 = Node(1, &n2);
    Node root = Node(0,&n1);
    cout<<"Root value before is "<<root.value<<"\n";
    traverse(&root);
    cout<<"Root value after is "<<root.value<<"\n";
    Node toInsert= Node(1.5, NULL);
    Node* newRoot= insertAscendingOrder(&toInsert, &root);
    cout<<"After insertion \n";
    traverse(newRoot);
    traverseAlternativeWay(newRoot);


return 0;
}
