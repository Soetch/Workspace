#pragma once
#include <iostream>

using namespace std;

class CharacterClass
{
	public:
		struct Human {
			int height;
			float weight;
			string gender;
			string first_name;
			string nickname;
			string family_name;
		};
		struct nonHuman {
			int height;
			float weight;
			string gender;
			string first_name;
			string nickname;
			string family_name;
			bool hasElfEars;
			bool hasTail;
		};

		void CustomCharacters(int height, float weight, string gender, string first_name, string nickname, string family_name);
};

