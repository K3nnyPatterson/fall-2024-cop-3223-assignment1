#include <stdio.h>
#include <math.h>

// Calculate absolute difference between two values
double calculateWidth(double x1, double x2) {
    return fabs(x2 - x1);
}

double calculateHeight(double y1, double y2) {
    return fabs(y2 - y1);
}

// Calculate distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Calculate area of rectangle
double calculateArea(double width, double height) {
    return width * height;
}

// Calculate perimeter of rectangle
double calculatePerimeter(double width, double height) {
    return 2 * (width + height);
}

int main() {
    double x1, y1, x2, y2;

    // Get user input for coordinates
    printf("Enter coordinates for point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter coordinates for point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate and store results
    double width = calculateWidth(x1, x2);
    double height = calculateHeight(y1, y2);
    double distance = calculateDistance(x1, y1, x2, y2);
    double area = calculateArea(width, height);
    double perimeter = calculatePerimeter(width, height);

    // Print results
    printf("Width: %.2lf\n", width);
    printf("Height: %.2lf\n", height);
    printf("Distance: %.2lf\n", distance);
    printf("Area: %.2lf\n", area);
    printf("Perimeter: %.2lf\n", perimeter);

    return 0;
}
