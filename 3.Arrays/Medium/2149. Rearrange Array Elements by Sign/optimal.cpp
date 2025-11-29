// using Kadine algorithm 
// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();    
    vector<int> arr( n , 0);
    int pI = 0 , nI= 0;
    for (int i = 0; i < n; i++){
        if (nums[ i ] > 0)
        {
            arr[ pI ] = nums[ i ];
            pI += 2;
        }
        else{
            arr[ nI ] = nums[ i ];
            nI += 2;
        }
        
    }
        
    return arr; 
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
    nums = rearrangeArray( nums );
    for (int i = 0; i < n; i++)
    {
        cout<<nums[ i ]<<" ";
    }
    
    return 0;
}