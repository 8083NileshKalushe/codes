/* 7.  Write a program to print the area of a rectangle by creating a class named 'Area' 
       taking the values of its length and breadth as parameters of its constructor and 
	   having a function named 'returnArea'
       which returns the area of the rectangle. Length and breadth of the rectangle are 
	   entered through keyboard.
*/

#include <iostream>
using namespace std;

class Area
{
        private:
        int length, breadth;

        public:
          Area(int l, int b)
		  {
          	length=l;
		    breadth=b;
		  } 
    int returnArea() 
	{
        return length*breadth;
    }
};

main()
{
    int length, breadth;

    cout << "Enter length of rectangle=";
    cin >> length;

    cout << "Enter breadth of rectangle=";
    cin >> breadth;

    Area rectangle(length, breadth);

    cout << "Area of rectangle=" << rectangle.returnArea() << "\n";
}
