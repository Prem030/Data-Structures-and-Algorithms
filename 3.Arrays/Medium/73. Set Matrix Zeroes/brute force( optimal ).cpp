#include<bits/stdc++.h>
using namespace std;
// Only works if there are no negative numbers 
void mark(int row , int column , vector<vector<int>>& matrix ){
    for (int i = 0; i < matrix.size(); i++)
    {
        matrix[ i ][ column ] = -1;
    }
    for (int j = 0; j < matrix[0].size(); j++)
    {
        matrix[ row ][ j ] = -1;
    }
    
    
}
    
void setZeroes(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int column = matrix[ 0 ].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if( matrix[ i ][ j ] == 0 ){
                mark( i , j , matrix);
            }
        }   
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if( matrix[ i ][ j ] == -1 ){
                matrix[ i ][ j ] = 0;
            }
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
    setZeroes( matrix );
    return 0;
}