#include <stdio.h>
struct Employee{
    char Name [50];
    int ID;
    float salary;
};
int main(){
    struct Employee employees[2];
    for(int i=0;i<2;i++){
    printf("enter details for Employee%d:\n",i+1);
    printf("Name:");
    scanf("%s",&employees[i].Name);
    printf("ID:");
    scanf("%d",&employees[i].ID);
    printf("salary");
    scanf("%f",&employees[i].salary);
    }
    printf("\nEmployee details");
    for(int i=0;i<2;i++){
        printf("Name:%s,ID:%d,salary:%.2f\n",employees[i].Name,employees[i].ID,employees[i].salary);
    }
    
}
