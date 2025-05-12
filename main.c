#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
float mass, acceleration, force;
float radius, height, volume_cylinder;
float mass1, mass2, distance, force;
float fahrenheit, celsius;
float xx1, yy1, xx2, yy2, distance;
float z, x, y;
int a, offset;
char plaintext_character, encoded_character;


#define PI 3.14159
#define G (6.67 * pow(10, -11))

int main() 
{
	// Newton’s Second Law of Motion: force = mass * acceleration

	printf("1st question. You will be finding Newton's Second Law of motion, First Enter the mass: ");	
    scanf("%f", &mass);
   
    printf("Now enter the acceleration: ");   
    scanf("%f", &acceleration);

    force = mass * acceleration;

    printf("You're answer for the Force = %.2f N\n", force);


  // Volume of a cylinder: volume_cylinder = PI * radius2 *height

	printf("2nd Question. Next we will be findnig the volume of a cylinder so first enter the radius of it: ");	
    scanf("%f", &radius);
   
    printf("And next what is the height of that cylinder: ");   
    scanf("%f", &height);

    volume_cylinder = PI * (radius * radius) * height;

    printf("So therefore the volume of cylinder is = %.2f cubic meters\n", volume_cylinder);
	
	

    // Character encoding: encoded_character = offset + (plaintext_character - 'a') + 'A'

    printf("3rd question. We will be doing character encoding for this you will be entering a lowercase letter: ");
    scanf("%c", &plaintext_character);

	getchar();

    printf("Enter an integer offset: ");
    scanf("%d", &offset);

    encoded_character = offset + (plaintext_character - 'a') + 'A';

    printf("Encoded character: %c\n", encoded_character);



    // Gravity: force = G * mass1 * mass2 / distance2, where G is the gravitational constant with value 6.67 * 10 - 11
    printf("4th question. For the forth queation we will be finding the force of gravity with you're numbers that you enter so first what is mass1: ");
    scanf("%f", &mass1);

    printf("next what is the mass2: ");	
    scanf("%f", &mass2);

	printf("Then finally what is the distance them: ");   
    scanf("%f", &distance);

    force = G * mass1 * mass2 / (distance * distance);

    printf("So finally the Force due to gravity is: %.2e\n", force);


	// Fahrenheit to Celsius conversion: celsius = (fahrenheit – 32) / (9 / 5)

    printf("5th question. Now we I will be helping you convert temperature from Fahrenheit to Celsius so first what is the Fahrenheit temp: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) / (float)(9/5);

    printf("So you're temperature in Celsius is: %.2f\n", celsius);


    // Distance between two points: distance = square root of ((x1 - x2) 2 + (y1 - y2) 2 )

    printf("6th question. For the 2nd to final question we will be helping you find distacnce between two points, so what are the first two x and y points: ");   
    scanf("%f %f", &xx1, &yy1);
 
    printf("The second two points are: ");    
    scanf("%f %f", &xx2, &yy2);

    distance = sqrt(pow(xx1 - xx2, 2) + pow(yy1 - yy2, 2));

    printf("The distance between the two points: %.2f\n", distance);


	// General equation: y = (89 / 27) - z * x + a / (a % 2) 

    printf("7th question. Finally we will be finding y from with the values you enter so first enter the for z: ");	
    scanf("%f", &z);

    printf("Enter values for x: ");   
    scanf("%f", &x);

    printf("and integer a: ");   
    scanf("%d", &a); 

    y = (float)89 / 27 - z * x + (float)a / (a % 2);

    printf("Result of the general equation: %.2f\n", y);

    return 0;

}





