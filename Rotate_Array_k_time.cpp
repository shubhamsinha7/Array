void revers(int arr[],int s,int e)
{
    while(s<e)
    {
        swap(arr[s++],arr[e--]);
    }
}
void rotateArr(int arr[], int d, int n){
    // code here
    revers(arr,0,d-1);
    revers(arr,d,n-1);
    revers(arr,0,n-1);
    
}
