#include <stdio.h>
#include <math.h>
//Define the Circle structure
struct Circle {
	double radius;
}; 
//Function prototypes
int calculateArea(struct Circle c);
int calculatePerimeter(struct Circle c);

int main() {
	//Declare two Circle variables
	struct Circle circle1, circle2;
	//Initialize the radii of the circles
	printf("Enter the radius of the first circle: ");
	scanf("%lf", &circle1.radius);
	printf("Enter the radius of the second circle: ");
	scanf("%lf", &circle2.radius);
	
	//Calculate the area and perimeter of the first circle
	double area1 = calculateArea(circle1);
	double perimeter1 = calculatePerimeter(circle1);
	
	//Calculate the area and perimeter of the second circle
	double area2 = calculateArea(circle2);
	double perimeter2 = calculatePerimeter(circle2);
	
	//Display the results
	printf("Circle 1 - Radius: %.2lf\n", circle1.radius);
	printf("Area: %.2lf\n", area2);
	printf("perimeter: %.2lf\n", perimeter2);
	
	return 0;
}
//Function to calculate the area of a circle
int calculateArea(struct Circle c) {
	return M_PI * c.radius * c.radius;
}
//Function to calculate the perimeter of a circle 
int calculatePerimeter(struct Circle c) {
	return 2 * M_PI * c.radius;
}
