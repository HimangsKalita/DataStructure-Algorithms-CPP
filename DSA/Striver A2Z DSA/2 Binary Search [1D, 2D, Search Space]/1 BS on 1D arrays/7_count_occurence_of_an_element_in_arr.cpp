int count(vector<int>& arr, int n, int x) {
	
		int ans = 0;

	int start = 0, end = n-1;
	int firstIndex = -1;

	while(start <= end ){

		int mid = start + (end - start)/2;

		if (arr[mid] == x )
		{	
			firstIndex = mid;
			end = mid - 1;
		}else if (arr[mid] < x)
		{
			start = mid + 1;
		}else {

			end = mid - 1;
		}
	}

	start = 0;
	end = n-1;
	int lastIndex = -1;

	while(start <= end ){

		int mid = start + (end - start)/2;

		if (arr[mid] == x )
		{	
			lastIndex = mid;
			start = mid + 1;
		}else if (arr[mid] < x)
		{
			start = mid + 1;
		}else {

			end = mid - 1;
		}
	}

	if(firstIndex == -1 && lastIndex == -1){
		return 0;
	}else{
		return (lastIndex-firstIndex)+1;

	}
}
