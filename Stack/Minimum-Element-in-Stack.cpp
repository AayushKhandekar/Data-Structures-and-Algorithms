// Find minimum element in a stack

#include<iostream>
#include<stack>
#include<climits>
using namespace std;

int main(){

	int min=INT_MAX;
	int arr[5]={10, 14, 99, -703, -100};
	int size=sizeof(arr)/sizeof(arr[0]);
	stack<int> stack;

	for(auto i:arr){
		stack.push(i);
	}

	// without auxiliary stack	
	for(int i=0; i<size; i++){
		int top=stack.top();
		stack.pop();
		if(min>top) min=top;
	}

	cout << min << endl;

	return 0;
}
