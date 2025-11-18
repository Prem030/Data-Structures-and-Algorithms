#include<bits/stdc++.h>
using namespace std;

int findMissingNumber( vector<int> nums){
    int n = nums.size();
    int missingNumber = -1 ;
    int hash[ n + 1] = { 0 };
    for( int i = 0 ; i < n ; i++ )
        hash[ nums[ i ]]++;
    for( int i = 0 ; i < n + 1 ; i++ ){
        if( hash[ i ] == 0){
            missingNumber = i;
        }
    }
    return missingNumber;
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