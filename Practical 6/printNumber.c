#include<stdio.h>
int main(){
  long long a,b;
  printf("Enter num a:");
    scanf("%lld",&a);
printf("Enter num b:");
    scanf("%lld",&b);
    for(long long i=a; i<=b; i++){
        printf("%lld\n",i);
    }
    return 0;
}
// Enter num a:1
// Enter num b:10;
//output:
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10