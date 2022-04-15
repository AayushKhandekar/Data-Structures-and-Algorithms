#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 10

int arr[MAX_SIZE];
int top=-1;

bool isFull(){
	
	bool res=false;
	// last index=9 when size(stack)==10
	if(top==MAX_SIZE) res=true;
	return res;
}

bool isEmpty(){
	
	bool res=false;
	// stack is empty when top=-1
	if(top==-1) res=true;
	return res;
}

void push(int data){
		
	if(isFull()){
		cout << "Stack is full!" << endl;
	} else{
		top++;
		arr[top]=data;
	}
}

void pop(){
	
	if(isEmpty()){
		cout << "Stack is empty!" << endl;
	} else{
		arr[top]=0;
		top--;
	}
}

void peek(){
	
	cout << arr[top] << endl;
}

int main(){
	
	push(5);
	pop();
	peek();

	for(int idx=0; idx<=MAX_SIZE; idx++){
		cout << arr[idx] << " ";
	}

	cout << "\n" << top << endl;

	return 0;
}
