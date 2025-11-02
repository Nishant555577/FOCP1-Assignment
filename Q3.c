#include<stdio.h>
int main(){

int xcod,ycod;
printf("enter the x coordinate : ");
scanf("%d",&xcod);
printf("enter the y coordinate : ");
scanf("%d",&ycod);

if(xcod>0 && ycod>0){
    printf("its in 1st quad");
}else if(xcod>0 && ycod<0){
    printf("its in 2nd quad");
}else if(xcod<0 && ycod>0){
    printf("its in 3rd quad");
}else if(xcod<0 && ycod<0){
    printf("its in  4th quad");
}else{
    printf("point is not in any quad");}

    return 0;
}
