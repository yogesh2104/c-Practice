
// 3D array

#include <stdio.h>

int main(){
    int i,j,k;
    int arr[2][2][3] = {{{1,2,3},{4,5,6}},
                        {{7,8,9},{10,11,12}}};
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<3;k++){
                printf("%d",arr[0][2][1]);
            }
        }
    }
    return 0;
}
