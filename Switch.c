#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main() {
 int choice, num, i;
 
 float Basic,TA, HRA, DA, Total_Salary;
 while(1) {
   printf("1.Odd Even : \n");
   printf("2.Basic salary : \n");
   printf("\nYour choice :? ");
   scanf("%d",&choice);
   switch(choice) {
      
      case 1:
            printf("\nEnter Number:");
            scanf("%d",&num);
            if(num %2==0)
              printf("\n Even Number.\n");
            else
              printf("\nOdd Number.\n");
              break; //Takes control out of switch
     
	 case 2:
    
	 printf("\n Please Enter the Basic Salary of an Employee  :  ");
  	 scanf("%f", &Basic);
  	 
   {
  
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
	
  	break;
}
              
      
      case 4:
            exit(0); //Terminates program execution
   }
 }
  getch();
}
