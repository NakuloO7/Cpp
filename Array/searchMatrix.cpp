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

bool binarySearch(vector<int> nums, int target){
    int low = 0; 
    int high = nums.size()-1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(nums[mid] == target){
            return true;
        }else if(target > nums[mid]){
            low = mid + 1;
        }else{
            high = mid -1;
        }
    }

    return false;
}


bool search(vector<vector<int>>& matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();


    for(int i = 0; i<n; i++){
        //check if the target lies withtin that row
        if(matrix[i][0] <= target && target <= matrix[i][m-1]){
            return binarySearch(matrix[i], target);
        }
    }
    return false;
}
 
int main(){

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int target = 7;
    cout<<search(matrix, target);
 
 return 0;
}