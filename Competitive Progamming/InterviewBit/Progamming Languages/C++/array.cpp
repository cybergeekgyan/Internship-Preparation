/*
Complete the given function named ‘reverseArray’ containing an integer array ‘arr’ and length of arr N. Reverse the array ‘arr’.
*/

#include<iostream>
using namespace std;

void reverseArray(int arr[], int N){
    // Your code goes here
    for(int i = 0; i < N/2; i++){
        int temp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = temp;
    }
}
/*
int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
*/
