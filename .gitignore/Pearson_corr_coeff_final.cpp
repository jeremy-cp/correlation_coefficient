#include <stdio.h>
#include <math.h>
#include <string>

double getCoeff(int x1, int x2, int x3, int y1, int y2, int y3); // Pearson's correlation coefficient

																 // Do not modify the main function
int main() {
	// Declarations
	int x1, x2, x3, y1, y2, y3;
	double coeff;

	//printf("please work");

	// Reads inputs
	scanf("(%d %d %d) (%d %d %d)", &x1, &x2, &x3, &y1, &y2, &y3);

	printf("y1: %d\n\n", y1);

	// Computes coefficient
	coeff = getCoeff(x1, x2, x3, y1, y2, y3);

	// Displays output
	printf("%.4lf", coeff);

	return 0;
}

double getCoeff(int x1, int x2, int x3, int y1, int y2, int y3) {

	///pre-calculations

	//define sample mean x, sampleMean_x
	double sampleMean_x;

	printf("y1: %d\n\n", y1);

	sampleMean_x = ((double)x1 + (double)x2 + (double)x3) / 3;

	printf("Mean X: %lf\n", sampleMean_x);

	//define sample mean y, sampleMean_y
	double sampleMean_y;

	sampleMean_y = ((double)y1 + (double)y2 + (double)y3) / 3;

	printf("Mean Y: %lf\n\n", sampleMean_y);

	///Numerator

	//Sum of (sample x - mean x) * (sample y - mean x) to the nth
	double sum_xy;
	double numerator;

	//n=1
	sum_xy = (((double)x1 - sampleMean_x) * ((double)y1 - sampleMean_y));

	printf("Sum xy 1: %lf\n", sum_xy);

	//n=2
	sum_xy = sum_xy + (((double)x2 - sampleMean_x) * ((double)y2 - sampleMean_y));

	printf("Sum xy 2: %lf\n", sum_xy);

	//n=3
	sum_xy = sum_xy + (((double)x3 - sampleMean_x) * ((double)y3 - sampleMean_y));

	printf("Sum xy 3: %lf\n\n", sum_xy);

	numerator = sum_xy;

	printf("numerator: %lf\n", numerator);

	///Denominator

	//sqrt of the sum of xi - sampleMean_x squared
	double sum_x_square;
	double root_x;

	//n=1
	sum_x_square = ((double)x1 - sampleMean_x) * ((double)x1 - sampleMean_x);

	//n=2
	sum_x_square = sum_x_square + ((double)x2 - sampleMean_x) * ((double)x2 - sampleMean_x);

	//n=3
	sum_x_square = sum_x_square + ((double)x3 - sampleMean_x) * ((double)x3 - sampleMean_x);

	//sqrt of sum_x_square
	root_x = sqrt(sum_x_square);

	printf("root x: %lf\n", root_x);

	//sqrt of the sum of yi - sampleMean_y squared
	double sum_y_square;
	double root_y;

	//n=1
	sum_y_square = ((double)y1 - sampleMean_y) * ((double)y1 - sampleMean_y);

	//n=2
	sum_y_square = sum_y_square + ((double)y2 - sampleMean_y) * ((double)y2 - sampleMean_y);

	//n=3
	sum_y_square = sum_y_square + ((double)y3 - sampleMean_y) * ((double)y3 - sampleMean_y);

	//sqrt of sum_y_square
	root_y = sqrt(sum_y_square);

	printf("root y: %lf\n\n", root_y);

	//multiply root_x and root_y define as denominator
	double denominator;

	denominator = root_x * root_y;

	///Final
	double answer;

	answer = numerator / denominator;

	printf("Answer ");

	return answer;

}
