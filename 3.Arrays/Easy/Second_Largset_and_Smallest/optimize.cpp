#include<bits/stdc++.h>
using namespace std;

int findSecondLargest( vector<int> arr , int n ){
    int largest = arr[ 0 ];
    int secondLargest = arr[ 0 ];

    for( int i = 1 ; i < n ; i++){
        
        // if( arr[ i ] > largest || arr[ i ] > secondLargest){
        //     if( largest < arr [ i ]){
        //         secondLargest =largest;
        //         largest = arr[ i ];
        //     }
        //     if( arr[ i ] > secondLargest && arr[ i ] < largest)
        //         secondLargest = arr [ i ];
        // }
        if( arr[ i ] > largest){
            secondLargest = largest;
            largest = arr[ i ];
        }
        else if( arr[ i ]> secondLargest && arr [ i ] < largest ){
            secondLargest = arr[ i ];
        }
    }
    return secondLargest;
}
int findSecondSmallest( vector<int> arr, int n ){
    int smallest = arr[ 0 ];
    int secondSmallest = INT_MAX;
    for( int i = 1 ; i < n ; i++ ){
        if( arr[ i ] < smallest ){
            secondSmallest = smallest;
            smallest = arr[ i ];
        }
        else if( arr [ i ]!= smallest && arr[ i ] < secondSmallest)
            secondSmallest = arr[ i ];
    }
    return secondSmallest;
}
vector<int> findSecondElement( vector<int> arr , int n){
    int slargest = findSecondLargest( arr , n );
    int sSmallest = findSecondSmallest( arr , n );
    return { slargest , sSmallest };
}
int main(){
    int n;
    cin>>n;
    vector<int> numbers;
    for( int i = 0 ; i < n ; i++ ){
        int element;
        cin>>element;
        numbers.push_back( element );
    }
    vector<int> secondElements;
    secondElements = findSecondElement( numbers , n );
    for (auto i : secondElements)
    {
        cout<<i<<endl;
    }
    
    return 0;
}
 