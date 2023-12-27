/*#include <stdio.h>

int main() {
    int n1,prime,i,j,k;

    printf("Enter the number: ");
    scanf("%d",&n1);


    printf("The prime factors are: ");
    for (i = 1; i <= n1; i++) {
        while (n1 % i == 0) {
            printf("%d ", i);
            n1 = n1 / i;
        }
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n1, i, lastFactor = 0;

    printf("Enter the number: ");
    scanf("%d", &n1);

    printf("The prime factors are: 1 ");
    for (i = 2; i <= n1; i++) {
        while (n1 % i == 0) {
            if (lastFactor != i) {
                printf("%d ", i);
                lastFactor = i;
            }
            n1 = n1 / i;
        }
    }

    return 0;
}*/
/*#include <stdio.h>

int main() {
    int n1, i;

    printf("Enter the number: ");
    scanf("%d", &n1);

    printf("The prime factors are: 1 ");
    
    for(i=2; i<=n1;i++) {
        if(n1%i==0){
            while(n1%i==0){
                n1/=i;
            }
            printf("%d ",i);
        }
    }

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int n1, num, i,sum=1;

    printf("Enter the number: ");
    scanf("%d", &num);
    
    n1=num;
    for(i=2; i<=n1;i++) {
        if(n1%i==0){
            while(n1%i==0){
                n1/=i;
            }
            sum+=i;
        }
    }

    if(sum>(num/2)) printf("%d is DWARF",num);
    else printf("%d is NOT DWARF",num);


    return 0;
}*/

#include <stdio.h>

int main() {
    int n1,num,sum=1,i,j=0,k,f[30];

    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(i=2; i<num;i++) {
        if(num%i==0){
            f[j]=i;
            sum+=i;
            j++;
        }
    }

    printf("Factors are: 1 ");
    for(k=0;k<j;k++){
        printf("%d ",f[k]);
    }

    printf("\nSum of its factor: 1 + ");
    for(k=0;k<j-1;k++){
        printf("%d + ",f[k]);
    }
    printf("%d = %d\n",f[k],sum);
    printf("Half of the number: %d/2 = %.2f\n",num,num/2.0);
    if(sum>(num/2)) printf("%d is DWARF",num);
    else printf("%d is NOT DWARF",num);


    return 0;
}