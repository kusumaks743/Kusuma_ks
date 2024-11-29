#include <stdio.h>
struct student {
    char name[50];
    char gender[50];
    char department[50];
    char college [100];
    int age;
};
int main(){
    struct student s1;
    
    printf("enter name:");
    scanf("%s",s1.name);
    printf("enter gender:");
    scanf("%s",&s1.gender);
    printf("enter department ");
    scanf("%s",&s1.department);
    printf("enter college :");
    scanf("%s",&s1.college);
    printf("enter age:");
    scanf("%d",&s1.age);
    printf("\nstudent details\n");
    printf("Name:%s\nGender:%s\ndepartment :%s\nCollege name:%s\nage name:%d\n",s1.name,s1.gender,s1.department ,s1.college,s1.age);
}
