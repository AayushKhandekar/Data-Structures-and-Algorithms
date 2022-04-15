// Find all elements in an array that are greater than all elements to their right

#include<iostream>
#include<stack>
using namespace std;

int main(){

	stack<int> stack;
	int arr[5]={99, 90, 8, 91, 10};

	for(auto i: arr){
		if(!stack.empty() && stack.top()<i){
			stack.pop();
		}
		stack.push(i);
	}

	for(int i=0; i<=stack.size(); i++){
		cout << stack.top() << " ";
		stack.pop();
	}

	return 0;
}

