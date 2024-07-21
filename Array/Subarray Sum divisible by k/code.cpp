#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int prefix_sum = 0, ans = 0;
        unordered_map<int,int> remainder;
        remainder[0] = 1;
        for(int num:nums){
            prefix_sum += num;
            int remain = prefix_sum%k;
            if(prefix_sum<0 && remain!=0) remain += k;
            if(remainder.find(remain)!=remainder.end()){
                ans += remainder[remain];
            }
            remainder[remain] += 1;
        }
        return ans;
    }
};