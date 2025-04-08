#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
    int end = arr.size() - 1;

    // Keep searching while start is less than end
    while (start < end) {
        int mid = start + (end - start) / 2;

        // 🔼 If mid is on the increasing slope
        if (arr[mid] < arr[mid + 1]) {
            // The peak is definitely to the right of mid
            start = mid + 1;
        }
        else {
            // 🔽 If mid is on the decreasing slope or at the peak
            // We can't ignore mid because it might be the peak itself
            end = mid;
        }
    }

    // When start == end, we've found the peak
    return start; // or return end; both are same here
}
