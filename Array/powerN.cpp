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

int power(int x, int n){
    if(n == 0) return 1;
    return x * power(x, n-1);
}
 
int main(){

    cout<<power(3, 3);
 return 0;
}