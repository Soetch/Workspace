#include "boxClass.h"
#include <iostream>

using namespace BOX;
using namespace std;

// Get the box's properties
void Box::printProperties() {
	cout << "Properties of the Box object :\nWidth : " << width << "\nHeight : " << height << "\nLength : " << length << endl;
}

// Get the box's volume
void Box::volumeOperation() {
	volume = width * height * length;
}

// Print the box's volume
void Box::printVolume() {
	cout << "Volume of the Box object :\nVolume : " << volume << endl;
}

// Put something in the box
void Box::insideBox() {
	cout << "What do you want to put in the box ?" << endl;
	cin >> inTheBox;
	cout << "Write 'insideTheBox' to know what is inside the box." << endl;
	cin >> input;
	if (input == "insideTheBox") {
		insideTheBox();
	}
}

// Print what is in the box
void Box::insideTheBox() {
	cout << inTheBox << " is in the box.";
	cin >> input;
}