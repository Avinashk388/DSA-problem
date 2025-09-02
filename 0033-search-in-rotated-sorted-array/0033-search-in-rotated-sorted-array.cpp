class Solution {
public:
    int search(vector<int>& arr, int target) {

        int mid,start=0,end=arr.size()-1,index=-1;

        while(start<=end)
        {
          mid=(start+end)/2;
          if (arr[mid] == target)
          return mid;

           if (arr[start] <= arr[mid]) {
                if (arr[start] <= target && target < arr[mid])
                    end = mid - 1;  // Search in left half
                else
                    start = mid + 1;  // Search in right half
            }

          else
          {
            if(arr[start]<=target || target<arr[mid])
            end = mid-1;
            else
            start = mid+1;
          }
        }
        return index;
        
    }
};