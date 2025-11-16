#include<bits/stdc++.h>
using namespace std;

void moveZeros( vector<int> & nums ){
    int n = nums.size();
    int zeroPosition = 0 ;
    for (int  j = 0; j < n; j++)
    {
        if( nums[ j ] != 0 ){
            swap( nums[ j ] , nums[ zeroPosition]);
            zeroPosition++;
        }
    }
    
}

int main(){
    int n ;
    cin>>n;
    vector<int> arr;
    for( int i = 0 ; i < n ; i++ ){
        int element;
        cin>>element;
        arr.push_back( element );
    }
    moveZeros( arr );
    for (int i = 0; i < n; i++)
    {
        cout<<arr[ i ]<<" ";
    }
    
    return 0;
}