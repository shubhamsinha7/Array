vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    vector<int>a;
    int current_leader=A[n-1];
    a.push_back(current_leader);
    for(int i=n-2;i>=0;i--)
    {
        if(current_leader<A[i])
        {
            current_leader=A[i];
            a.push_back(current_leader);
            
        }
    }
    return a;
}
