#include <iostream>
#include <iomanip>

using namespace std;


// This program uses a structure to hold data about a rectangle 
// It calculates the area and perimeter of a box 

// Beatrix House

// Fill in code to define a structure named dimensions that
// contains 2 float members, length and width
struct dimensions { float length, width; };


// Fill in code to define a structure named rectangle that contains
// 3 members, area, perimeter, and sizes.  area and perimeter should be
// floats, whereas sizes should be a dimensions structure variable

struct results
{
    float area;
    float perimeter;
};

struct rectangle
{
    results attributes;
    dimensions sizes;
};

float calculateArea(rectangle);
float calculatePerimeter(rectangle);


int main()
{
   // Fill in code to declare a rectangle structure variable named box.
   rectangle box;
	
   cout << "Enter the length of a rectangle: ";
   
   // Fill in code to read in the length to the appropriate location
   cin >> box.sizes.length;

   cout << "Enter the width of a rectangle: ";

   // Fill in code to read in the width to the appropriate location 
   cin >> box.sizes.width;
   
   cout << endl << endl;

  
  

   cout << fixed << showpoint << setprecision(2);
   cout << "The area of the rectangle is " << calculateArea(box) << endl; 
   cout << "The perimeter of the recangle is " <<  calculatePerimeter(box)
        << endl;

   return 0;
}

float calculateArea(rectangle box)
{
     float area = box.sizes.length * box.sizes.width;
     return area;
}

float calculatePerimeter(rectangle box)
{
     float perimeter = 2 * (box.sizes.length + box.sizes.width);
     return perimeter;
}
