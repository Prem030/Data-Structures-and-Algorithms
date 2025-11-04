#include<bits/stdc++.h>
using namespace std;

void bsort( vector<int>& arr , int i){
    int j = 0 ;
    if( i >= arr.size() - 1)
        return;
    while (j < arr.size() - 1 )
    {
        if( arr[ j ] > arr[ j + 1 ])
            swap( arr[ j ] , arr[ j + 1 ]); 
        j++;
    } 
    i++;
    bsort( arr , i);
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for( int i = 0 ; i < n ; i++ ){
        int num;
        cin>>num;
        nums.push_back( num );
    }
    bsort( nums , 0 );
    for( int i = 0 ; i < n ; i++ ){
        cout<<nums[ i ]<<" ";
    }
    return 0;
}