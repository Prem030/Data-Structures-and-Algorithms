#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        vector<vector<int>> temp;
        
        for( int i = 0 ; i < matrix.size(); i++){
            vector<int> temp_row;
            for( int j = 0 ; j < column; j++ ){
                temp_row.push_back( matrix[ row - 1 - j ][ i ]);
            }
            temp.push_back( temp_row);
        }
        for( int i = 0 ; i < matrix.size(); i++){
            for( int j = 0 ; j < column; j++ ){
                matrix[ i ][ j ] = temp[ i ][ j ];
            }
        }
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
    rotate( matrix );
    return 0;
}