#include<stdio.h>
int main(){

int n,i,sum;
printf("enter the no : ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    if(i%2==1){
    sum=sum+i;
    }
} 
printf("sum is : %d",sum);
return 0;
}