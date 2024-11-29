#include <stdio.h>

struct bookdetails{
    float  bookprice;
    char bookname[50];
    char bookauthor[50];
};

int main(){
    struct bookdetails a;
    printf("enter bookprice");
    scanf("%f",a.bookprice);
    printf("enter bookname");
    scanf("%s",a.bookname);
    printf("enter bookauthor");
    scanf("%s",a.bookauthor);
printf("bookprice:%.2f\nbookname:%s\nbookauthor:%s\n",a.bookprice,a.bookname,a.bookauthor);
}
