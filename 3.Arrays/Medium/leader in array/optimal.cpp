// using Kadine algorithm 
// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

vector<int> leadersOfArray( vector<int> & nums){
    vector<int> leaders;
    
    int n = nums.size();
    int largest = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if( largest < nums[ i ]){
            leaders.push_back( nums[ i ] );
            largest = nums[ i ];
        }        
    }
    return leaders;
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
    nums = leadersOfArray( nums );
    for (int i = 0; i < nums.size(); i++)
    {
        cout<<nums[ i ]<<" ";
    }
    
    
    return 0;
}