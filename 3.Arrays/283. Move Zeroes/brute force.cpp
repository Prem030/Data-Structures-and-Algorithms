#include<bits/stdc++.h>
using namespace std;

void moveZeros( vector<int> & nums){
    vector<int> arr;
        int n = nums.size();
        int count = 0;
        for( int i = 0 ; i < n ; i++){
            if( nums[ i ] == 0 )
                count++;
            else{
                arr.push_back( nums[ i ]);
            }
            
        }
        while( count > 0 ){
            arr.push_back(0);
            count--;
        }
        for( int i = 0 ; i < n ; i++)
            nums[ i ] = arr[ i ];
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for( int i = 0 ; i < n ; i++ ){
        int element;
        cin>>element;
        arr.push_back( element);
    }
    moveZeros( arr );
    for (int i = 0; i < n; i++)
    {
        cout<<arr[ i ]<<" ";
    }
    
    return 0;
}