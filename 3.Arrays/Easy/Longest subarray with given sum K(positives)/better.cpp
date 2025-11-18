#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK( vector<int>& nums, int k){
    map<long long , int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    int n = nums.size();
    for (int  i = 0; i < n; i++)
    {
        sum+= nums[i];
        if( sum == k ){
            maxLen = max( maxLen , i+ 1);
            
        }
        long long rem = sum - k ;
        if( preSumMap.find( rem ) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen , len);
        }
        if(preSumMap.find( sum ) == preSumMap.end())
            preSumMap[ sum ] = i;
    }
    return maxLen;
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