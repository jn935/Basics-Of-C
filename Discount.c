#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void) 
{double price,discount;
	int y,choice;
	printf("Enter  price:");	
	scanf("%lf", &price);
	printf("are you a student?");
	printf("1.Yes");
    printf("2.No");
    
	printf("\nYour choice :? ");
   scanf("%d",&choice);
   switch(choice){
   
    {
      
      case 1:
      	if (price > 500)
  	{
  			discount=0.20*price;

		   	
  	} 
  	else 
  	{
  			discount=price*0.10;
			  	
  	}price = price - discount;
	printf("\n you are a student \nprice =   %lf",price);
	break;
}
    case 2:
	 if(price>600)	{
	 		
	 		discount=0.15*price;
		 }
		 else{
		 	discount=0;
		 }price = price - discount;
	printf("\n You are not a student \nprice =   %lf",price);
	break;
              
      
      case 3:
            exit(0); //Terminates program execution
   }
 }
  getch();
