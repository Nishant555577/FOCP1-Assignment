#include<stdio.h>
int main(){

    int num,numb,num1,num2,largest=0;
    printf("enter the 1st number : ");
scanf("%d",&num1);
 printf("enter the 2nd number : ");
scanf("%d",&num2);

for(int i=0;i<=num1;i++){
    num=num1%i;
    numb=num2%i;
    if(num==0&&numb==0){
           if(largest<i){
            largest=i;
        }

}
}printf("%d",largest);


    return 0;
}
