#include <iostream>
#include "CharacterClass.h"

using namespace std;

int main() {
	CharacterClass Character;
	int height;
	float weight;
	string gender;
	string first_name;
	string nickname;
	string family_name;

	cout << "Hello World" << endl;
	cout << "what is the height of your character ?" << endl;
	cin >> height;
	cout << "what is the weight of your character ?" << endl;
	cin >> weight;
	cout << "what is the gender of your character ?" << endl;
	cin >> gender;
	cout << "what is the first name of your character ?" << endl;
	cin >> first_name;
	cout << "what is the nickname of your character ?" << endl;
	cin >> nickname;
	cout << "what is the family name of your character ?" << endl;
	cin >> family_name;
	Character.CustomCharacters(height, weight, gender, first_name, nickname, family_name);
}