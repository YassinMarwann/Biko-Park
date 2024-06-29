#include "Controls.h"
#include <cmath>
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>

using namespace std;
using namespace sf;

Controls::Controls(float width, float height)
{
	
	Controlsmenu[0].setSize(Vector2f(500, 250));
	Controlsmenu[0].setFillColor(Color::Transparent);
	Controlsmenu[0].setOutlineThickness(7);
	Controlsmenu[0].setOutlineColor(Color::Black);
	Controlsmenu[0].setPosition(Vector2f((width / 4 -40), height / 4 -100));

	Controlsmenu[1].setSize(Vector2f(500, 250));
	Controlsmenu[1].setFillColor(Color::Transparent);
	Controlsmenu[1].setOutlineThickness(7);
	Controlsmenu[1].setOutlineColor(Color(247, 185, 148));
	Controlsmenu[1].setPosition(Vector2f(2.5*width / 4 +110, height / 4 - 100));


	Controlsmenu[2].setSize(Vector2f(500, 250));
	Controlsmenu[2].setFillColor(Color::Transparent);
	Controlsmenu[2].setOutlineThickness(7);
	Controlsmenu[2].setOutlineColor(Color(247, 185, 148));
	Controlsmenu[2].setPosition(Vector2f(width / 4 - 40, 2.5 * height / 4 - 75));

	Controlsmenu[3].setSize(Vector2f(500, 250));
	Controlsmenu[3].setFillColor(Color::Transparent);
	Controlsmenu[3].setOutlineThickness(7);
	Controlsmenu[3].setOutlineColor(Color(247, 185, 148));
	Controlsmenu[3].setPosition(Vector2f(2.5 * width / 4 +110, 2.5 * height / 4 - 75));

	selected = 0;

}



Controls::~Controls() {}

void Controls::SetSelected(int n)
{
	selected = n;
}

void Controls::draw(RenderWindow& window) {
	for (int i = 0; i < 4; i++) {
		window.draw(Controlsmenu[i]);
	}
}

void Controls::MoveDown() {
	if (selected + 1 <= 4)
	{
		Controlsmenu[selected].setOutlineColor(Color(247, 185, 148));
		selected++;
		if (selected == 4)
		{
			selected = 0;
		}
		Controlsmenu[selected].setOutlineColor(Color::Black);
	}
}

void Controls::MoveUp()
{
	if (selected - 1 >= -1)
	{
		Controlsmenu[selected].setOutlineColor(Color(247, 185, 148));
		selected--;
		if (selected == -1)
		{
			selected = 3;
		}
		Controlsmenu[selected].setOutlineColor(Color::Black);
	}
}