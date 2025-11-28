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
        for( i = 0 ; i < n ;i++){
            if( i % 2 == 0)
                nums[ i ] = positive[ pindex++ ];
            else
                nums[ i ] = negative[ nindex++ ];
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