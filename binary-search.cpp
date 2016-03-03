int binary_search(int a[],int x,int low,int high){ // array a must be sorted , x is the integer we are look for , low and high are index
	if (low <= high){
		int mid = (low + high) / 2;

		if (a[mid] == x)
			return mid;
		else if (a[mid] < x)
			binary_search(a, x, mid+1, high);
		else
			binary_search(a, x, low, mid-1);
	}
	else
		return -1;
}