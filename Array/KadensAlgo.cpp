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

int maxSum(int arr[], int n){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i =0; i<n; i++){
        sum += arr[i];
        if(sum > maxSum){
            maxSum = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }
    return maxSum;
}
 
int main(){

    int arr[] = {2,3,5,-2,7,-4};

    cout<<maxSum(arr, 6);
 
 return 0;
}