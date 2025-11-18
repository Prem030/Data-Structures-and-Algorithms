#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK( vector<int>& nums, int k){
    int sum = nums[ 0 ] ; 
    int len = 0 ;
    int n = nums.size();
    int left = 0 , right = 0;
    while (right < n)
    {
        if( left <= right && sum > k){
            sum = sum - nums[ left ];
            left++;

        }
        if( sum == k){
            len = max( len , right - left + 1);
        }
        right++;
        if( right < n)
            sum += nums[ right ];
    }
    
    return len;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums;
    for(int i = 0 ; i < n ; i++ ){
        int element;
        cin>>element ; 
        nums.push_back( element );
    }
    int result = longestSubarrayWithSumK( nums , k );
    cout<<"longest subarray length : "<<result;
    return 0;
}