#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
        
        int count = 0;
        int innerCount = 0;
        int n = nums.size();
        set<int> st;
        auto secondLast = st.end();
        
        if( n == 1 || n == 0){
            return n;
        }
        
        for( int i = 0 ; i< n ; i++){
            st.insert( nums[i]);
        }
        set<int>::iterator itr;
        --secondLast;
        set<int>::iterator itr2 = st.begin();
        itr2++;
       for (itr = st.begin(); itr != secondLast; itr++) 
        {
            if( *itr + 1 == *itr2 ){
                innerCount++;
            }
            else{
                innerCount = 0;
            }
            count = max( count , innerCount);
            ++itr2;
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