#include<stdio.h>
void gcd(int,int);
int main(){
int a,b;
gcd(a,b);
return 0;
}
void gcd(int a,int b){
int gcd,min,i;
printf("enter values of a and b:");
scanf("%d %d",&a,&b);
min=(a<b)?a:b;
for(i=1;i<=min;i++){
if(a%i==0 && b%i==0)
gcd=i;
}
printf("gcd of given numbers is %d",gcd);
return;
}

