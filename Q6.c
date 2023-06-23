#include<stdio.h>
int main(){

int n,i,fact=1;
printf("enter the no : ");
scanf("%d",&n);

i=1;
while(i<=n){
    fact=fact*i;
    i++;
}
printf("factorail of %d is : %d",n,fact);

return 0;
}