#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin>>size;

    int arr[ size ];
    for( int i = 0 ; i < size ; i++ )
        cin>>arr[ i ];

    // pre-computing
    map<int , int> mpp;
    for( int i = 0 ; i < size ; i++ ){
        mpp[ arr [ i ]]++;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<number<<" : "<<mpp[ number ]<<endl;
    }
    
    
    return 0 ;
}