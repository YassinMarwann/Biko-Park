#include "Paused.h"
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>


using namespace std;
using namespace sf;


Paused::Paused(float screenratio, int sel, int midx, int pagenum, bool death, bool& i, int midy)
{
	font.loadFromFile("../Assets/fonts/joystixMonospace.otf");
	if (death && i) {
		sel = 1;
		i = 0;
	}
	if (pagenum == 10 && i) {
		sel = 1;
		i = 0;
	}

	int character_size = 60 / screenratio;


	float width0 = 292 / screenratio;
	float width1 = 330 / screenratio;
	float width2 = 460 / screenratio;

	if (death == true && pagenum != 10) {
		pausemenu[1].setFillColor(Color::White);
		pausemenu[1].setFont(font);
		pausemenu[1].setString("Restart");
		pausemenu[1].setCharacterSize(character_size);
		pausemenu[1].setPosition(Vector2f((midx - width1 / 2 - 15), midy - 75 / screenratio));


		pausemenu[2].setFillColor(Color::White);
		pausemenu[2].setFont(font);
		pausemenu[2].setString("Main Menu");
		pausemenu[2].setCharacterSize(character_size);
		pausemenu[2].setPosition(Vector2f((midx - width2 / 2), midy + 150 / screenratio));
	}
	else if (pagenum != 10) {

		pausemenu[0].setFillColor(Color::White);
		pausemenu[0].setFont(font);
		pausemenu[0].setString("Resume");
		pausemenu[0].setCharacterSize(character_size);
		pausemenu[0].setPosition(Vector2f((midx - width0 / 2), midy - 200 / screenratio));


		pausemenu[1].setFillColor(Color::White);
		pausemenu[1].setFont(font);
		pausemenu[1].setString("Restart");
		pausemenu[1].setCharacterSize(character_size);
		pausemenu[1].setPosition(Vector2f((midx - width1 / 2), midy - 20 / screenratio));

		pausemenu[2].setFillColor(Color::White);
		pausemenu[2].setFont(font);
		pausemenu[2].setString("Main Menu");
		pausemenu[2].setCharacterSize(character_size);
		pausemenu[2].setPosition(Vector2f((midx - width2 / 2 + 10), midy + 160 / screenratio));
	}
	else {
		pausemenu[1].setFillColor(Color::White);
		pausemenu[1].setFont(font);
		pausemenu[1].setString("Restart");
		pausemenu[1].setCharacterSize(character_size);
		pausemenu[1].setPosition(Vector2f((midx - width1 / 2), midy - 75 / screenratio));

		pausemenu[2].setFillColor(Color::White);
		pausemenu[2].setFont(font);
		pausemenu[2].setString("Main Menu");
		pausemenu[2].setCharacterSize(character_size);
		pausemenu[2].setPosition(Vector2f((midx - width2 / 2), midy + 150 / screenratio));

	}



	selected = sel;
	for (int i = 0; i < 3; i++) {
		if (i == sel)
		{
			pausemenu[i].setFillColor(Color::Black);
		}
	}

}





Paused::~Paused() {}



void Paused::SetSelected(int n)
{
	selected = n;
}

void Paused::draw(RenderWindow& window) {
	for (int i = 0; i < 3; i++) {
		window.draw(pausemenu[i]);
	}
}

void Paused::MoveDown() {
	if (selected + 1 <= 3)
	{
		pausemenu[selected].setFillColor(Color::White);
		selected++;
		if (selected == 3)
		{
			selected = 0;
		}
		pausemenu[selected].setFillColor(Color::Black);
	}
}

void Paused::MoveUp()
{
	if (selected - 1 >= -1)
	{
		pausemenu[selected].setFillColor(Color::White);
		selected--;
		if (selected == -1)
		{
			selected = 2;
		}
		pausemenu[selected].setFillColor(Color::Black);
	}
}