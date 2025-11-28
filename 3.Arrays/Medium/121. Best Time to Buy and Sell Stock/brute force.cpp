// using Kadine algorithm 
// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit;
    int profit;
    int n = prices.size();
    for( int i = 0 ; i < n - 1; i++ ){
        for (int j = i + 1; j < n; j++)
        {
            profit = prices[ i ] - prices[ j ];
            maxProfit = max( profit , maxProfit);

        }
        
    }
    if( maxProfit < 0 )
    return 0;
    else
    return maxProfit;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    
    for ( int i = 0; i < n; i++ )
    {
        int element;
        cin>>element;
        nums.push_back( element);
    }
   
    return 0;
}