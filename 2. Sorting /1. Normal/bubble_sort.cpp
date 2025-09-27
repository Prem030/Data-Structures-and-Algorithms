#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[] , int size ){
    
    for( int i = 0 ; i < size-1 ; i++){
        for( int j = 0 ; j < size - i ; j++){
            if( arr[ j ] > arr[ j + 1 ]) {
                int temp = arr[ j ];
                arr[ j ] = arr[ j + 1 ]; 
                arr[ j + 1 ] =  temp ;
            }
        }
    }
    for( int i = 0 ; i< size ; i++)
        cout<< arr[ i ] <<" ";
}

int main(){

    int size; 
    cin>>size;
    int arr[ size ];
    for( int i = 0 ; i < size; i++) cin>>arr[ i ];
    bubble_sort(arr , size);

    return 0;
}
