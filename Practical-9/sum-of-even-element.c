#include<stdio.h>
int main(){
    int n;
    printf("Enter Size of array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter Element : ");
        scanf("%d",&arr[i]);
    }
    int sum=0;\
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            sum+=arr[i];
        }
    }
    printf("Sum of even Element : %d",sum);
    return 0;
}
// Enter Size of array :10
// Enter Element : 1
// Enter Element : 2
// Enter Element : 3
// Enter Element : 4
// Enter Element : 5
// Enter Element : 6
// Enter Element : 7
// Enter Element : 8 
// Enter Element : 9
// Enter Element : 10
// Sum of even Element : 30