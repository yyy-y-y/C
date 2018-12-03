#include<stdio.h>
#define number 10

int main(void){
    int i,j;
  
    for(i=1;i<=number;i++){
        for(j=1;j<=number;j++){
            
        if(i==1 && j==1){
            printf("   ");
        }
        else if(i==2){
            printf("---");
        }
        else if(i==1&&j>=3){
            printf("%3d",j-2);
        }
        else if(j==2){
            printf("|");
        }
        else if(j==1&&i>=3){
            printf("%3d",i-2);
        }
        else{
            printf("%3d",(i-2)*(j-2));
        }
        }
        printf("\n");
    }
    return 0;
}