#include <stdio.h>
struct Address {
    char city[50];
    int pin;
};
struct Person{
    char name[50];
    struct Address a;
};
int main(){
    struct Person p;
    printf("enter name");
    scanf("%s",p.name);
    printf("enter city");
    scanf("%s",p.a.city);
    printf("enter pin");
    scanf("%d",p.a.pin);
    printf("\nPerson details\n");
    printf("name:%s\ncity:%s\npin:%d\n",p.name,p.a.city,p.a.city);
    
}
