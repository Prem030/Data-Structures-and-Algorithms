#include<bits/stdc++.h>
using namespace std;

int findSecondLargest( vector<int>& arr , int n){
    sort( arr.begin() , arr.end());
    int secondLargest = arr[ n - 1 ];
    for(int  i = n - 2 ; i> 0 ; i++){
        if( arr[ i ] != secondLargest){
            secondLargest = arr[ i ];
            break;

        }
    }
    return secondLargest;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for( int i = 0 ; i < n ; i++ ){
        int n;
        cin>>n;
        nums.push_back(n);
    }
    int secondLargest = findSecondLargest( nums , n );
    cout<<"second Largest : "<<secondLargest;
    return 0;
}