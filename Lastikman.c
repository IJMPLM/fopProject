#include <stdio.h>

int main (){
    int rCnt,i,w,h,st,sk,tp=0;

    printf("Enter the number of robots: ");
    scanf("%d", &rCnt);

    for(i=0;i<rCnt;i++){
        printf("Enter the weight, height, strength, and skills of robot %d: ", i+1);
        scanf("%d %d %d %d",&w,&h,&st,&sk);
        tp=((st+sk)*(h-w))+tp;
    }

    printf("The total power of the robots: %d",tp);

    return 0;
}