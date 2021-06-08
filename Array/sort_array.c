
// Sorted array
#include <stdio.h>

int main(){
    int arr[100];
    int i,j,temp,n;
    printf("Enter array size :");
    scanf("%d",&n);
    printf("Enter Number :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Original array is :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if (arr[i]>arr[j]){
            temp =arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
    printf("\nSorted array is :");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}