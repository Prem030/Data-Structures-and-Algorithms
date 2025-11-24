// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int number = 0;
        map< int , int > hmap ;
        for( int i = 0; i < n ; i++ ){
            hmap[ nums[ i ]]++;
        }
        for( int i = 0 ; i < n ; i++ ){
            if( hmap[ nums[ i ] ] > n/2)
                number = nums[ i ];
        }
       
        return number;
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
    cout<<majorityElement( nums);
    return 0;
}