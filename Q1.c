#include<stdio.h>
#include<math.h>
int main(){

    int num;
    int sum=0,inte;
    int j=0;
    printf("enter the number : ");
    scanf("%d",&num);

    for(int i=num;i>0;i=i/10){
        
        j++;
    }

for(int i=num;i>0;i=i/10){
    inte=i%10;

    sum=sum+pow(inte,j);
}printf("%d",sum);
    return 0;
}
