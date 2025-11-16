#include<bits/stdc++.h>
using namespace std;


int returnMissingNumber( vector<int> & nums){
    int n = nums.size();
    int missingNumber = -1;
    sort(nums.begin() , nums.end());
    for( int i = 0 ; i< n ; i++){
        if( nums[ n - 1 ] != n)
            return n;
        if( nums[ i ] != i){
            missingNumber = i;
            break;
        }
    }
        
    return missingNumber;
}

int main(){
    int n ;
    cin>>n;
    vector<int> nums;
    for( int i = 0 ; i < n; i++ ){
        int element;
        cin>>element;
        nums.push_back( element );

    }
    int missingNum = returnMissingNumber( nums );
    cout<<missingNum;
    return 0;
}