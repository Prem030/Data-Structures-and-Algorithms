#include<bits/stdc++.h>
using namespace std;


int longestConsecutive(vector<int>& nums) {
        
        int count = 0;
        int innerCount = 0;
        int n = nums.size();
        vector<int> temp;
        int longest = 0;
        if( n == 1 || n == 0){
            return n;
        }
        int lastSmaller = INT_MIN;
       
        sort( nums.begin() , nums.end() );
        for (int i = 0; i < n; i++)
        {
            if( nums[ i ] - 1 == lastSmaller){
                count++;
                lastSmaller = nums[ i ];
            }
            else if( nums[ i ] != lastSmaller){
                count = 0;
                lastSmaller = nums[ i ];
            }
            longest = max( count , longest);
        }
        return longest + 1;
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