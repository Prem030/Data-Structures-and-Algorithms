#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
       int count = 0 ;
       int previousSum = 0 ; 
        int n = nums.size();
        for( int i = 0 ; i < n ; i++ ){
            if( nums[ i ] == 1 ){
                count++;
                previousSum = max( previousSum , count);
            }
            else{
                count = 0;
            }
        }
        return previousSum;
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0 ; i < n; i++ ){
        int element;
        cin>>element;
        nums.push_back( element );
    }
    int maxOnes = findMaxConsecutiveOnes( nums);
    cout<<maxOnes;
    return 0;
}