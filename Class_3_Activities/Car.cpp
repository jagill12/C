#include <stdio.h>
//Define the Car structure
struct Car {
	int carID;
	char model [50];
	double rentalRatePerDay;
};

//Function prototype
int calculateTotalRentalCost(struct Car car, int days);

int main() {
	//Declare an array of three Car structures 
	struct Car cars[3];
	int days;
	//Input data for three cars
	for (int i = 0; i < 3; i++) {
		printf("Enter detals for ca %d;\n", i + 1);
		printf("Car ID: ");
		scanf("%d", &cars[i].carID);
		printf("Model: ");
		scanf("%s", cars[i].model);
		printf("Rental rate per day: ");
		scanf("%lf", &cars[i].rentalRatePerDay);
	}
	//Input the number of rental days
	printf("Enter the number of rental days:");
	scanf("%d", &days);
	
	for (int i = 0; i < 3; i++) {
		double totalCost = calculateTotalRentalCost(cars[i], days);
		printf("Car %d - ID: %d, Model: %s\n", i + 1, cars[i].carID, cars[i].model);
		printf("Rental rate per day: %.2lf\n", cars[i].rentalRatePerDay);
		printf("Total rental cost for %d days: %.2lf\n", days, totalCost);
		printf("\n");
	}
	return 0;
}
//Function to caclulate the total rental cost for a car
int calculateTotalRentalCost(struct Car car, int days) {
	return car.rentalRatePerDay * days;
}
