#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node{

    public:
    int data;
    Node* next;
};

int display(){
    
}

int main(){

    Node* Head;
    Node* One = NULL;
    Node* Two = NULL;
    Node* Three = NULL;

    One = new Node();
    Two = new Node();
    Three = new Node();

    One -> data = 10;
    Two -> data = 20;
    Three -> data = 30;

    One -> next = Two;
    Two -> next = Three;
    Three -> next = NULL;

    Head = One;
    while(Head != NULL){
        cout << Head -> data << endl;
        Head = Head -> next;
    }

    return 0;
}