#include <stdio.h>
int main()
{
    int a,b,n,k;
    int temp1,temp2,temp3;
    scanf("%d%d",&a,&b);
    if(a>b){
        temp3=a;
        a=b;
        b=temp3;
    }
    while(1){
        n=b/a;
        temp1=a;
        temp2=b;
        a=temp2%temp1;
        b=temp1;
        printf("%d = %d*%d+%d\n",temp2,temp1,n,a);
        if(a==0){
            printf("Answer is %d\n",temp1);
            break;
        }
    }
    return 0;
}
