#include<bits/stdc++.h>
using namespace std;

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[ 0 ].size();
        int top = 0 , right = column - 1 ;
        int bottom = row - 1 , left = 0;
        vector<int> result;

        while( left <= right && top <= bottom){
            for( int i = left ;i <= right ; i++){
                result.push_back( matrix[ top ][ i ]);
            }
            top++;
            for( int i = top ;i <= bottom ; i++){
                result.push_back( matrix[ i ][ right ]);
            }
            right--;
            if( top <= bottom ){
                for( int i = right ; i >= left ; i--)
                    result.push_back( matrix[ bottom ][ i  ]);
                    bottom--;
            }
            if( left <= right ){
                for( int i = bottom ; i >= top ; i--)
                    result.push_back( matrix[ i ][ left ]);
                    left++;
            }
        }
    return result;

    }
int main(){
    int row , column ;
    cin>>row;
    cin>>column;
    
    vector< vector <int> > matrix;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp_row;
        for (int i = 0; i < column; i++)
        {
            int element;
            cin>>element;
            temp_row.push_back( element );
        }
        matrix.push_back( temp_row );
    }
    vector<int> result = spiralOrder( matrix );
    for (int i = 0; i < result.size(); i++)
    {
        cout<<result[ i ]<<" "; 
    }
    
    return 0;
}