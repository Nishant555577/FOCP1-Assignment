#include<stdio.h>
int main(){

int num,largest=0;
printf("enter the number of scores : ");
scanf("%d",&num);
int score[num];
for(int i=0;i<num;i++){
    printf("enter score ");
    scanf("%d",&score[i]);
}
for(int i=0;i<num;i++){
   if(score[i]>largest){
    largest=score[i];
   }
}printf("largest is %d\n",largest);
for(int i=0;i<num;i++){
   if(score[i]<largest){
    largest=score[i];  
   }}
   int smallest=largest;
   printf("smallest is %d",smallest);


    return 0;
}
