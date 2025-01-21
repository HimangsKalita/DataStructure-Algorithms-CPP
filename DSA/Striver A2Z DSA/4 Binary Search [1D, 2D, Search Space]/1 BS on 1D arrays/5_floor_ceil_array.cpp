// https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
	
	int fl = -1, cl = -1;
	pair<int, int> ans;

	sort(arr, arr+n);

	int start = 0, end = n-1;

	while(start <= end){

		int mid = start + (end-start)/2;
		
		if(arr[mid] <= x){

			if (arr[mid] >= fl)
			{
				fl = arr[mid];				
			}

			start = mid + 1;
		}

		if(arr[mid] >= x ){

			cl = arr[mid];
			end = mid - 1;
		}
	}

	ans.first = fl;
	ans.second = cl;

	return ans;
}