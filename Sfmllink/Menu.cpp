#include "Menu.h"
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>

using namespace std;
using namespace sf;

Menu::Menu(float width, float height)
{





	font.loadFromFile("../Assets/fonts/joystixMonospace.otf");


	mainmenu[0].setFont(font);
	mainmenu[0].setFillColor(Color::Black);
	mainmenu[0].setString("Play");
	mainmenu[0].setCharacterSize(60);
	mainmenu[0].setPosition(Vector2f((width / (3)), height / 4 + 475));

	mainmenu[1].setFont(font);
	mainmenu[1].setFillColor(Color::White);
	mainmenu[1].setString("Controls");
	mainmenu[1].setCharacterSize(60);
	mainmenu[1].setPosition(Vector2f((width / (2) + 30), height / (4) + 475));

	mainmenu[2].setFont(font);
	mainmenu[2].setFillColor(Color::White);
	mainmenu[2].setString("Exit");
	mainmenu[2].setCharacterSize(60);
	mainmenu[2].setPosition(Vector2f((width / (2) - 100), height / (4) + 625));

	selected = 0;

}



Menu::~Menu() {}

void Menu::SetSelected(int n)
{
	selected = n;
}

void Menu::draw(RenderWindow& window) {
	for (int i = 0; i < 3; i++) {
		window.draw(mainmenu[i]);
	}
}

void Menu::MoveDown() {
	if (selected + 1 <= 3)
	{
		mainmenu[selected].setFillColor(Color::White);
		selected++;
		if (selected == 3)
		{
			selected = 0;
		}
		mainmenu[selected].setFillColor(Color::Black);
	}
}

void Menu::MoveUp()
{
	if (selected - 1 >= -1)
	{
		mainmenu[selected].setFillColor(Color::White);
		selected--;
		if (selected == -1)
		{
			selected = 2;
		}
		mainmenu[selected].setFillColor(Color::Black);
	}
}