#include<bits/stdc++.h>
using namespace std;


int returnMissingNumber( vector<int> & nums){
    int n = nums.size();
    int sum = 0 ;
    for(int i = 0 ; i< n ; i++){
        sum+= nums[ i ];
    }
        
    return ( n *( n + 1) / 2  ) - sum;
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