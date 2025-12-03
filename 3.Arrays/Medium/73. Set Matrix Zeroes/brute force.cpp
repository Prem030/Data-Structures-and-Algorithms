#include<bits/stdc++.h>
using namespace std;

 void setZeroes(vector<vector<int>>& matrix) {
        vector<vector<int>> indexList;
        
        bool flag = false;
        int row = matrix.size();
        int column = matrix[0].size();
        for( int i = 0 ; i <row ; i++){
            
            
            for( int j = 0 ; j < column ; j++){
                vector<int> temp_row;
                if( matrix[ i ][ j ] == 0){
                    temp_row.push_back( i );
                    temp_row.push_back( j );
                    indexList.push_back( temp_row);
                    
                }   
            }
        }
        for( int i = 0 ; i< indexList.size() ; i++ ){
            for( int j = 0 ; j < matrix[ 0 ].size() ; j++ ){
                matrix[ indexList[i][0] ][ j ] = 0;
            }
        }
        for( int i = 0 ; i < indexList.size() ; i++ ){
            for( int j = 0 ; j < matrix.size() ; j++ ){
                matrix[ j ][ indexList[ i ][ 1 ]] = 0;
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