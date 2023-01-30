#include<stdio.h>
int factorial(int);
int main()
{
int num;
printf("enter number");
scanf("%d",&num);
int res=factorial(num);
printf("%d",res);
return 0;
}
int factorial(int num){
if(num==0||num==1)
return 1;
else
return num*factorial(num-1);
}

