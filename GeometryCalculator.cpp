
/* Ayush Kadigari Period 2 Geometry Calculator */
#include <iostream>
#include<math.h>
using namespace std;

/* Finding the area of the triangle */
int main() {
  int tbase,theight;
  float tarea;
  cout << "Enter the Base of The Triangle: ";
  cin>>tbase;
  cout << "Enter Height of the Triangle: ";
  cin>>theight;

  tarea=tbase*theight*0.5; 

  cout << "Area of the triangle: "<<tarea<<endl<<endl;


/* Finding the area of the rectangle */

  int rlength,rwidth;
  float rarea;
  cout << "Enter the Base of The Rectangle: ";
  cin>>rlength;
  cout << "Enter Width of the Rectangle: ";
  cin>>rwidth;

  rarea=rlength*rwidth;

  cout << "The area of the rectangle is: "<<rarea<<endl<<endl;

/* Finding the area of the circle */
  int cradius;
  float carea;

  cout << "Enter the radius of the circle";
  cin>>cradius;

  carea=cradius*cradius*3.14;

  cout << "The area of the circle is: "<<carea<<endl<<endl;

/* Finding the volume of the sphere */
  int sradius;
  float sarea;

  cout << "Enter the Radius of the sphere";
  cin>>sradius;

  sarea=sradius*sradius*sradius*4*3.14;

  cout << "The area of the circe is: "<<sarea<<endl<<endl;

/* Finding the volume of the cylinder */
  int r,h;
  float volume;

  cout << "Enter the Radius: ";
  cin>>r;
  cout << "Enter the Height: ";
  cin>>h;

  volume=3.14*h*r*r;

  cout << "The volume of the cylinder is: "<<volume<<endl;


  return 0;

}