#include<bits/stdc++.h>
using namespace std;

void sum(int n , int i ,int result){
    
    if(i > n) {
        cout<<result<<"  "<<endl;
        return;
    }
    result += i ;
    sum(n , i+1 , result);
}

int main(){
    int n;
    cin>>n;
    sum( n , 1 , 0 );
    return 0;
}