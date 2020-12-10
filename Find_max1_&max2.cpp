vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;
    
    for(int i=0;i<sizeOfArray;i++){
        if(max<arr[i]){
            max2=max;
            max=arr[i];
        }
        else if(max2<arr[i]&&max!=arr[i])
        {
            max2=arr[i];
        }
    }
    if(max2<0){
        max2=-1;
    }
    vector<int>ans;
    ans.push_back(max);
    ans.push_back(max2);
    return ans;
     
}