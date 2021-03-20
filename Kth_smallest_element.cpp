int lpartition(int arr[],int l,int h){
            int p=arr[h];
            int i=l-1;
            for(int j=l;j<=h-1;j++)
            {
                if(arr[j]<p)
                {
                    i++;
                    swap(arr[i],arr[j]);
                }
            }
            swap(arr[i+1],arr[h]);
            return i+1;
        }
        int kthSmallest(int arr[], int n, int k){
        // Your code here
        int l=0;
        int h=n-1;
        while(l<=h){
          int p=lpartition(arr,l,h);
          if(p==k-1){
              return arr[p];
          }
          else if(p>k-1)
          {
              h=p-1;
          }
          else{
              l=p+1;
          }
        }
        return -1;
        
    }