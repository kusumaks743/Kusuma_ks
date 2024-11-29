

#include <stdio.h>
#define PI 3.14159  // Define PI as a constant


double calculateCircleArea(double radius) {
    return PI * radius * radius;  
}

int main() {
    double radius, area;

    
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

  
    area = calculateCircleArea(radius);


    printf("The area of the circle with radius %.2f is %.2f.\n", radius, area);

    return 0;
}

