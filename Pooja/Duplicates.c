    *Program to remove all duplicates in a single dimensional array*/
    int i,j,k;
    int s=5;
    int a[10]={6,3,5,3,8};
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<s-1;k++)
                {
                    a[k]=a[k+1];
                }
                s--;
                j--;
            }
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d",a[i]);
    }


