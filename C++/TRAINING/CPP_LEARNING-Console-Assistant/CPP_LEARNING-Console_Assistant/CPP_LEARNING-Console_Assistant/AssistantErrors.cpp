#include "AssistantErrors.h"
#include <iostream>

using namespace std;
using namespace AE;

void AssistantErrors::throwErrors(char error_selector) {
	switch (error_selector) {
		case 'a':
			cout << AssistantErrors::ERROR_SELECTOR << endl;
			break;
		case 'b':
			cout << AssistantErrors::ERROR_UNKNOWN << endl;
			break;
		default:
			cout << "??? error.";
			break;
	};
}
