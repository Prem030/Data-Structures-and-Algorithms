#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> st;
        int count = 0;
        int largest = 0;
        for( int i = 0 ; i < nums.size() ; i++ )
            st.insert( nums[ i ] );
        for (auto it:st)
        {
            if( st.find( it - 1) == st.end()){
                int x = it;
                count = 0;
                while (st.find( x + 1 ) != st.end())
                {
                    count++;
                    x++;
                }
                
            }
            largest = max( largest , count);
        }
        return largest + 1;
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