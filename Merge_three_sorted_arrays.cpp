vector<int> mergeThree(vector<int>& A, vector<int>& B, vector<int>& C) 
    { 
        //Your code 
        int i=0;
        int j=0;
        int k=0;
        vector<int>v;
        while(i<A.size()&&j<B.size()&&k<C.size())
        {
            if(A[i]<=B[j]&&A[i]<=C[k])
            {
                v.push_back(A[i]);
                i++;
            }
            else if(B[j]<A[i]&&B[j]<C[k])
            {
                v.push_back(B[j]);
                j++;
            }
            else{
                v.push_back(C[k]);
                k++;
            }
        }
        //--------------------------------------
        
        
         while(i<A.size()&&j<B.size())
            {
                if(A[i]<=B[j])
                {
                    v.push_back(A[i]);
                    i++;
                }
                else{
                    v.push_back(B[j]);
                    j++;
                }
            }
            
           
           while(i<A.size()&&k<C.size())
            {
                if(A[i]<=C[k])
                {
                    v.push_back(A[i]);
                    i++;
                }
                else{
                    v.push_back(C[k]);
                    k++;
                }
            }
            
            
           
            while(j<B.size()&&k<C.size())
            {
                if(B[j]<=C[k])
                {
                    v.push_back(B[j]);
                    j++;
                }
                else{
                    v.push_back(C[k]);
                    k++;
                }
            }
            
            
            //=========================
            
            while(i<A.size())
            {
                v.push_back(A[i]);
                i++;
            }
            while(j<B.size())
            {
                v.push_back(B[j]);
                j++;
            }
            
            
            while(k<C.size())
            {
                v.push_back(C[k]);
                k++;
            }
        return v;
    }