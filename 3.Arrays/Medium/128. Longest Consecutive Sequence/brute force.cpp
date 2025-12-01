#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
        
        int count = 0;
        int innerCount = 0;
        int n = nums.size();
        vector<int> temp;
        
        if( n == 1 || n == 0){
            return n;
        }
        sort( nums.begin() , nums.end() );
        int index = 0;
        while (index < n)
        {
            if( index == 0 )
                temp.push_back( nums[ index ]);
            else if( nums[ index ] == nums[ index - 1])
                continue;
            else{
                temp.push_back( nums[ index ]);
            }
            index++;
        }
        for (int i = 0; i < temp.size() - 1; i++)
        {
            if( temp[ i ] + 1 == temp[ i + 1 ] )
                innerCount++;
            else 
                innerCount = 0 ;
            count = max( innerCount , count );
        }
        
        
        

        return count + 1;
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
    int result = longestConsecutive( nums );
    cout<<result;
    return 0;
}