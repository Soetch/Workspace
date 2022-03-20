#pragma once
#include <string>

using namespace std;

namespace AQ {
	class AssistantQuotes
	{
		public:
			// Function
			void printQuotes(char selector);

		private:
			// Quotes
			string WELCOMING_QUOTE = "Welcome to my house !";
			string END_QUOTE = "Goodbye, see you !";
	};
}

