#include<bits/stdc++.h>
using namespace std;

void Print(int n , int N){
    if(n == N+1)   return;
    cout<<n<<" ";
    
    Print(++n , N);
}
int main(){
    int n;
    cin>>n;
    Print(1 , n);
    return 0;
}