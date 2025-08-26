#include<bits/stdc++.h>
using namespace std;
void reverse (int n , int i , int arr[]){
    if( i > n/2){
        for( int i  = 0 ; i < n ; i++)
        cout<<arr[ i ]<<" ";
        return;
    }
    int temp = arr[ i ];
    arr[ i ] = arr[ n - 1 - i ];
    arr[ n - 1 - i ] = temp;
    reverse( n , i+1 , arr);
}
int main(){
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++ )
        cin>>arr[ i ];
    cout<<endl;
    
    reverse(n , 0 , arr);
   
    return 0;
}