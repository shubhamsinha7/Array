int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    unordered_map<int,int>h;
    int c=0;
    for(int i=0;i<n;i++)
    {
        h[a[i]]++;
    }
    for(int i=0;i<m;i++)
    {
      if(h.count(b[i]))
      {
          c++;
          h.erase(b[i]);
      }
    }
    return c;
}
