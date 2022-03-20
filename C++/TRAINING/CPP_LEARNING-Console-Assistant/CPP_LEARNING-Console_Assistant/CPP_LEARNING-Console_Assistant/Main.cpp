#include <iostream>
#include "AssistantErrors.h"
#include "AssistantQuotes.h"

using namespace std;
using namespace AE;
using namespace AQ;

int main() {
	char selector;
	AssistantQuotes AQ;
	AssistantErrors AE;

	AQ.printQuotes('a');

	cout << "test" << endl;
	cin >> selector;
	AQ.printQuotes(selector);
}