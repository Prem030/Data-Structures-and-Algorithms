#include<bits/stdc++.h>
using namespace std;

int findLargest( vector<int> arr , int n ){
    int largest = arr[ 0 ];
    for( int i = 1 ; i < n ; i++ ){
        if( arr[ i ] > largest)
            largest = arr[ i ];
    }
    return largest;
}
int findSecondLargest( vector<int> arr , int n ){
    int largest = findLargest( arr, n );
    int secondLargest = arr[ 0 ];
    for( int i = 0 ; i < n ; i++ ){
        if( arr[ i ] > secondLargest && arr[ i ] < largest){
            secondLargest = arr[ i ];
        }
    }
    return secondLargest;
}

int main(){
    int n;
    cin>>n;
    vector<int> numbers;
    for( int i = 0 ; i < n ; i++ ){
        int n;
        cin>>n;
        numbers.push_back( n );
    }
    int secondLargest = findSecondLargest( numbers , n );
    cout<<"second largest : "<<secondLargest;
    return 0;
}