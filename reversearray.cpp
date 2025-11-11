#include <iostream>
#include <stdio.h>
using namespace std;
#include <climits>

// Two pointer approach to reverse an array
void reverseArray(int arr[], int n) {

    int start=0;
    int end = n-1;
    
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,n);

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    return 0;

}