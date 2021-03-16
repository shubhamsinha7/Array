int sumExists(int arr[], int N, int sum)
{
   unordered_set<int>s;
   for(int i=0;i<N;i++)
   {
       if(s.find((sum-arr[i]))!=s.end())
       {
           return true;
       }
       s.insert(arr[i]);
   }
   return false;
}