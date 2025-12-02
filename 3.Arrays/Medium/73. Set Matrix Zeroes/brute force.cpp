#include<bits/stdc++.h>
using namespace std;

void makeZeros( int row , int column , vector<vector<int>> & matrix){
        for( int i = 0; i < matrix.size() ; i++ )
            matrix[ i ][ column ] = 0;
        for ( int j = 0 ; j < matrix[0].size() ; j++){
            matrix[ row ][ j ] = 0;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> temp;
        
        for( int i = 0 ; i < matrix.size() ; i++){
            vector<int> temp_row;
            for( int j = 0 ; j < matrix[ 0 ].size() ; j++ ){
                temp_row.push_back( matrix[ i ][ j ]);
            }
            temp.push_back( temp_row);
        }
        for( int i = 0 ; i < matrix.size() ; i++){
            for( int j = 0 ; j < matrix[ 0 ].size() ; j++ ){
                cout<<temp[ i ][ j ]<<" ";
            }
            cout<<endl;
        }
        
        int row = matrix.size();
        int column = matrix[ 0 ].size();
        for( int i = 0 ; i< row ; i++){
            for( int j = 0 ; j < column ; j++){
                if( matrix[ i ][ j ] == 0 ){
                    makeZeros( i , j , temp);
                }      
            }  
        }
        for( int i = 0 ; i < matrix.size() ; i++){
            for( int j = 0 ; j < matrix[ 0 ].size() ; j++ ){
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
    setZeroes( matrix );
    return 0;
}