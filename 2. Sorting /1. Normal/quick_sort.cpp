#include <bits/stdc++.h>
using namespace std;


//  arrange array according to pivot brute force 
int f(vector<int> &arr, int low , int high)
{
    
    int i = low;
    int j = high;
    int pivot = arr[low];
    // while (i < j)
    // {
    //     if( arr[ i ] > pivot){
    //         if( arr[ j ] > pivot){
    //             j--;
    //             continue;
    //         }
    //     }
    //     if( arr [ j ] < pivot){
    //         if( arr[ i ] <= pivot){
    //             i++;
    //             continue;
    //         }
    //     }
        
    //     if( arr[ i ] > pivot && arr[ j ] < pivot){
    //     int temp = arr[ i ];
    //     arr[ i ] = arr[ j ];
    //     arr[ j ] = temp ;
        
    // }
    // i++; 
    // j--;
    // } 
   
    // int temp  = arr[ low ];
    // arr[ low ] = arr[ j ];
    // arr[ j] = temp;

    while( i < j ){
        while( arr[ i ] <= pivot && i<= high - 1 )
            i++;
        while( arr[ j ] > pivot && j >= low + 1)
            j--;
        if( i < j ) swap( arr[ i ] , arr[ j ] );

    }
    swap( arr[ low ] , arr[ j ]);
    return j;
}



void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition_index = f(arr, low , high );
            quick_sort( arr , low , partition_index - 1 );
            quick_sort( arr , partition_index + 1 , high ); 
    }
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int n;
        cin >> n;
        arr.push_back(n);
    }
    quick_sort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}