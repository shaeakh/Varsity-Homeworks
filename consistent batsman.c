#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct r_rate{
    double x;
};
int main()
{
    struct r_rate bm1[5]={101,0,20,65,73};
    struct r_rate bm2[5]={49,39,59,51,43};
    double mew1 = (bm1[0].x+bm1[1].x+bm1[2].x+bm1[3].x+bm1[4].x)/5;
    double mew2 = (bm2[0].x+bm2[1].x+bm2[2].x+bm2[3].x+bm2[4].x)/5;
    double n=0,x=0,sum1=0,sum2=0;
    for(int i=0;i<5;i++){
            n=bm1[i].x - mew1;
            x=n*n;
            sum1=sum1+x;

            n=bm2[i].x - mew2;
            x=n*n;
            sum2=sum2+x;
    }
    double sigma1 = sqrt( sum1/5 );
    double sample1 = sqrt( sum1/4 );
    double sigma2 = sqrt( sum2/5 );
    double sample2 = sqrt( sum2/4 );
    if(sigma1<sigma2){
        printf("Batman No 01 is the best player. Stanfard Deviation of his runs are %lf\n",sigma1);
        printf("Which is the lowest Stanford deviation.\nwhile the Stanfard Deviation of other player is %lf\n",sigma2);
    }
    else{
        printf("Batman No 02 is the best player. Stanfard Deviation of his runs are %lf\n",sigma2);
        printf("Which is the lowest Stanford deviation.\nwhile the Stanfard Deviation of other player is %lf\n",sigma1);
    }


    return 0;
}

