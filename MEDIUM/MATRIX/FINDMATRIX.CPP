#QUESTION

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,50]], target = 13
Output: false
Example 3:

Input: matrix = [], target = 0
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
0 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
```````````````````````````````````````````````````````````````````````````````````````````
#ANSWER

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        if(!m.size()|| !m[0].size()) return false;
        int row,l=0,r=m.size()-1,mid;
        while(l<r){
          mid = (l+r)/2;
          if(m[mid].back()<target) l=mid+1;
          else if(m[mid][0]>target) r=mid-1;
          else {
            l=mid;
            break;
          }
        }
      row =l;
      l=0;
      r= m[0].size()-1;
      while(l<=r){
        mid=(l+r)/2;
        if(m[row][mid]<target) l=mid+1;
        else if(m[row][mid]>target) r=mid-1;
        else return true;
        }
        return false;
    }
};
