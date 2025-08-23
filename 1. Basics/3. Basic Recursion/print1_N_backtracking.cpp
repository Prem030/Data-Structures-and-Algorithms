#include<bits/stdc++.h>
using namespace std;

void back_Print(int n , int i){
    if ( i < 1) return;
    back_Print( n , i -1 );
    cout<<i<" ";
}

int main(){
    int n; 
    cin>>n;
    back_Print(n , n);
    return 0 ;
}