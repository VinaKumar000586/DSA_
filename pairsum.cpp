#include <iostream>
#include <stdio.h>
using namespace std;
#include <climits>
#include <vector>


// Brute force approach (On^2 time complexity)

// vector<int> pairsum(vector<int>&nums,int target){
//     vector<int>ans;
//     for (int i=0;i<nums.size(); i++){
//         for (int j=i+1; j<nums.size(); j++){
//             if (nums[i]+nums[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;

 
// }
// int main(){
//     vector<int>nums={1,2,3,4,5};
//     int target=9;
//    vector<int> result = pairsum(nums,target);
//    for (int i=0;i<result.size();i+=2){
//        cout<<result[i]<<" "<<result[i+1]<<endl;
//    }
//     return 0;
// }



// best approach using two pointers (on time complexity) --(On)

vector<int> pairsum(vector<int>& nums, int target){
    vector<int>ans;
    int start=0;
    int end = nums.size()-1;
    while (start<end){
       int pairSum = nums[start]+nums[end];
       
         if (pairSum <target){
            start++;
        }

        else if(pairSum >target){
            end--;
        }
        else{
            ans.push_back(start);
            ans.push_back(end);
            return ans;

        }


    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int target;
    cin>>target;
   vector<int> result = pairsum(nums,target);
   cout<<result[0]<<" "<<result[1]<<endl;
   
    return 0;
}