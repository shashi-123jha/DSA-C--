/*
Understanding Variables and Data Types:

Write a program to calculate the area and circumference of a circle. The user should input the radius, 
and the program should display both the area and circumference using the formulas:
Area = π * r²
Circumference = 2 * π * r
Concepts: Variables, input/output, data types

*/

#include<iostream>
#include<Cmath>
using namespace std ; 

int main(){

double radius; 
cout<<"enter the value of radious";
cin>>radius;

double area = M_PI* radius * radius ; 
double circumference = 2 * M_PI * radius ;

cout<<"the area of the circle is" << area << endl ;
cout<<"the circumference is" << circumference << endl ; 

return 0 ; 
}



