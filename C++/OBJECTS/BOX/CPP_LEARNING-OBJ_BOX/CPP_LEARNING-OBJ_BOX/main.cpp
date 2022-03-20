#include "boxClass.h"
#include "adClass.h"
#include <iostream>

using namespace BOX;
using namespace AD;
using namespace std;

int main() {
	Box Box1;
	Ad Ad1;

	Box1.height = 5.0;
	Box1.width = 6.0;
	Box1.length = 3.0;
	
	Ad1.printGithubName();

	Box1.printProperties();
	Box1.volumeOperation();
	Box1.printVolume();
	Box1.insideBox();

}