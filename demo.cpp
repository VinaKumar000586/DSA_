#include<iostream>
#include<stdio.h>
using namespace std;
#include <climits>


// find the largest and smallest number in the given array;

int main(){
    
    int small = INT_MAX;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        if(arr[i]< small){
            small = arr[i];
        }
    }
    cout<<small<<endl;

    return 0;

}
