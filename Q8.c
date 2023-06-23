#include<stdio.h>
int main(){

int n,i,flag=0;
printf("enter the no : ");
scanf("%d",&n);

for(i=2;i<n;i++){
    if(n%i==0){
        flag=1;
        break;
    } 
    }
    if(flag==0){
        printf("no is prime");
    }else{
         printf("no is not prime");
    }
return 0;
}