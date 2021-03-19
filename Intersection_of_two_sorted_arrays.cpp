vector<int> printIntersection(int arr1[], int arr2[], int N, int M) 
    { 
        int i=0;
        int j=0;
        vector<int>v;
        while(i<N && j<M)
        {
            if(i>0&&arr1[i-1]==arr1[i])
            {
                i++;
                continue;
            }
            if(arr1[i]<arr2[j])
            {
                i++;
            }
            else if(arr1[i]>arr2[j])
            {
                j++;
            }
            else{
                v.push_back(arr1[i]);
                i++;j++;
            }
        }
        return v;
    }