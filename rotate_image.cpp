/*
  ROTATE IMAGE (Leetcode 48)

PROBLEM STATEMENT:-You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Time Complexity:-O(n^2) (n rows and n columns)
Space complexity:-O(1)


APPROACH:-
1)Take variables row and column for no.of rows and col. (although it is same)
2)Start a for loop for no.of rows(let say i=0->row-1)
3) Inside this for loop start one more loop for column (let say j=i->col-1)
4)Swap the values of row and column. (mat[i][j] and mat[j][i])
5) After inside column loop termination reverse that row .(i th row)
6)Finally return given matrix




CODE:-
  */

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
        int row=matrix.size();
        int col=matrix[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=i;j<col;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
              reverse(matrix[i].begin(),matrix[i].end());
            
        }
      
        
    }
};
