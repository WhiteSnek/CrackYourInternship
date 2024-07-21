#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long i = 0, j = m-1;
    long long mini = 1e9;
    while(j<a.size()){
        if(a[j]-a[i] < mini){
            mini = a[j]-a[i];
        }
        i++;j++;
    }
    return mini;
    }   
};