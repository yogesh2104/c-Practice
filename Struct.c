#include <stdio.h>
#include <string.h>
/**
 //* logic
 * ! create structure. structure member is name,age salary.
 * ! read number of emp to use as index to store in structure by using for loop
 * ! make temp variable to store data
 * ? use the strcmp() method to compare string 
 //! syntax of strcmp == int strcmp(const char *leftStr, const char *rightStr)
*/
struct emp{
    char name[20];
    int age, salary;
};
struct emp arr[100], temp;
void main(){
    int i,j,no_of_emp;
    printf("Enter no of employees:\n");
    scanf("%d",&no_of_emp);
    // printf("%d",no_of_emp);
    printf("Enter emp information as name,age,salary\n");
    for(i=0;i<no_of_emp;i++){
        // scanf("%s %d %d",&arr[i].name,&arr[i].age,&arr[i].salary);
        printf("Enter %d employee details:\n",i+1);
        printf("Name:\n");
        scanf("%s",&arr[i].name);
        printf("Age:\n");
        scanf("%d",&arr[i].age);
        printf("Salary:\n");
        scanf("%d",&arr[i].salary);
    }
    printf("\nEmp_Name\tEmp_age\t\tEmp_salary\n");
    for(i=0;i<no_of_emp;i++){
        printf("%s\t\t%d\t\t%d\n\n",arr[i].name,arr[i].age,arr[i].salary);
    }
    for(i = 1; i<no_of_emp; i++){
        for(j=0;j<no_of_emp - i ;j++){
            if(strcmp(arr[j].name , arr[j+1].name) > 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Employee details sort by Name:\n");
    printf("\nEmp_Name\tEmp_age\t\tEmp_salary\n");
    for(i=0;i<no_of_emp;i++){
        printf("%s\t\t%d\t\t%d\n",arr[i].name,arr[i].age,arr[i].salary);
    }
     for(i = 1; i<no_of_emp; i++){
        for(j=0;j<no_of_emp - i ;j++){
            if(arr[j].age > arr[j+1].age){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Employee details sort by Age:\n");
    printf("\nEmp_Name\tEmp_age\t\tEmp_salary\n");
    for(i=0;i<no_of_emp;i++){
        printf("%s\t\t%d\t\t%d\n",arr[i].name,arr[i].age,arr[i].salary);
    }
}