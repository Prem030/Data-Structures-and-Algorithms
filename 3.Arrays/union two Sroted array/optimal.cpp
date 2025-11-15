#include<bits/stdc++.h>
using namespace std;

vector<int> Union( vector<int> arr , vector<int> brr){
    vector<int> result;
    int n = arr.size();
    int m = brr.size();
    int smallest = n > m ? m : n;
    int counter1 = 0 , counter2 = 0 ;
    while (counter1 < n && counter2 < m )
    {
        if (arr[ counter1 ] == brr[ counter2 ])
        {
            result.push_back( arr[counter1]);
            counter1++;
            counter2++;
        }
        
        else if( arr[ counter1 ] > brr[ counter2 ]){
            if( brr[ counter2 ] == brr[ counter2 + 1 ])
                counter2++;
            
            result.push_back( brr[ counter2 ]);
            counter2++;
            
        }
        else{
            if( arr[ counter1 ] == arr[counter1 + 1])
                counter1++;
            result.push_back( arr[counter1 ]);
            counter1++;
            
        }
    }
    if( counter1 == n){
        while (counter2 < m)
        {
            result.push_back( brr[ counter2++ ]);
        }
        
    }
    else{
        while (counter1 < n )
        {
            result.push_back( arr[ counter1++ ]);
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
    vector<int> result =  Union( arr , brr );
    for( int i = 0 ; i < result.size(); i++){
        cout<<result[ i ] << " ";
    }
    
    return 0;
}