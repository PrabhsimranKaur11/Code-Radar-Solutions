char selectionSort(char arr[],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
char printArray(char arr[], int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%c ",arr[j]);
    }
}