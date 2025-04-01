int binarySearch(int arr,int n,int target){
    for(int i=0;i<n;i++){
       int found=0;
         int result = i;
        if(arr[i]==target){
            found=1;
        }
        else{return 0;}
    }
    if(found){
        printf("%d",result);
    }
    else{
        printf("-1");
    }
}