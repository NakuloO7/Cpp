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

int maxProfit(vector<int>& prices) {
        int maxProfit =  INT_MIN;
        int n = prices.size();

        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                maxProfit = max(maxProfit, prices[j]-prices[i]);
            }
        }
        return maxProfit;
}
 
int main(){
    vector<int>prices= {7,1,5,3,6,4};
    cout<<maxProfit(prices);
 
 return 0;
}