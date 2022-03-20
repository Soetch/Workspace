#include "AssistantQuotes.h"
#include "AssistantErrors.h"
#include <iostream>

using namespace AQ;
using namespace AE;
using namespace std;

void AssistantQuotes::printQuotes(char selector) {
	AssistantErrors AE;
	AssistantQuotes AQ;

	switch (selector) {
	case 'a':
		cout << AssistantQuotes::WELCOMING_QUOTE << endl;
		break;
	case 'b':
		cout << AssistantQuotes::END_QUOTE << endl;
		break;
	default:
		AE.throwErrors('a');
		break;
	};
}

// TODO : Fix Assistant Errors (refer to error)
