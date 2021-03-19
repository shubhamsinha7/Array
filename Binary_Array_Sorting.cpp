void binSort(int A[], int N)
    {
       //Your code here
       int i=-1;
       int j=N;
       while(true)
       {
           do{
               i++;
           }
           while(A[i]==0);
           do{
               j--;
           }
           while(A[j]==1);
           if(i>=j)
           {
               return;
           }
           swap(A[i],A[j]);
       }
       
       for(int i=0;i<N;i++)
       {
           cout<<A[i]<< " ";
       }
    