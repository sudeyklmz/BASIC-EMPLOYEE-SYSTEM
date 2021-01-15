/*Write a struct that has a member that is the name of a business department: HR, Sales, Research, Software, and Executive (use enums for the 4 departments). 
A second member that is an annual salary as an int. A third member that is a social security number(unsigned). 
Generate 10 employees with different social security numbers. Invent a salary generator for each department
(use some base salary for the department and add in a randomly generated offset).  Print out the 10 employees and their values to the screen-one line at a time.*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>


typedef enum department{HR=1,sales,research,software,executive}department;

struct employee{
    department d;
    int salary;
    unsigned security_number;
}employee1,employee2,employee3,employee4,employee5,employee6,employee7,employee8,employee9,employee10;

int main()
{
	srand(time(NULL));
	int base_salary=1000;
	int offset;
	offset=rand()%500;
	struct employee employee1={HR,base_salary+offset,456214};
    struct employee employee2={sales,base_salary+offset,456328};
	struct employee employee3={research,base_salary+offset,456654};
	struct employee employee4={software,base_salary+offset,456894};
	struct employee employee5={executive,base_salary+offset,456752};
	struct employee employee6={HR,base_salary+offset,456365};
	struct employee employee7={sales,base_salary+offset,456412};
	struct employee employee8={research,base_salary+offset,4562998};
	struct employee employee9={software,base_salary+offset,456447};
	struct employee employee10={executive,base_salary+offset,456123};
	int i=1;
	
	for(i;i<11;i++)
	{
    	if(i==1)
		{
			printf("Employee 1 :\ndepartment:%d salary:%d security number:%d\n",employee1.d,employee1.salary,employee1.security_number);
			
		}
		else if(i==2)
		{		
			printf("Employee 2 :\ndepartment:%d salary:%d security number:%d\n",employee2.d,employee2.salary,employee2.security_number);
        }
        else if(i==3)
		{		
			printf("Employee 3 :\ndepartment:%d salary:%d security number:%d\n",employee3.d,employee3.salary,employee3.security_number);
        }
        else if(i==4)
		{		
			printf("Employee 4 :\ndepartment:%d salary:%d security number:%d\n",employee4.d,employee4.salary,employee4.security_number);
        }
        else if(i==5)
		{		
			printf("Employee 5 :\ndepartment:%d salary:%d security number:%d\n",employee5.d,employee5.salary,employee5.security_number);
        }
        else if(i==6)
		{		
			printf("Employee 6 :\ndepartment:%d salary:%d security number:%d\n",employee6.d,employee6.salary,employee6.security_number);
        }
        else if(i==7)
		{		
			printf("Employee 7 :\ndepartment:%d salary:%d security number:%d\n",employee7.d,employee7.salary,employee7.security_number);
        }
        else if(i==8)
		{		
			printf("Employee 8 :\ndepartment:%d salary:%d security number:%d\n",employee8.d,employee8.salary,employee8.security_number);
        }
        else if(i==9)
		{		
			printf("Employee 9 :\ndepartment:%d salary:%d security number:%d\n",employee9.d,employee9.salary,employee9.security_number);
        }
        else if(i==10)
		{		
			printf("Employee 10 :\ndepartment:%d salary:%d security number:%d\n",employee10.d,employee10.salary,employee10.security_number);
        }
        else{
	        printf("There is not a employee with that name.");}
       
	}
	return 0;

}
