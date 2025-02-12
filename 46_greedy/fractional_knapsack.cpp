#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2) {      // comparator
    // pair<int, int> {value,weight}
    double r1 = (p1.first*1.0) / (p1.second*1.0);
    double r2 = (p2.first*1.0) / (p2.second*1.0);
    return r1 > r2;
}

int fractionalKnapsack(vector<int> &profit, vector<int> &weights, int n, int W) {
    vector<pair<int, int>> arr;
    for(int i=0; i<n; i++) {
        arr.push_back({profit[i], weights[i]});
    }
    sort(arr.begin(), arr.end(), cmp);  // sorting on the basis of comparator cmp
    int result = 0;
    for(int i=0; i<n; i++) {
        if(arr[i].second <= W) {
            result += arr[i].first;
            W -= arr[i].second;
        } else {    // pick partially
            result += ((arr[i].first*1.0) / (arr[i].second*1.0)) * W;
            break;
        }
    }
    return result;
}

int main() {
    return 0;
}