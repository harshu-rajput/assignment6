#include<stdio.h>
int main(){
int x,rem=0,rev=0;
printf("enter the no : ");
scanf("%d",&x);


while(x!=0){
        rem=x%10;
        rev=rev*10+ rem;
        x=x/10;

}
printf("reverse no is %d",rev);
return 0;
}