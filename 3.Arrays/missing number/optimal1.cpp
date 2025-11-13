#include<bits/stdc++.h>
using namespace std;

int findMissingNumber( vector<int> nums){
    int n = nums.size();
    int sum = (n *( n + 1 ))/2;
    int sum2 = 0;
    for( int i = 0 ; i < n ; i++ )
        sum2 += nums[ i ];
    return sum - sum2;
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