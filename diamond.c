#include <stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(k=i;k<n-1;k++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            printf("*");
        }
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<n-1;i++){
        for(k=n-2-i;k<n-1;k++){
            printf(" ");
        }
        for(j=i;j<n-1;j++){
            printf("*");
        }
        for(j=i+1;j<n-1;j++){
            printf("*");
        }

        printf("\n");

    }




    return 0;
}
