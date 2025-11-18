#include<bits/stdc++.h>
using namespace std;

vector<int> intersection( vector<int> arr , vector<int> brr){
    vector<int> result;
    int n = arr.size() , m = brr.size();
    int visited[ m ] = { 0 };
    for( int i = 0 ; i< n ; i++){
        for (int j = 0; j < m; j++)
        {
            if( arr[ i ] == brr[ j ] && visited[ j ] == 0){
                result.push_back( arr[ i ]);
                visited[ j ] = 1;
                break;
            }
            if (brr[ j ] > arr[ i ])
            {
                break;
            }
            
        }
        
    }
    return result;
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
    vector<int> result = intersection( arr ,brr ); 
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[ i ]<<" ";
    }
    
    return 0;
}