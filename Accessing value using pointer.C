#include <stdio.h>
int main(){
    int x=10;
    int *ptr=&x;
    printf("address of x:%d\n",ptr);
    printf("value of x:%d\n",*ptr);
    
}
