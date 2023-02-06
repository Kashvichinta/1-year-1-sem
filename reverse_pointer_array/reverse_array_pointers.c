#include<stdio.h>
int main(){
int a[50],i,n,*ptr;
ptr=a;
printf("enter size of array:");
scanf("%d",&n);
printf("enter %d elements of array:",n);
for(i=0;i<n;i++){
scanf("%d",ptr);
printf("%d\n",(*ptr));
ptr++;
}
ptr=&a[n-1];
printf("elememts of array in reverse is:\n");
for(i=n-1;i>=0;i--){
printf("%d\n",*(ptr));
ptr--;
}
return 0;
}
