class Solution{
  public:
    // arr[]: input array
    // n: size of array
    //Function to return non-repeated elements in the array.
    vector<int> printNonRepeated(int arr[],int n)
    {
        //Your code here
        unordered_map <int,int>m;
        vector<int>v;
        for(int x=0;x<n;x++)
        {
            m[arr[x]]++;
        }
        for(auto i=0;i<n;i++)
        {
           if(m[arr[i]]==1)
           {
               v.push_back(arr[i]);
           }
        }
        return v;

    }
};