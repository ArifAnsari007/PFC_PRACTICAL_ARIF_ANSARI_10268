#include<stdio.h>
int main (){
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);

    int arr[n];
    for(int i=00; i<n; i++){
        printf("Enter Element :");
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
   for(int i=1; i<n; i++){
    if(arr[i]>max) max=arr[i];
    if(arr[i]<min) min=arr[i];
   }
   printf("MAX Array: %d\n",max);
   printf("MIN Array: %d",min);
   return 0;
}
// Enter size of array :4
// Enter Element :1
// Enter Element :2
// Enter Element :3
// Enter Element :4
// MAX Array: 4
// MIN Array: 1