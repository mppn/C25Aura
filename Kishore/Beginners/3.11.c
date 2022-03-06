 #include<stdio.h>
  void main()
 {
       
       int i,j,n;
       int k;
       n=5;
       for(i=5;i>=1;i--)
        {
           for(j=1;j<=i;j++)
            {
              printf("%d",j);
            }
            printf("\n");
             for(k=5;k>=i;k--)
            {
                printf(" ");
            }    
        }
 }   
