#include <stdio.h>
#include <math.h>

// Function to calculate the distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(pow(dx, 2) + pow(dy, 2));
}

// Function to calculate the area of a rectangle given two opposite corners
double calculateArea(double width, double height) {
    return width * height;
}

// Function to calculate the perimeter of a rectangle given two opposite corners
double calculatePerimeter(double width, double height) {
    return 2 * (width + height);
}

int main() {
    double x1, y1, x2, y2;

    // Input for the first point
    printf("Enter x1, y1: ");
    if (scanf("%lf, %lf", &x1, &y1) != 2) {
        printf("Invalid input for x1, y1.\n");
        return 1;
    }
    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);

    // Input for the second point
    printf("Enter x2, y2: ");
    if (scanf("%lf, %lf", &x2, &y2) != 2) {
        printf("Invalid input for x2, y2.\n");
        return 1;
    }
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);

    // Calculate the distance between the two points
    double distance = calculateDistance(x1, y1, x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    // Calculate the width and height of the rectangle (assuming the points are opposite corners)
    double width = fabs(x2 - x1);
    double height = fabs(y2 - y1);

    if (width == 0 || height == 0) {
        printf("The points do not form a valid rectangle.\n");
    } else {
        // Calculate and print the perimeter
        double perimeter = calculatePerimeter(width, height);
        printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);

        // Calculate and print the area
        double area = calculateArea(width, height);
        printf("The area of the city encompassed by your request is %.2f\n", area);

        // Print the width and height
        printf("The width of the city is %.2f\n", width);
        printf("The height of the city is %.2f\n", height);
    }

    return 0;
}
