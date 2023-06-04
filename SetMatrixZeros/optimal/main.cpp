/* will run on coding blocks website 
   https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_3846774?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website
*/
#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int n= matrix.size();
	int m= matrix[0].size();
    int colset=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (matrix[i][j] == 0){
                if(j!=0)
                matrix[0][j]=0;
                else
                colset=0;

                matrix[i][0]=0;
            }
        }
    }

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] =0;
                }
            }
        }
    }

    if(matrix[0][0] == 0){
        for(int j=0;j<m;j++){
            matrix[0][j] =0;
        }
    }
    if(colset == 0){
          for(int i=0;i<n;i++){
            matrix[i][0] =0;
        }
    }
}