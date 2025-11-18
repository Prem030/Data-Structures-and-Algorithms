#include<bits/stdc++.h>
using namespace std;


int secondLargest( vector<int> a , int n){
    set<int> nums;
    for( int i = 0 ; i < n; i++)
        nums.insert( a[ i ] );
    auto it = nums.end();
    if( nums.size()< 2 )
        return *it;
    else{
        --it; --it;
        return *it;
    }
}
int secondSmallest( vector<int> a , int n){
    set<int> nums;
    for( int i = 0 ; i < n; i++)
        nums.insert( a[ i ] );
    auto it = nums.begin();
    if( nums.size()< 2 )
        return *it;
    else{
        ++it; ;
        return *it;
    }
}

vector<int> getSecondOrderElement( int n , vector<int> arr){
    int slargest = secondLargest( arr, n);
    int sSmallest = secondSmallest( arr , n);
    return  { slargest , sSmallest};

}
int main(){

    int n;
    cin>>n;
    vector<int> arr;
    for( int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        arr.push_back( num );
    }
    
    // Brute force-----------------------------------
    vector<int> seconds;
    seconds = getSecondOrderElement( n , arr);
    for( int i = 0 ; i < seconds.size() ; i++ )
        cout<<seconds[ i ]<<" ";
    return 0;
}