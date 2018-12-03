<<<<<<< HEAD
/*指定した日の次の日を表示する*/
#include <stdio.h>
void nextday(int *a,int *b,int *c){
    switch(*b){
        case 1:{  if(*c>=31) {++*b; *c=1;} else {++*c;}  } break;
        case 2:{  if( ( (*a%4==0) && (*a%100!=0) ) ||(*a%400==0) ){
                        if(*c==29){ ++*b; *c=1; }
                        else{ ++*c; }    
                }
                  else{
                        if(*c==28){ ++*b; *c=1; }
                        else   { ++*c; }  
                }   
                    
                } break;
        case 3:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 4:{  if(*c>=30) {++*b; *c=1;}else ++*c;  } break;
        case 5:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 6:{  if(*c>=30) {++*b; *c=1;}else ++*c;  } break;
        case 7:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 8:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 9:{  if(*c>=30) {++*b; *c=1;}else ++*c;  } break;
        case 10:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 11:{  if(*c>=30) {++*b; *c=1;} else ++*c; } break;
        case 12:{  if(*c>=31) {++*a; *b=1; *c=1;}else ++*c;  } break;
     }
     printf("%dy %dm %dd\n",*a,*b,*c);
}


int main(void){
    int y,m,d;

    printf("year ="); scanf("%d",&y);
    printf("month =");scanf("%d",&m);
    printf("day =");scanf("%d",&d);

    nextday(&y,&m,&d);


    return 0;

=======
/*指定した日の次の日を表示する*/
#include <stdio.h>
void nextday(int *a,int *b,int *c){
    switch(*b){
        case 1:{  if(*c>=31) {++*b; *c=1;} else {++*c;}  } break;
        case 2:{  if( ( (*a%4==0) && (*a%100!=0) ) ||(*a%400==0) ){
                        if(*c==29){ ++*b; *c=1; }
                        else{ ++*c; }    
                }
                  else{
                        if(*c==28){ ++*b; *c=1; }
                        else   { ++*c; }  
                }   
                    
                } break;
        case 3:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 4:{  if(*c>=30) {++*b; *c=1;}else ++*c;  } break;
        case 5:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 6:{  if(*c>=30) {++*b; *c=1;}else ++*c;  } break;
        case 7:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 8:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 9:{  if(*c>=30) {++*b; *c=1;}else ++*c;  } break;
        case 10:{  if(*c>=31) {++*b; *c=1;}else ++*c;  } break;
        case 11:{  if(*c>=30) {++*b; *c=1;} else ++*c; } break;
        case 12:{  if(*c>=31) {++*a; *b=1; *c=1;}else ++*c;  } break;
     }
     printf("%dy %dm %dd\n",*a,*b,*c);
}


int main(void){
    int y,m,d;

    printf("year ="); scanf("%d",&y);
    printf("month =");scanf("%d",&m);
    printf("day =");scanf("%d",&d);

    nextday(&y,&m,&d);


    return 0;

>>>>>>> 975b22186bdc238a7de8ff63b25de23d41f99364
}