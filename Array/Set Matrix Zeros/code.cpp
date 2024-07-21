#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<pair<int,int>> coordinates;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0) coordinates.push_back({i,j});
            }
        }
        for(auto coordinate:coordinates){
            for(int i=0;i<n;i++){
                if(matrix[i][coordinate.second]!=0)
                matrix[i][coordinate.second] = 0;
            }
            for(int j=0;j<m;j++){
                if(matrix[coordinate.first][j]!=0)
                matrix[coordinate.first][j] = 0;
            }
        }
    }
};