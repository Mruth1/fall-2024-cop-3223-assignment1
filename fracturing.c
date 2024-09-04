//********************************************************
// fracturing.c
// Author: Marcus Ruth SEGMENT 9 of grading rubric
// UCFID : 5512520 SEGMENT 9 of grading rubric
// Date: 9/4/24
// Class: COP 3223, Professor Parra
// Purpose: fracturing and practicing DRY in the case of multiple functions
// command line. The main purpose of this assignment is to
// Input: POINTS x1 x2 y1 y2
//
// Output: calculates distance, perimeter, area, height, and width according to the points provided by the user.
// //********************************************************
#include <stdio.h>
#include <math.h> // needed for math calculations within some of the functions.
#define PI 3.14159 // stated in the instructions to define PI to this value.


double askForUserInput(){ // helper function
    double value; // sets each iteration of this function to the value specified by the user in each function.
    scanf("%lf", &value);
    return value; // returns to specified cord for user input in each function.
}
double calculateDistanceDiamater(){ // helper function
    printf("Please enter in X1 point: ");
    double pointX1 = askForUserInput();

    printf("Please enter in X2 point: ");
    double pointX2 = askForUserInput();

    printf("Please enter in Y1 point: ");
    double pointY1 = askForUserInput();

    printf("Please enter in Y2 point: ");
    double pointY2 = askForUserInput();

    printf("Point #1 : (%.2lf, %.2lf)\n", pointX1, pointY1);
    printf("Point #2 : (%.2lf, %.2lf)\n\n", pointX2, pointY2);

    double distanceDiameter = sqrt(pow(pointX2-pointX1,2)+ pow(pointY2-pointY1,2)) ; // distance formula sqrt((x2-x1)^2 + (y2-y1)^2)
    return distanceDiameter;
}
double calculateDistance() {
    double distance = calculateDistanceDiamater();
    printf("The distance between both points is %.2lf\n", distance);
    return distance;

}
double calculatePerimeter(){
    double diameter = calculateDistanceDiamater();
    double perimeter = PI * diameter; // perimeter formula for a circle
    printf("The perimeter of the city encompassed by your request is %0.2lf\n", perimeter);
return 5.0; // had to rewrite my entire code because of that disclaimer. Sorry but I got highly annoyed after figuring out I hneeded helper functions
}
double calculateArea(){
    double radius = calculateDistanceDiamater() / 2; // D / 2 is radius of a circle
    double area = PI * pow(radius,2); // pi*radius^2 is area formula for a circle
    printf("The area of the city encompassed by your request is %0.2lf\n", area);
    return 1.0;
}

double calculateWidth() {
    double width = calculateDistanceDiamater(); // unsure of formula for width for a circle
    printf("The width of the city encompassed by your request is %0.2lf\n", width);
    return 1.0;

}
double calculateHeight() {
    double height = calculateDistanceDiamater(); // unsure of formula for height for a circle
    printf("The height of the city encompassed by your request is %0.2lf\n", height);
    return 1.0;

}

int main(int argc, char **argv) { // args specified in doc
// function calls
calculateDistance();
calculatePerimeter();
calculateArea();
calculateWidth();
calculateHeight();

return 0;
}


