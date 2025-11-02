#include<stdio.h>
int main(){

int num;
printf("enter the number of students : ");
scanf("%d",&num);
int marks[num];
for(int i=0;i<num;i++){
    printf("enter marks of student %d : ",++i);
    --i;
    scanf("%d",&marks[i]);
}int j=0;
for(int i=0;i<num;i++){
    if(marks[i]==99){
        printf("student %d got 99 marks\n",++i);
        i--;
        j++;
    }
    
}printf("%d students get 99 marks ",j);


    return 0;
}
