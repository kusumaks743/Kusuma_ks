#include <stdio.h>
struct Employee{
    char name[50];
    int id;
    float Salary;
    float averageSalary;
};
int main(){
    int n,i;
   float totalSalary=0.0,averageSalary;
    printf("enter the number of employees");
    scanf("%d",&n);
    struct Employee employees[n];
    for(i=0;i<n;i++){
    printf("\nenter details for employee%d:\n",i+1);
    printf("Name:");
     scanf("%[^\n]",employees[i].name);
        printf("id:");
        scanf("%d",&employees[i].id);
        printf("Salary:");
     scanf("%f",&employees[i].Salary);
        totalSalary+=employees[i].Salary;
    }
    averageSalary=totalSalary;
    printf("\nAverageSalary ofemployees:%.2f\n",averageSalary);
}
