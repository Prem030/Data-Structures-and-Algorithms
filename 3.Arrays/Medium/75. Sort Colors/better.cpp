#include<bits/stdc++.h>
using namespace std;

void arrange( vector<int>& temp , vector<int> temp2){
    for (int i = 0; i < temp2.size(); i++)
    {
        temp.push_back( temp2[ i ]);
    }
    
}
    void sortColors(vector<int>& nums) {
        vector<int> zeros;
        vector<int> ones;
        vector<int> twos;
        vector<int> temp;
        for( int i = 0 ; i< nums.size(); i++){
            if( nums[ i ] == 0)
                zeros.push_back( nums[ i ]);
            if( nums[ i ] == 1)
                ones.push_back( nums[ i ]);
            if( nums[ i ] == 2)
                twos.push_back( nums[ i ]);
            
        }
            arrange( temp , zeros);
            arrange( temp , ones);
            arrange( temp , twos);
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i ] = temp[ i ];
        }
        
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        nums.push_back( element );
    }
    sortColors( nums );
    for (int i = 0; i < n; i++)
    {
        cout<<nums[ i ]<<" ";
    }
    
    return 0;
}