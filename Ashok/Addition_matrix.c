int main()
{
    int a[2][3]={{1,2,3},{1,2,3}};
     int b[2][3]={{1,2,3},{1,2,3}};
     int i,j,c[2][3];
     for(i=0;i<2;i++)
     {
         for(j=0;j<3;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
             printf("\t %d",c[i][j]);
             
         }
         printf("\n");
     }
