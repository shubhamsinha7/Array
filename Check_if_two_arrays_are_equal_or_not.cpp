bool check(vector<ll> arr, vector<ll> brr, int n) {
    //code here
    unordered_map<long long,long long>s;
    for(long long i=0;i<n;i++)
    {
        s[arr[i]]++;
    }
    for(long long i=0;i<n;i++)
    {
        s[brr[i]]--;
        if(s[brr[i]]==0){
            s.erase(brr[i]);
        }
    }
    return s.size()==0;
