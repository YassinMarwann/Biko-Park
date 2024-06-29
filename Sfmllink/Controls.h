#pragma once
#include <SFML\Graphics.hpp>

using namespace std;
using namespace sf;

class Controls
{
public:

	RectangleShape Controlsmenu[4];


	Controls(float width, float height);

	void draw(RenderWindow& window);

	void MoveUp();

	void MoveDown();

	void SetSelected(int n);

	int pressed() {

		return selected;
	}
	~Controls();

private:
	int selected;

};

