#pragma once
#include <iostream>
using namespace std;

class Object
{
protected:
	string name = "";
	string color = "";

	double weight = 0;
	double volume = 0;
public:
	Object() {} //конструктор без параметров (встроенный конструктор или по умолчанию)

	Object(string name, string color, double weight, double volume)
		: name(name), color(color), weight(weight), volume(volume) {} //конструктор копирования

	string getName() const { return this->name; }
	string getColor() const { return this->color; }
	double getWeight() const { return this->weight; }
	double getVolume() const { return this->volume; }

	void setName(string newName) { this->name = newName; }
	void setColor(string newColor) { this->color = newColor; }
	void setWeight(double newWeight) { this->weight = newWeight; }
	void setVolume(double newVolume) { this->volume = newVolume; }

	void Input();
	void Output();
};
