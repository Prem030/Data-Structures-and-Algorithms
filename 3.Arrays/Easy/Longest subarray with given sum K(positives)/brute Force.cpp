#include<bits/stdc++.h>
using namespace std;

int sum( vector<int>& nums, int k){
       int sum = 0 ; 
    int len = 0 ;

    int n = nums.size();
    for( int i = 0 ; i < n  ; i++){
        sum = 0;
        for(int j = i ; j < n ; j++){
            // cout<<i - j + 1<<endl;
            sum += nums[ j ];
            if( sum == k )
                len = max( len , j - i + 1);
        }
        
    }
   
    return len;
    
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> nums;
    for(int i = 0 ; i < n ; i++ ){
        int element;
        cin>>element ; 
        nums.push_back( element );
    }
    int result = sum( nums , k );
    cout<<"longest sum : "<<result;
    return 0;
}