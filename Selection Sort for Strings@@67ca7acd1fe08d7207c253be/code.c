void selectionSort( char arr[][100],int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                char temp[100]=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void printArray( char arr[][100], int n)
{
    for(int j=0;j<n;j++)
    {
        printf("%s ",arr[j]);
    }
}