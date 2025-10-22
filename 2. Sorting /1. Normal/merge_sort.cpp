#include<bits/stdc++.h>
using namespace std;

void merge( vector<int> &arr , int low , int mid , int high){
    vector<int> temp;
    int left = low ; 
    int right = mid + 1;
    while( left <= mid && right <= high){
        if( arr[ left ] <= arr[ right ] ){
            temp.push_back( arr[ left ]);
            left++;
        }
        if( arr[ left ] >= arr[ right ] ){
            temp.push_back( arr[ right ]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back( arr[ left ]);
        left++;
    }
    while (right<= high)
    {
        temp.push_back( arr[ right ]);
        right++;
    }
    for( int i = low ; i <= high ; i++){
        arr[ i ] = temp[i - low];
    }
    
}

void merge_sort(  vector<int> &arr , int low , int high ){
    if( low == high)
        return;
    int mid = ( high + low ) / 2;
    merge_sort( arr , low , mid );
    merge_sort( arr , mid + 1 , high );
    merge( arr , low , mid , high );
}

int main(){
    int size;
    cin>>size;
    vector< int > arr;
    for( int i = 0 ; i< size ; i++){
        int num;
        cin>>num;
        arr.push_back( num );
    }
    merge_sort( arr , 0 , size - 1  );
    for( int i = 0 ; i < size ; i++)
        cout<<arr[ i ]<<" ";
    return 0;
}