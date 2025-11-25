// using Kadine algorithm 
// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum( vector<int>& nums){
    int n = nums.size();
    int maxSum = INT_MIN;
    int sum =0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[ i ];
        maxSum = max( maxSum , sum );
        if( sum < 0 ){
            sum = 0;
        }
    }
    
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    
    for ( int i = 0; i < n; i++ )
    {
        int element;
        cin>>element;
        nums.push_back( element);
    }
    cout<<maxSubArraySum( nums );
    return 0;
}