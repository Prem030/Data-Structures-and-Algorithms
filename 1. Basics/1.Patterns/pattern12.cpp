#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // for( int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= i ; j++ )
    //         cout<<j<<" ";
    //     for(int k = n-i ; k > 0 ;k--)
    //         cout<<"  ";
    //     for(int l = 0 ; l < n-i ; l++)
    //         cout<<"  ";
    //     for(int m = i; m>0;m--)
    //         cout<<m<<" ";
    //     cout<<endl;
    // }
    for( int i = 1 ; i <= n; i++ ){
        for( int j = 1 ; j <= 2*n ; j++){
            if( i >=j /*i + j > 2*n*/ )
                cout<<j<<" ";
            else if(i + j > 2*n)
                cout<<2*n+1-j<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }

    return 0;
}