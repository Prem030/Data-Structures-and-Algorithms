#include<bits/stdc++.h>
using namespace std;

int findMissingNumber( vector<int> nums){
    int n = nums.size();
    int ans = 0;
    for( int i = 1 ; i <= n ; i++ ){
        ans = ans ^ i;
    }
    for (int  i = 0; i < n; i++)
    {
        ans = ans ^ nums[ i ] ;
    }
    return ans;
}

int main(){
        int n;
    cin>>n;
    vector<int> nums;
    for( int i = 0 ; i < n ; i++ ){
        int elements;
        cin>>elements;
        nums.push_back(elements);
    }
    int missingNumber = findMissingNumber( nums );
    cout<<missingNumber;
    return 0;
}