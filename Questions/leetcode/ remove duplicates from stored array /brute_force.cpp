#include<bits/stdc++.h>

using namespace std;

void removeDuplicates( vector<int>& arr ){
    int n = arr.size();
    set<int> st;
    for( int i = 0 ; i < n ; i++)
        st.insert( arr[ i ]);
    int index = 0; 
    for ( auto it : st )
    {
        arr[ index ] = it;
        index++;
    }
    for (int i = 0; i < st.size(); i++)
    {
        cout<<arr[ i ]<<" ";
    }
    
    
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
    removeDuplicates( arr );
    return 0;
}
