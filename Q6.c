#include<stdio.h>
#include<math.h>
int main(){

    int dec,bin,rem,deci,final=0;
    printf("enter the decimal number : ");
    scanf("%d",&dec);

    for(int i=dec;i>0;i=i/2){
rem=i%2;
printf("%d",rem);

    }printf("\n");
int stra=0;
    printf("enter the binary number : ");
    scanf("%d",&bin);
     int j=0,read;
    for(int i=bin;i>0;i=i/10){
        j++;
read=i%10;
stra=stra*10+read;
    }
    for(int i=stra;i>0;i=i/10){
        deci=i%10;
        final=deci*pow(2,--j)+final;
       
    }printf("%d",final);

    return 0;
}
