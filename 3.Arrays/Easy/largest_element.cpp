#include<bits/stdc++.h>
using namespace std;

int returnLargest( int arr[] , int n ){
    int largest = arr[ 0 ];
    for (int  i = 1; i < n; i++)
    {
        if( arr[ i ] > largest)
            largest = arr[ i ];
        
    }
    return largest;
    
}

int main(){
    int n;
    cin>>n;
    int arr[ n ];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[ i ];

    }
    int largest = returnLargest( arr , n );
    cout<<"The largest element in the array : "<<largest;
    return 0;

}