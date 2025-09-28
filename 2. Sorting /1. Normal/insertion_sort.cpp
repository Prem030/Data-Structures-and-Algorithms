#include<bits/stdc++.h>
using namespace std;

void insertion_sort( int arr[] , int size ){
    for( int i = 0 ; i < size ; i++ ){
        if( arr[ i ] < arr[ i - 1] ){
            int j = i;
            while( arr[ j ] < arr[ j - 1 ] && j >  0){
                int temp = arr[ j ];
                arr[ j ] = arr[ j - 1 ];
                arr[ j - 1 ] = temp;
                j--;
                
            }
        }
    }
    for( int i = 0 ; i < size ; i++ )
        cout<<arr[ i ]<<" ";
}

int main(){
    int size;
    cin>>size;
    int arr[ size ];
    for( int i = 0 ; i < size ; i++ )
        cin>> arr[ i ];
    
    insertion_sort( arr , size);

    return 0;
}