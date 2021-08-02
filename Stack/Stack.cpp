#include <iostream>
#define MAX 5

using namespace std;

int Stack[MAX];
int TOP = -1;

bool isFull(){

    if(TOP == MAX){
        return true;
    } else {
        return false;
    }
}

bool isEmpty(){

    if(TOP == -1){
        return true;
    } else {
        return false;
    }
}

void Display(){

    for(int idx = 0; idx < MAX; idx++){
        cout << Stack[idx] << endl;
    }
}

void Peek(){

    cout <<  Stack[TOP] << endl;
}

int Pop(){

    if(isEmpty()){
        cout << "Stack is Empty" << endl;
    } else {
        Stack[TOP] = 0;
        TOP -= 1;
    }

    return 0;
}

int Push(int num){

    if(isFull()){
        cout << "Stack is Full" << endl;
    } else {
        TOP +=  1;
        Stack[TOP] = num;
    }

    return 0;
}

int main(){
    
    Push(10);
    Peek();
    Pop();
    Display();
    return 0;
}