// Reverse a string using stack data structure

#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){

	string str="Hello World!";
	string revStr="";
	int length=str.length();
	stack<char> stack;
	
	// push in stack
	for(auto i: str){
		stack.push(i);
	}
	
	// append top value and pop
	for(int i=0; i<length; i++){
		revStr+=stack.top();
		stack.pop();
	}

	cout << revStr << endl;
	return 0;
}
