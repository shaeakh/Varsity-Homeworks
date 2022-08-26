#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *file = fopen("file.txt","r"); // there were 5 numbers
    int x,sum=0,count=0;                // 33 66 99 88 14
    while((fscanf(file,"%d",&x))!=EOF){ // sum = 300, avg = 60
            sum=sum+x;
            count++;
    }
    double avg = (sum*1.0)/(count*1.0);
    printf("%d %d %lf",sum,count,avg);
    return 0;
}
