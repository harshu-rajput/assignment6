#include<stdio.h>
int main(){
int n,i,sum=0;
printf("enter the no : ");
scanf("%d",&n);
i=1;
while(i<=n){
    sum=sum+i*i*i;
    i++;
}
printf("sum is : %d",sum);
return 0;
}