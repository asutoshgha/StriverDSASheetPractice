/* will run on coding blocks website 
   https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
*/
#include <bits/stdc++.h>
void marki(vector<vector<int>> &matrix,int i){
    if(i<0)
    return;
    for(int j=0;j<matrix[0].size();j++){
        if(matrix[i][j]!=0)
        matrix[i][j]=-1;
    }
}
void markj(vector<vector<int>> &matrix,int j){
    if(j<0)
    return;
    for(int i=0;i<matrix.size();i++){
        if(matrix[i][j]!=0)
        matrix[i][j]=-1;
    }
}
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int n= matrix.size();
	int m= matrix[0].size();

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (matrix[i][j] == 0){
                marki(matrix,i);
                markj(matrix,j);
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j] == -1){
                matrix[i][j] =0;
            }
        }
    }
}