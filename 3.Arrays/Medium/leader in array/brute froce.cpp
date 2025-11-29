// using Kadine algorithm 
// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

vector<int> leadersOfArray( vector<int> & nums){
    vector<int> leaders;
    int temp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        temp = 1;
        int j = i ;
        while ( j < n && temp == 1)
        {
            if ( nums[ i ] < nums[ j ]){
                temp = 0;
            }
            j++;
        }
        if( temp == 1)
            leaders.push_back( nums[ i ]);
        
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