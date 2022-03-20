#pragma once
#include <iostream>

using namespace std;

namespace AE {
	class AssistantErrors
	{
		public:
			// Methods
			void throwErrors(char error_selector);
		private:
			// Errors
			string ERROR_SELECTOR = "Exception 1 : Selector not found.";
			string ERROR_UNKNOWN = "Exception 2 : Unknown error.";
	};
}

