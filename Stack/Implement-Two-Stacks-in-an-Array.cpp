// Implement two stacks in a single array

// Top ptr 1 starts from -1 and Top ptr 2 starts from MAX_SIZE 
// Array is full when both ptrs are next to each other i.e. ptr1=ptr2-1;
// This approach makes both stacks of variable sizes;

#include<iostream>
using namespace std;

#define MAX_SIZE 10

int topOne=-1;
int topTwo=MAX_SIZE;
int arr[MAX_SIZE];

bool isFull(){

	bool res=false;
	if(topTwo==topOne+1){
		res=true;
	}

	return res;
}

bool isEmpty(){

	bool res=false;
	if(topOne==-1 && topTwo==MAX_SIZE){
		res=true;
	}

	return res;
}

void display(){

	for(auto i: arr){
		cout << i << " ";
	}
}

void pushOne(int data){

	if(isFull()){
		cout << "Array is full! Cannot enter element in any stack!" << endl;
	} else{
		topOne++;
		arr[topOne]=data;
	}
}

void pushTwo(int data){
	
	if(isFull()){
		cout << "Array is full! Cannot enter element in any stack!" << endl;
	} else{
		topTwo--;
		arr[topTwo]=data;
	}
}

void popOne(){

	if(isEmpty()){
		cout << "Array empty!" << endl;
	} else{
		arr[topOne]=0;
		topOne--;
	}
}

void popTwo(){

	if(isEmpty()){
		cout << "Array empty!" << endl;
	} else{
		arr[topTwo]=0;
		topTwo++;
	}
}

int main(){

	pushOne(9);
	pushTwo(19);
	popOne();
	popTwo();
	display();

	return 0;
}
