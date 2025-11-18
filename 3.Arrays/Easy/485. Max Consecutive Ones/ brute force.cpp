#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int previousSum = 0 ; 
        int n = nums.size();
        int i = 0 ; 
        while( i < n){
            int count = 0 ;
            if( nums[ i ] == 1 && i < n){
                while( nums[ i ] == 1 && i < n){
                    count++;
                    i++;
                    if( i >= n)
                    break;
                }
            }
            i++;
            if( count > previousSum)
                previousSum = count;
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