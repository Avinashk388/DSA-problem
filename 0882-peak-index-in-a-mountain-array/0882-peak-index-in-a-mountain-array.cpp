class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0, end = arr.size() - 1, mid;

        while (start < end) {  // Change condition to start < end
            mid = (start + end) / 2;

            if (arr[mid] > arr[mid + 1]) {
                // Peak is on the left side or at mid
                end = mid;
            } else {
                // Peak is on the right side
                start = mid + 1;
            }
        }

        return start; // At the end, start == end, which is the peak index
    }
};
