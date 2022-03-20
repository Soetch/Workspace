#pragma once

#include <string>

namespace BOX {
	class Box
	{
	public:
		float width;
		float height;
		float length;

		float volume;

		std::string inTheBox;
		std::string input;
		
		void printProperties();
		void volumeOperation();
		void printVolume();
		void insideBox();
		void insideTheBox();
	};
}

