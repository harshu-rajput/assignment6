#include<stdio.h>
int main(){

int n1,n2,i,flag=0;
printf("enter the first no : ");
scanf("%d",&n1);
printf("enter the second no : ");
scanf("%d",&n2);

for(i=1;i<=(n1*n2);i++){
    if((i%n1==0) && (i%n2==0)){
        printf("lcm of %d and %d is %d",n1,n2,i);
        break;
    }
}

return 0;
}