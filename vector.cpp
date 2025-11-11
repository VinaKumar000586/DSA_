#include <iostream>
#include <stdio.h>
using namespace std;
#include <climits>
#include <vector>

// int main(){
//     vector<int>vec={1,2,3}; //0
//     cout<<vec[0]<<endl; //garbage value
//     return 0;

// }

// int main(){
//     vector<int>vec(5,0); // 0 0 0
//     for (int i:vec){
//         cout<<i<<endl;
//     }
//     return 0;

// }

//kadane's algorithm

void maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int currsum=0;
    for (int var:nums){
        currsum +=var;
        maxSum = max(maxSum,currsum);
        if (currsum<0){
            currsum=0;
        }       

    }
    cout<<maxSum;
}
int main(){
    vector<int>vec={-2,1,-3,4,8,2,-1,-5,4};
    maxSubArray(vec);
    return 0;
    
}


