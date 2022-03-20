#include "CharacterClass.h"
#include <iostream>

using namespace std;

void CharacterClass::CustomCharacters(int height, float weight, string gender, string first_name, string nickname, string family_name) {
	cout << nickname << "'s Properties :" << "\nHeight : " << height << "\nWeight : " << weight << "\nGender : " << gender << "\nFirst Name : " << first_name << "\nNickname : " << nickname << "\nFamily Name : " << family_name << endl;
}