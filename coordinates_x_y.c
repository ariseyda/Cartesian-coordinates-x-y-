#include<stdio.h>
#include<math.h>

//Define cartesian structure to work with points in two-dimensional plane. Define type for the structure. Properties of cartesian structure: 
//- x stores real valued x coordinate of the point. 
//- y stores real values y coordinate of the point. 
//Define following functions: 
//- cprint prints a cartesian on console in form 3x+4y. 
//- cscan prompts user to enter coordinates of cartesian point. 
//- csum computes sum of two cartesian and returns result. 
//- csub computes subtract of one cartesian from another. 
//Test your function in a program that receives two points in cartesian from user, computes sum and substraction, and prints results on console in cartesian form. 

struct cartesian{
	
	int x;
	int y;
	
};
int main(){
	
	struct cartesian c;
	struct cartesian c2;
	int i,j;
	printf("Value x of the point one:");
	scanf("%d",&c.x);
	printf("Value y of the point one:");
	scanf("%d",&c.y);
    printf("Point:(%d,%d)",c.x,c.y);
	
	printf("\nValue x of the point two:");
	scanf("%d",&c2.x);
	printf("Value y of the point two:");
	scanf("%d",&c2.y);
    printf("Point:(%d,%d)",c2.x,c2.y);
    
	int result=3*c.x+4*c.y;
	int result2=3*c2.x+4*c2.y;
	
	printf("\nPoint 1: %dx+%dy=%d",3,4,result);
	printf("\nPoint 1: %dx+%dy=%d",3,4,result2);
	
	int sum_x=c.x+c2.x;
	int sum_y=c.y+c2.y;
	
	printf("\nSum of two cartesian:(%d,%d)",sum_x,sum_y);
	
	int sbt_x=c.x-c2.x;
	int sbt_y=c.y-c2.y;
	
	printf("\nSubtract of two cartesian:(%d,%d)",sbt_x,sbt_y);
	
	

	
	return 0;
}
