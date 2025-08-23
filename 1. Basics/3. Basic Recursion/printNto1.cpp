#include<bits/stdc++.h>
using namespace std;

void print(int n ){
    if( n == 0) return;
    cout<<n<<" ";
    
    print(--n);
}

int main(){
    int N;
    cin>>N;
    print(N);

    return 0 ;
    
} // namespace std;
