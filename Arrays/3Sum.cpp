#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 5, 5, 5, 2};
    int key = 12;
    int n = 5;

    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int allSum = arr[i] + arr[j] + arr[k];
                if (allSum == key) {
                    vector<int> trip = {arr[i], arr[j], arr[k]};
                    // sort(trip.begin(), trip.end());
                    uniqueTriplets.insert(trip);
                }
            }
        }
    }

    if (uniqueTriplets.empty()) {
        cout << -1 << endl;
    } else {
        for (auto &t : uniqueTriplets) {
            cout << t[0] << " " << t[1] << " " << t[2] << endl;
        }
    }

    return 0;
}

