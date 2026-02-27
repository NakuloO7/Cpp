/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
You must do it in place.

Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <climits>
#include <cmath>
using namespace std;

void setZero(vector<vector<int>>&v){
    int m = v.size();
    int n = v[0].size();

    //first all the element as -1 to avoid extra zeroing
    for(int i = 0; i<m; i++){
        for(int j=0; j<n; j++){
            if(v[i][j] == 0){
                for(int col = 0; col <n; col++){
                    if(v[i][col] != 0){
                        v[i][col] = -1;
                    }
                }

                //mark rows to -1
                for(int row =0; row<m; row++){
                    if(v[row][j] != 0){
                        v[row][j] = -1;
                    }
                }
            }
        }
    }


    for(int i =0; i<m; i++){
        for(int j = 0; j<n; j++){
            if(v[i][j] == -1){
                v[i][j] =0;
            }
        }
    }
}
 
int main(){

    vector<vector<int>>v = {{1,1,1}, {1,0,1}, {1,1,1}};
    setZero(v);

    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v[0].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
 return 0;
}