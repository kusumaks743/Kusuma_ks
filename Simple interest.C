#include<stdio.h>
int main(){
  float p,n,r,interest;
  printf("enter p,n,r");
  scanf("%f%f%f",&p,&n,&r);
interest=(p*n*r/100);
  printf("interest=%2f\n",interest);
}
