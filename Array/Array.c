#include <stdio.h>
 int main(){
	 int i,size,search,find=0,time=1;
     int arr[20];
     printf("Enter size of array between 1 to 20 :");
     scanf("%d",&size);
     printf("ENTER NUMBER:");
     for(i=0;i<size;i++){
         scanf("%d",&arr[i]);
     }
     printf("enter number to search:");
     scanf("%d",&search);
     for(i=0;i<size;i++){
         if(arr[i]==search){
             find=1;
             time++;
             break;
         }
    }
     if(find == 1){
         printf("%d find at position %d and %d",search,i+1,time);
     }
     else{
         printf("%d is not find",search);
     }
}
