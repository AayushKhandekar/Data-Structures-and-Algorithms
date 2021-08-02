#include <iostream>
using namespace std;

#define MAX 4

int Linearsearch(int arr[], int num){
    int i, count = 0;

    for(i = 0 ; i < MAX ; i++){
        if( arr[i] == num){
            count = count + 1;
        }
    }

    return count;
}

int main(){
    int arr[MAX];
    int i, num, res;

    cout << "Enter array elements : " << endl;

    for(i = 0 ; i < MAX ; i++){
        cin >> arr[i];
    }

    cout << "Enter an Element to Search in the array : " << endl;
    cin >> num;

    res = Linearsearch(arr, num);

    if ( res != 0) {
        cout << "Element is present in the array!" << endl;
    } else { 
        cout << "Element is not present in the array!" << endl;
    }

    return 0;
}