#include<bits/stdc++.h>
using namespace std;

 void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> indexList;
        
        bool flag = false;
        const int row = matrix.size();
        const int column = matrix[0].size();
        vector<int> rowFlag;
        vector<int> columnFlag;
        for( int i = 0 ; i< row;i++)
            rowFlag.push_back( 0 );
        
        for( int i = 0 ; i < column ; i++ ){
            columnFlag.push_back( 0);
        }

        for( int i = 0 ; i <row ; i++){
            
            
            for( int j = 0 ; j < column ; j++){
                vector<int> temp_row;
                if( matrix[ i ][ j ] == 0){
                    rowFlag[ i ] = 1;
                    columnFlag[ j ] = 1;
                    
                }   
            }
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if( rowFlag[ i ]== 1 || columnFlag[ j ] == 1)
                    matrix[ i ][ j ] = 0;
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