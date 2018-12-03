#include <stdio.h>
/*‚±‚ñ‚É‚Â‚*/
#define sw(x,y) (x+=x,y=x-y,x-=y)

int main(void){  
    int x,y;

    x=3;
    y=5;
    printf("x=%d\n",x); 
    sw(x,y);
    printf("x=%d\n",x);
    return 0;
}
