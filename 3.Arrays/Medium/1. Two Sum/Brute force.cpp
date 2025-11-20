#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        vector<int> index;
        for( int i = 0 ; i < n - 1; i++){
            sum = 0;
            for( int j = i + 1; j < n ; j++ ){
                sum = nums[ i ] + nums[ j ];
                if( sum == target ){
                    index.push_back(i);
                    index.push_back(j);
                    break;
                }
            }
        }
        return index;
    }
int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        nums.push_back( element );
    }
    vector result = twoSum( nums , target );
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
}