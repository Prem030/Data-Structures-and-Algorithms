#include<bits/stdc++.h>
using namespace std;

set<int> Union( vector<int> arr , vector<int> brr){
    set<int> st;
    int n = arr.size();
    int m = brr.size();
    for( int i = 0 ; i < n ; i++ )
        st.insert( arr[ i ]);
    for (int j = 0; j < m; j++)
    {
        st.insert( brr[ j ]);
    }
    return st;
}

int main() {

     int n;
    cin>>n;
    vector<int> arr , brr ;
    for( int i = 0 ; i < n ; i++ ){
        int element;
        cin>>element;
        arr.push_back( element);
    }
    int m;
    cin>>m;
    for( int i = 0 ; i < m ; i++ ){
        int element;
        cin>>element;
        brr.push_back( element);
    }
    set<int> st = Union( arr , brr );
    for (auto it: st )
    {
        cout<<it<<" ";
    }
    return 0;
}