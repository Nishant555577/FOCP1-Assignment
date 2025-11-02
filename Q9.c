#include<stdio.h>
int main(){

int num;
printf("enter the number of scores : ");
scanf("%d",&num);
int score[num];
for(int i=0;i<num;i++){
    printf("enter score ");
    scanf("%d",&score[i]);
}
for(int i=0;i<num;i++){
    if(score[i]==99){
        printf("first occurnce is at position %d",++i);
        break;
    }
    
}


    return 0;
}
