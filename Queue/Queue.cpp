#include <iostream>
using namespace std;

#define MAX 10

class Queue {

    public:
    int front = 0;
    int rear = 0;
    int simpleQueue[MAX]; 

    bool isFull(){
        if(front == 0 && rear == MAX){
            return true;
        } else {
            return false;
        }

    }

    bool isEmpty(){
        if(front == 0 && rear == 0){
            return true;
        } else {
            return false;
        }
    }

    void enqueue(int element){
        if(isFull()){
            cout << "Queue is Full!" << endl;
        } else {
            simpleQueue[rear] = element;
            rear++;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Cannot DeQueue! Queue is empty" << endl;
        } else {
            simpleQueue[front] = 0;
            front++;
        }  

        if(front == rear){
            front = 0;
            rear = 0;
        } 
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
        } else {
            for(int idx = front; idx < rear; idx++){
                cout << simpleQueue[idx] << endl;
            }            
        }
    }
};

int main(){

    Queue q;
    q.enqueue(3);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}