#include <stdio.h> 
/* height and width of a rectangle in inches */
double width;          
double height;         

double area;           
double perimeter;      

int main() {
	height = 7.45;
	width = 5.66;

    perimeter = 2*(height + width);
	printf("Perimeter of the rectangle = %f inches\n", perimeter);
	
	area = height * width;
	printf("Area of the rectangle = %f square inches\n", area);

return(0);
}
