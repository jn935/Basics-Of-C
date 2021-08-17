#include<stdio.h>
//function to calculate area
int area(int a, int b) {
   int area = a * b;
   return area;
}
//function to calculate perimeter
int perimeter(int a, int b){
   int perimeter = 2*(a + b);
   return perimeter;
}
int main(){
	 int length;
	 int breadth;
	printf(" \n Enter length of a rectangle  :   ");
	scanf("%d",&length);
  
   	printf("\n  Enter breadth of a rectangle :   ");
	scanf("%d",&breadth);
   
   
   printf("area of rectangle is : %d\n",area(length,breadth));
   printf("perimeter of rectangle is : %d",perimeter(length, breadth));
   return 0;
}
