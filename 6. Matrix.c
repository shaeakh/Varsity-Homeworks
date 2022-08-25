#include<stdio.h>

int main()

{
   int a[2][3],b[3][2],res[2][2];

   for(int i=0 ; i<2 ; i++){
      for(int j=0 ; j<3 ; j++){
         scanf("%d",&a[i][j]);
      }
   }
   for(int i=0 ; i<3 ; i++){
      for(int j=0 ; j<2 ; j++){
         scanf("%d",&b[i][j]);
      }
   }
   
   for(int i=0 ; i<2 ; i++){
      for(int j=0 ; j<2 ; j++){
         res[i][j]=0;

         for(int k=0 ; k<3 ; k++){
            res[i][j]+=a[i][k]*b[k][j];
         }
      }
   }
   for(int i=0 ; i<2 ; i++){
      for(int j=0 ; j<2 ; j++){
         printf("%d ",res[i][j]);
      }
      printf("\n");
   }
   
   
}
