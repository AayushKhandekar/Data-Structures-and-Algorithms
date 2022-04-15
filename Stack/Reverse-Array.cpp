// Reverse an array 

#include<iostream>
#include<stack>
using namespace std;

int main(){

	int arr[5]={1, 2, 3, 4, 5};
	int size=sizeof(arr)/sizeof(arr[0]);
	stack<int> stack;

	for(auto i: arr){
		stack.push(i);
	}	

	for(int i=0; i<size; i++){
		arr[i]=stack.top();
		stack.pop();
	}

	for(auto i: arr){
		cout << i << " ";
	}

	return 0;
}
