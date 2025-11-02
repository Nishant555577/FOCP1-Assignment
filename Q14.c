#include<stdio.h>
int main(){

int num,a=0;
printf("enter the number of terms in array : ");
scanf("%d",&num);
int number[num];
for(int i=0;i<num;i++){
    printf("enter score ");
    scanf("%d",&number[i]);
}
for (int i=0;i<num;i++) {
    for(int j=2;j<num;j++)
        if (number[i] % i == 0){
            a++;
        }}
printf("prime terms are %d",--a);
    return 0;
}
