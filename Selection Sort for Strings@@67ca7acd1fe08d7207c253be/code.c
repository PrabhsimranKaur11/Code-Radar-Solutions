void selectionSort(char[100] arr[],int n)
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
void printArray(char[100] arr[], int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%s ",arr[j]);
    }
}