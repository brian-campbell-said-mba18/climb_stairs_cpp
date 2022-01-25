#include<bits/stdc++.h>
#pragma once
using namespace std;

class Solution{
    public:
        void climbHelper(int n, vector<int> & arr);
        int climbStairs(int n);
};

int Solution::climbStairs(int n){
    vector<int> dp;
    for(int i = 0; i <= n; i++){
        if(i == 0 || i ==1){
            dp.push_back(1);
        }else{
            dp.push_back(0);
        }
    }
    this->climbHelper(n, dp);
    return dp[n];
}

void Solution::climbHelper(int n, vector<int> & arr){
    if(arr[n] != 0) return;

    this->climbHelper(n-1, arr);
    arr[n] = arr[n-1] + arr[n-2];
}