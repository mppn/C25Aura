#include <stdio.h>
void magicsquare(int n){
    int square[n][n];
    int i,j,k=0;
    i=n/2;
    j=n-1;
    for(int k=1;k<=n*n;){
        if(i==-1 && j==n)
        {
            j=n-2;
            i=0;
        }
        else{
            if(j==n)
              j=0;
            if(i<0)
              i=n-1;
        }
        if(square[i][j]){
            j -=2;
            i++;
            continue;
        }
        else
           square[i][j]=k++;
        j++;
        i--;
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++)
          printf("%d",square[i][j]);
      printf("\n");
    }
}
int main()
{
    int n=3;
    magicsquare(n);
}
