#include "Levels.h"
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>

using namespace std;
using namespace sf;

Levels::Levels(float width, float height)
{
	font.loadFromFile("../Assets/fonts/BalonkuRegular-la1w.otf");

	levelnum[0].setFont(font);
	levelnum[0].setFillColor(Color::Black);
	levelnum[0].setString("1");
	levelnum[0].setCharacterSize(90);
	levelnum[0].setPosition(Vector2f((width / (2) - 300), height / 4));

	levelnum[1].setFont(font);
	levelnum[1].setFillColor(Color::White);
	levelnum[1].setString("2");
	levelnum[1].setCharacterSize(90);
	levelnum[1].setPosition(Vector2f((width / (2) - 150), height / (4)));

	levelnum[2].setFont(font);
	levelnum[2].setFillColor(Color::White);
	levelnum[2].setString("3");
	levelnum[2].setCharacterSize(90);
	levelnum[2].setPosition(Vector2f((width / (2)), height / (4)));

	levelnum[3].setFont(font);
	levelnum[3].setFillColor(Color::White);
	levelnum[3].setString("4");
	levelnum[3].setCharacterSize(90);
	levelnum[3].setPosition(Vector2f((width / (2) + 150), height / (4)));

	levelnum[4].setFont(font);
	levelnum[4].setFillColor(Color::White);
	levelnum[4].setString("5");
	levelnum[4].setCharacterSize(90);
	levelnum[4].setPosition(Vector2f((width / (2) + 300), height / (4)));

	levelnum[5].setFont(font);
	levelnum[5].setFillColor(Color::White);
	levelnum[5].setString("6");
	levelnum[5].setCharacterSize(90);
	levelnum[5].setPosition(Vector2f((width / (2) - 300), height / (4) + 150));

	levelnum[6].setFont(font);
	levelnum[6].setFillColor(Color::White);
	levelnum[6].setString("7");
	levelnum[6].setCharacterSize(90);
	levelnum[6].setPosition(Vector2f((width / (2) - 150), height / (4) + 150));

	levelnum[7].setFont(font);
	levelnum[7].setFillColor(Color::White);
	levelnum[7].setString("8");
	levelnum[7].setCharacterSize(90);
	levelnum[7].setPosition(Vector2f((width / (2)), height / (4) + 150));

	levelnum[8].setFont(font);
	levelnum[8].setFillColor(Color::White);
	levelnum[8].setString("9");
	levelnum[8].setCharacterSize(90);
	levelnum[8].setPosition(Vector2f((width / (2) + 150), height / (4) + 150));

	levelnum[9].setFont(font);
	levelnum[9].setFillColor(Color::White);
	levelnum[9].setString("10");
	levelnum[9].setCharacterSize(90);
	levelnum[9].setPosition(Vector2f((width / (2) + 300), height / (4) + 150));

	selected = 0;
}

Levels::~Levels() {}

void Levels::SetSelected(int n)
{
	selected = n;
}

void Levels::draw(RenderWindow& window) {
	for (int i = 0; i < 10; i++) {
		window.draw(levelnum[i]);
	}
}

void Levels::MoveRight() {
	if (selected + 1 <= 10)
	{
		levelnum[selected].setFillColor(Color::White);
		selected++;
		if (selected == 10)
		{
			selected = 0;
		}
		levelnum[selected].setFillColor(Color::Black);
	}
}

void Levels::MoveLeft()
{
	if (selected - 1 >= -1)
	{
		levelnum[selected].setFillColor(Color::White);
		selected--;
		if (selected == -1)
		{
			selected = 9;
		}
		levelnum[selected].setFillColor(Color::Black);
	}
}