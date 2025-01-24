#include <iostream>
#include <vector>
#include <cmath>  // For abs()
using namespace std;

int minCostToMakeArraysIdentical(vector<int>& arr, vector<int>& brr, int k) {
    int n = arr.size();
    int totalCost = 0;

    // Step 1: Find total difference cost
    for (int i = 0; i < n; i++) {
        totalCost += abs(arr[i] - brr[i]);  // Adding difference cost
    }

    // Step 2: Compare with rearrangement cost
    if (k < totalCost) {
        return k;  // If k is cheaper, use it
    }

    return totalCost;  // Otherwise, use element-wise changes
}

int main() {
    vector<int> arr = {-7, 9, 5};
    vector<int> brr = {7, -2, -5};
    int k = 2;

    cout << "Minimum Cost: " << minCostToMakeArraysIdentical(arr, brr, k) << endl;
    return 0;
}