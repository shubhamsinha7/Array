class Solution{
    public:
    //Complete this function
    //Function to return the count of non-repeated elements in the array.
    int countNonRepeated(int arr[], int n)
    {
        //Your code here
        unordered_map <int,int>m;
        for(int x=0;x<n;x++)
        {
            m[arr[x]]++;
        }
        int count=0;
        for(auto e:m)
        {
           if(e.second==1)
           {
               count++;
           }
        }
        return count;
    }

};
