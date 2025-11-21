#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        vector<int> index;
        map<int, int> hashMap;
        
        for( int i = 0 ; i < n ;i++){
            
            int diff = target - nums[ i ];
            if( hashMap.find( diff ) != hashMap.end()){
                index.push_back( hashMap[ diff ] );
                index.push_back( i );
                break;
            }
            hashMap[ nums[ i ]] = i;
        }
        return index;
        
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        nums.push_back( element );
    }
    
    return 0;
}