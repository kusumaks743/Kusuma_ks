#include<stdio.h>
int main(){
  int rows,cols;
  printf("enter the number of rows and columns");
  scanf("%d%d",&rows,&cols);
  int a[rows][cols],b[rows][cols],sum[rows][cols];
  printf("enter the elements of first matrix a:\n");
  for(int i=0;i<rows;i++){
  for(int j=0;j<cols;j++){
    scanf("%d",&a[i][j]);
  }
  }
  printf("enter the elements of matrix b:\n");
    for (int i=0;i<rows;i++){
      for( int j=0;j<cols;i++){
        scanf("%d",&b[i][j]);
      }
    }
  printf("resultent matrix:\n");
  for(int i=0;i<rows;i++){
    for(int j=0; j<cols;i++){
      printf("%d",sum[i][j]);
}
  }
