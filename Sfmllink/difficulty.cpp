#include "difficulty.h"
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>

using namespace std;
using namespace sf;

difficulty::difficulty(float width, float height)
{

	font.loadFromFile("../Assets/fonts/joystixMonospace.otf");


	diff[0].setFont(font);
	diff[0].setFillColor(Color::Black);
	diff[0].setString("EASY");
	diff[0].setCharacterSize(60);
	diff[0].setPosition(Vector2f((width / (3) + 20 ), height / 4 + 475));

	diff[1].setFont(font);
	diff[1].setFillColor(Color::White);
	diff[1].setString("MEDIUM");
	diff[1].setCharacterSize(60);
	diff[1].setPosition(Vector2f((width / (2) + 100), height / (4) + 475));

	diff[2].setFont(font);
	diff[2].setFillColor(Color::White);
	diff[2].setString("HARD");
	diff[2].setCharacterSize(60);
	diff[2].setPosition(Vector2f(((width - diff[2].getGlobalBounds().width) / 2), height / (4) + 625));

	selected = 0;

}



difficulty::~difficulty() {}

void difficulty::SetSelected(int n)
{
	selected = n;
}

void difficulty::draw(RenderWindow& window) {
	for (int i = 0; i < 3; i++) {
		window.draw(diff[i]);
	}
}

void difficulty::MoveDown() {
	if (selected + 1 <= 3)
	{
		diff[selected].setFillColor(Color::White);
		selected++;
		if (selected == 3)
		{
			selected = 0;
		}
		diff[selected].setFillColor(Color::Black);
	}
}

void difficulty::MoveUp()
{
	if (selected - 1 >= -1)
	{
		diff[selected].setFillColor(Color::White);
		selected--;
		if (selected == -1)
		{
			selected = 2;
		}
		diff[selected].setFillColor(Color::Black);
	}
}