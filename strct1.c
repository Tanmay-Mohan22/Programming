#include <stdio.h>
  
struct employee { 
    int eno;
    char ename[30],dname[30];
    int age, phn_no; 
    int salary; 
}; 
  
 
void display(struct employee emp[20]) 
{ 
  int i;
    printf("Name\tAge\tPhone Number\tSalary\tENo\tDept\n"); 
    for (i = 0; i < 20; i++) { 
        printf("%s\t%d\t%d\t\t%d\t%d\t%s\n",emp[i].ename, emp[i].age,emp[i].phn_no,emp[i].salary,emp[i].eno,emp[i].dname); 
    } 
} 
  
 
int main() 
{ 
    int i; 
  
    struct employee emp[20]; 
    for(i=0; i<20; i++){
 
        printf("Employee %d:- \n",i+1);
      
        printf("Name: ");
        scanf("%s",emp[i].ename);
    
        printf("Age: ");
        scanf("%d",&emp[i].age);
       
        printf("Phone_Number: ");
        scanf("%d",&emp[i].phn_no);
        
        printf("Salary: ");
        scanf("%d",&emp[i].salary);
        
        printf("Eno:");
        scanf("%d",&emp[i].eno);
        printf("Dept:");
        scanf("%s",&emp[i].dname);
 
    }

    display(emp); 
  
    return 0; 
}
