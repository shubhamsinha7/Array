int equilibriumPoint(long long a[], int n) {

    // Your code here
    int rsum=0;
    int lsum=0;
    int i=0;
    int j=n-1;
    if(n==1)
    {
        return 1;
    }
    while(i<j)
    {
        lsum+=a[j];
        rsum+=a[i];
        i++;
        j--;
        if(rsum<lsum)
        {
            rsum+=a[i];
            i++;
        }
        if(lsum<rsum)
        {
            lsum+=a[j];
            j--;
        }
         if(rsum==lsum && i==j)
            {
                return i+1;
            }
            
    }
    return -1;
}