// using Kadine algorithm 
// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positive;
        vector<int> negative;
        int n = nums.size();
        for( int i = 0 ; i < nums.size(); i++){
            if( nums[ i ]< 0 )
                negative.push_back( nums[i] );
            if( nums[ i ] > 0 )
                positive.push_back( nums[ i ]);
        }
        int i = 0 , pindex = 0, nindex = 0;
        for( i = 0 ; i < n/2 ;i++){
            nums[ i * 2] = positive[ i ];
            nums[ i * 2 + 1 ] = negative[ i ];
        }
   
       return nums; 
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