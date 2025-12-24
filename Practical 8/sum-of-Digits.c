#include<stdio.h>
int sum(int n){
    int sum=0;
   while(n>0){
   sum+=n%10;
   n/=10;
   }
   return sum;
}
int main(){
    int a;
    printf("Enter number:");
    scanf("%d",&a);
    printf("Sum of Digits is %d",sum(a));
    return 0;
}

// output
// n=4123
// Sum of Digits is 10