#include<stdio.h>

int main() {

    int a = 0, b = 1, c;
int num;
printf("enter the number of terms : ");
scanf("%d",&num);
    for (int i = 1;i <= num; i++) {
        printf("%d ", a);
        c = a + b; 
        a = b; 
        b = c; 
    }

    return 0;
}
 
