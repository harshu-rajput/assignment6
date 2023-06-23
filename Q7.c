#include<stdio.h>
int main(){

int n,i,count;
printf("enter the no : ");
scanf("%d",&n);

for(count=0;n>0;n=n/10){
    count=count+1;
}
printf("total digit is : %d",count);
return 0;
}