class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	
    	int platform=0;
    	int j=0;
    	
    	for(int i = 0;i<n;i++){
    	    if(arr[i]<=dep[j])
    	        platform++;
            else
                j++;
    	}
    	return platform;
    }
};

