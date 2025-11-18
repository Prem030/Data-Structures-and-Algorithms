#include<bits/stdc++.h>
using namespace std;


void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> arr;
        for( int i = 0 ; i < k ; i++){
            arr.push_back( nums [ n - k + i ]);
        }
        for( int i = 0 ; i < n - k ; i++){
            arr.push_back( nums[ i ]);

        }
        for( int i = 0 ; i < n ; i++)
            nums[ i ] = arr[ i ];
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