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

int pow(int x, int n){
    if(n == 0) return 1;
    if(n == 1) return n;

    return x * pow(x, n-1);
}
int main(){
    cout<<pow(2, 4);
 return 0;
}