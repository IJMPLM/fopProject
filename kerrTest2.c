#include <stdio.h>

int DWARF(int num);

int main() {
    int n, numBool;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    numBool=DWARF(n);
    
    if(numBool==1) printf("%d is DWARF",n);
    else printf("%d is NOT DWARF",n);

    return 0;
}

int DWARF (int num){
    int sum=0,i,j=0,k,f[30];

    printf("Factors are: ");
        for(i=1; i<num;i++) {
        if(num%i==0){
            f[j]=i;
            sum+=i;
            printf("%d ",f[j]);
            j++;
        }
    }

    printf("\nSum of its factor: ");
    for(k=0;k<j-1;k++){
        printf("%d + ",f[k]);
    }
    printf("%d = %d\n",f[k],sum);
    printf("Half of the number: %d/2 = %.2f\n",num,num/2.0);

    if(sum>(num/2)) return 1;
    else return 0;
}