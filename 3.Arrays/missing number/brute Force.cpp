#include<bits/stdc++.h>
using namespace std;


int findMissingNumber( vector<int>& nums){
    sort( nums.begin() , nums.end());
    int missingNumber = -1;
    if( nums.size() != nums[ nums.size() - 1 ])
    {
        missingNumber = nums.size();
        return missingNumber;
    }
    for( int i = 0 ; i < nums.size() ; i++){
        if( i != nums[ i ]){
            missingNumber = i;
            break;
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