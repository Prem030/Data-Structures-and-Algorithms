#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    int binary = 1;
    for(int i = 0 ; i<n; i++){
        // cout<<i;
        if(i%2 != 0 )
        {
            binary = 0;
        }
        else
            binary =1;
        for( int j = 0 ; j <= i; j++){
            cout<<binary<<" ";
            binary = (binary == 1) ? 0 : 1;
        }
        cout<<endl;
    }
    return 0 ;
} // namespace std;
