void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	int Max=arr[n-1]+1;
    	int max_i=n-1;
    	int min_i=0;
    	for(int i=0;i<n;i++)
    	{
    	    if(i%2==0){
    	        arr[i]+=(arr[max_i]%Max)*Max;
    	        max_i--;
    	    }
    	    else{
    	        arr[i]+=(arr[min_i]%Max)*Max;
    	        min_i++;
    	    }
    	}
    	for(int i=0;i<n;i++)
    	{
    	    arr[i]/=Max;
    	}
    	 
    }