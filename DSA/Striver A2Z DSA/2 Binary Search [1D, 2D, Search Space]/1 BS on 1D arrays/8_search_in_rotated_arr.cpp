class Solution {
public:

    int binarySearch(vector<int>& nums, int s, int e, int target){

        int start = s, end = e;
        int n = nums.size();

        while(start<=end){
            int mid = start+(end-start)/2;

            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                start = mid +1;
            }else{
                end = mid - 1;
            }
        }

        return -1;
    }

    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int start = 0, end = n-1;
        int pivot = 0;

	while(start <= end){

        int mid = start + (end-start)/2;

		if(nums[mid] < nums[0]){
            pivot = mid;
            end = mid - 1;
        }else{
            start = mid + 1;
        }
	}

    int index;

    if(pivot == 0 ||(nums[pivot] <= target && target <= nums[n-1])){
        index = binarySearch(nums, pivot, n-1, target);
    }else{
        index = binarySearch(nums, 0, pivot-1, target);
    }

    return index;
    }
};