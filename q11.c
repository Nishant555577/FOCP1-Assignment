#include<stdio.h>
int main(){

int num,a=0,b=0;
printf("enter the number of scores : ");
scanf("%d",&num);
int score[num];
int even_arr[num];
int odd_arr[num];

for(int i=0;i<num;i++){
    printf("enter score ");
    scanf("%d",&score[i]);
}
for(int i=0;i<num;i++){
    if(score[i]%2==0){
        printf("score %d is even \n",++i);
        --i;
    
        even_arr[a]=score[i];
        a++;

    }else{
         printf("score %d is odd \n",++i);
        --i;
         odd_arr[a]=score[i];
        b++;
    }
}
    return 0;
}
