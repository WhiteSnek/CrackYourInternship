#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for(int i=0;i<n;i++){ // fixed pointer
            if(i>0 && nums[i]==nums[i-1]) continue; // check for duplicates
            for(int j=i+1;j<n;j++){ // another fixed pointer
                if(j>(i+1) && nums[j]==nums[j-1]) continue; // check for duplicates
                int k = j+1, l = n-1; // moving pointers
                while(k<l){
                    long long sum = nums[i]; // alag alag isliye add kiya kyuki sath me add krne pe integer overflow ka error aaega
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target){
                        vector<int> temp = {nums[i],nums[j],nums[k],nums[l]}; // if ans to usko array me push krdo
                        ans.push_back(temp);
                        k++;l--;
                        while(k<l && nums[k]==nums[k-1]) k++; // duplicates
                        while(k<l && nums[l]==nums[l+1]) l--; // duplicates
                    }
                    else if(sum>target){ // agar sum bda h to l--
                        l--;
                    }
                    else {
                        k++; // ni to k++
                    }
                }
            }
        }
        return ans;
    }
};