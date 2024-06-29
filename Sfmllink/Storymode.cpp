#include "Storymode.h"
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>

using namespace std;
using namespace sf;

Storymode::Storymode(float width, float height)
{





	font.loadFromFile("../Assets/fonts/joystixMonospace.otf");


	storymodemenu[0].setFont(font);
	storymodemenu[0].setFillColor(Color::Black);
	storymodemenu[0].setString("new game");
	storymodemenu[0].setCharacterSize(60);
	storymodemenu[0].setPosition(Vector2f((width / (3)-150), height / 4 + 475));

	storymodemenu[1].setFont(font);
	storymodemenu[1].setFillColor(Color::White);
	storymodemenu[1].setString("Continue");
	storymodemenu[1].setCharacterSize(60);
	storymodemenu[1].setPosition(Vector2f((width / (2) + 80), height / (4) + 475));

	storymodemenu[2].setFont(font);
	storymodemenu[2].setFillColor(Color::White);
	storymodemenu[2].setString("freeplay");
	storymodemenu[2].setCharacterSize(60);
	storymodemenu[2].setPosition(Vector2f(((width - storymodemenu[2].getGlobalBounds().width)/2), height / (4) + 625));

	selected = 0;

}



Storymode::~Storymode() {}

void Storymode::SetSelected(int n)
{
	selected = n;
}

void Storymode::draw(RenderWindow& window) {
	for (int i = 0; i < 3; i++) {
		window.draw(storymodemenu[i]);
	}
}

void Storymode::MoveDown() {
	if (selected + 1 <= 3)
	{
		storymodemenu[selected].setFillColor(Color::White);
		selected++;
		if (selected == 3)
		{
			selected = 0;
		}
		storymodemenu[selected].setFillColor(Color::Black);
	}
}

void Storymode::MoveUp()
{
	if (selected - 1 >= -1)
	{
		storymodemenu[selected].setFillColor(Color::White);
		selected--;
		if (selected == -1)
		{
			selected = 2;
		}
		storymodemenu[selected].setFillColor(Color::Black);
	}
}