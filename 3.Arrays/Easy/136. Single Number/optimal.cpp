#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        reverse(nums.begin() , nums.end());
        reverse( nums.begin() , nums.begin() + k );
        reverse( nums.begin() + k , nums.end());
    }

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums;
    for (int  i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        nums.push_back(element);
    }

    rotate( nums , k);
    for (int i = 0; i < n; i++)
    {
        cout<<nums[ i ]<<" ";
    }
    
    return 0;
}