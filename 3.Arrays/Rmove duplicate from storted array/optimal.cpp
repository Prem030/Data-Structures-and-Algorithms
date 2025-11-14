#include<bits/stdc++.h>

using namespace std;

int removeDuplicates( vector<int>& arr ){
    int n = arr.size();
    int j = 0 ;
    for( int i = 1 ; i < n ; i++) {
        if( arr[ j ] != arr[ i ]){
            arr[ ++j ] = arr[ i ];
        }
    }
    return j+ 1;
    
}

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for( int i = 0 ; i< n ; i++ ){
        int element;
        cin>>element;
        arr.push_back( element );
    }
    int index = removeDuplicates( arr );
    for( int i = 0 ; i < index ; i++ ){
        cout<<arr[ i ]<<" ";
    }
    return 0;
}
