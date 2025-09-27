#include<bits/stdc++.h>
using namespace std;

int returnSmallestIndex( int arr[] , int size , int startingPoint ){
    int smallestIndex = startingPoint ;
    for( int i = startingPoint ; i < size ; i++){
        if( arr[ smallestIndex] > arr[ i ])
            smallestIndex = i;
    }
    return smallestIndex;
    
}
void selectionSort( int arr[] , int size){
    int i = 0;
    for( int i = 0 ; i< size - 1 ; i++ ){
        int index = returnSmallestIndex( arr , size , i);
        int temp = arr[ i ];
        arr[ i ] = arr[ index ];
        arr[index] = temp ;
        
    }
    for( int i = 0 ; i< size ; i++)
        cout<<arr[ i ]<<" ";
}

int main(){
    int size;
    cin>>size;
    int arr[ size ];
    for( int i = 0 ; i < size ; i++)
        cin>>arr[ i ];
    selectionSort( arr , size );
    return 0;
}