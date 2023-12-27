#include <stdio.h> 
int main()  
{  
    int s1, s2, s3; // side 1, side 2, side 3
  
    printf("Input length of the three sides of the triangle: ");
    scanf("%d%d%d", &s1, &s2, &s3);

    if(s1==s2 && s2==s3) {  
        printf("This is an Equilateral triangle.\n");  // Output for Equilateral
    }  else if(s1==s2 || s1==s3 || s2==s3) {  
        printf("This is an Isosceles triangle.\n");  // Output for Isosceles
    }  else {  
        printf("This is a Scalene triangle.\n");  // Output for Scalene
    }  

    return 0;  
} 