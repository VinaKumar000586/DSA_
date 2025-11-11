#include<iostream>
#include<stdio.h>
using namespace std;
#include <climits>

// int main() {
//     int num = 5;
//     int i = 1; int sum = 0;
//     for (i = 1; i <= num; i++) {
//         sum = sum + i;
//     }
//     cout << sum << endl;
//     return 0;

// }

// odd number sum in  the given range;

// int main(){
//     int n = 5;
//     int i = 1; int sum = 0;
//     for(i=1;i<=n;i++){
//         if (i%2!=0){
//             sum = sum+i;
               
//         }
//     }
//     cout<<sum<<endl; 
//     return 0;
// }


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