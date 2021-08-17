#include<stdio.h>
int main()
{
	float Basic,TA, HRA, DA, Total_Salary;
  	
	printf("\n Please Enter the Basic Salary of an Employee  :  ");
  	scanf("%f", &Basic);
  
  	if (Basic <= 5000)
  	{
  		HRA = (Basic * 25) / 100; // or HRA = Basic * (25 / 100)
		DA = (Basic * 10) / 100;
	    TA = (Basic * 20) / 100; 
		   	
  	} 
  	else 
  	{
  		HRA = (Basic * 30) / 100;
	  	DA = (Basic * 15) / 100;  
		TA = (Basic * 25) / 100;	
  	}
  	
	Total_Salary = Basic + HRA + DA +TA;
	printf("\n Gross Salary of this Employee  =  %.2f", Total_Salary); 
	
  	return 0;
}
