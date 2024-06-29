#include "Levels.h"
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>

using namespace std;
using namespace sf;



Levels::Levels(float width, float height)
{
	font.loadFromFile("../Assets/fonts/joystixMonospace.otf");

	//LEVEL NUMBER LINE AT THE BOTTOM OF THE SCREEN

	levelnum[0].setFont(font);
	levelnum[0].setFillColor(Color::Black);
	levelnum[0].setString("1");
	levelnum[0].setCharacterSize(70);
	levelnum[0].setPosition(Vector2f((width / (3) - 450 + 34), height / 2 + 325));

	levelnum[1].setFont(font);
	levelnum[1].setFillColor(Color::White);
	levelnum[1].setString("2");
	levelnum[1].setCharacterSize(70);
	levelnum[1].setPosition(Vector2f((width / (3) - 300 + 34), height / 2 + 325));

	levelnum[2].setFont(font);
	levelnum[2].setFillColor(Color::White);
	levelnum[2].setString("3");
	levelnum[2].setCharacterSize(70);
	levelnum[2].setPosition(Vector2f((width / (3) - 150 + 34), height / 2 + 325));

	levelnum[3].setFont(font);
	levelnum[3].setFillColor(Color::White);
	levelnum[3].setString("4");
	levelnum[3].setCharacterSize(70);
	levelnum[3].setPosition(Vector2f((width / (3) + 34), height / 2 + 325));

	levelnum[4].setFont(font);
	levelnum[4].setFillColor(Color::White);
	levelnum[4].setString("5");
	levelnum[4].setCharacterSize(70);
	levelnum[4].setPosition(Vector2f((width / (3) + 150 + 34), height / 2 + 325));

	levelnum[5].setFont(font);
	levelnum[5].setFillColor(Color::White);
	levelnum[5].setString("6");
	levelnum[5].setCharacterSize(70);
	levelnum[5].setPosition(Vector2f((width / (3) + 300 + 34), height / 2 + 325));

	levelnum[6].setFont(font);
	levelnum[6].setFillColor(Color::White);
	levelnum[6].setString("7");
	levelnum[6].setCharacterSize(70);
	levelnum[6].setPosition(Vector2f((width / (3) + 450 + 34), height / 2 + 325));

	levelnum[7].setFont(font);
	levelnum[7].setFillColor(Color::White);
	levelnum[7].setString("8");
	levelnum[7].setCharacterSize(70);
	levelnum[7].setPosition(Vector2f((width / (3) + 600 + 34), height / 2 + 325));

	levelnum[8].setFont(font);
	levelnum[8].setFillColor(Color::White);
	levelnum[8].setString("9");
	levelnum[8].setCharacterSize(70);
	levelnum[8].setPosition(Vector2f((width / (3) + 750 + 34), height / 2 + 325));

	levelnum[9].setFont(font);
	levelnum[9].setFillColor(Color::White);
	levelnum[9].setString("10");
	levelnum[9].setCharacterSize(70);
	levelnum[9].setPosition(Vector2f((width / (3) + 900 + 34), height / 2 + 325));




	//LEVEL NUMBER UNDER THE PHOTO



	textnum[0].setFont(font);
	textnum[0].setFillColor(Color(207, 114, 56));
	textnum[0].setString("Level 1");
	textnum[0].setCharacterSize(50);
	textnum[0].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[1].setFont(font);
	textnum[1].setFillColor(Color(207, 114, 56));
	textnum[1].setString("Level 2");
	textnum[1].setCharacterSize(0);
	textnum[1].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[2].setFont(font);
	textnum[2].setFillColor(Color(207, 114, 56));
	textnum[2].setString("Level 3");
	textnum[2].setCharacterSize(0);
	textnum[2].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[3].setFont(font);
	textnum[3].setFillColor(Color(207, 114, 56));
	textnum[3].setString("Level 4");
	textnum[3].setCharacterSize(0);
	textnum[3].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[4].setFont(font);
	textnum[4].setFillColor(Color(207, 114, 56));
	textnum[4].setString("Level 5");
	textnum[4].setCharacterSize(0);
	textnum[4].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[5].setFont(font);
	textnum[5].setFillColor(Color(207, 114, 56));
	textnum[5].setString("Level 6");
	textnum[5].setCharacterSize(0);
	textnum[5].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[6].setFont(font);
	textnum[6].setFillColor(Color(207, 114, 56));
	textnum[6].setString("Level 7");
	textnum[6].setCharacterSize(0);
	textnum[6].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[7].setFont(font);
	textnum[7].setFillColor(Color(207, 114, 56));
	textnum[7].setString("Level 8");
	textnum[7].setCharacterSize(0);
	textnum[7].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[8].setFont(font);
	textnum[8].setFillColor(Color(207, 114, 56));
	textnum[8].setString("Level 9");
	textnum[8].setCharacterSize(0);
	textnum[8].setPosition(Vector2f((width / (3) + 165), height / 2 + 110));

	textnum[9].setFont(font);
	textnum[9].setFillColor(Color(207, 114, 56));
	textnum[9].setString("Level 10");
	textnum[9].setCharacterSize(0);
	textnum[9].setPosition(Vector2f((width / (3) + 155), height / 2 + 110));



	//LEVEL NAME



	levelname[0].setFont(font);
	levelname[0].setFillColor(Color(207, 114, 56));
	levelname[0].setString("Introduction");
	levelname[0].setCharacterSize(50);
	levelname[0].setPosition(Vector2f((width / (3) + 60), height / 2 + 175));

	levelname[1].setFont(font);
	levelname[1].setFillColor(Color(207, 114, 56));
	levelname[1].setString("Abilities");
	levelname[1].setCharacterSize(0);
	levelname[1].setPosition(Vector2f((width / (3) + 125), height / 2 + 175));

	levelname[2].setFont(font);
	levelname[2].setFillColor(Color(207, 114, 56));
	levelname[2].setString("Elevation");
	levelname[2].setCharacterSize(0);
	levelname[2].setPosition(Vector2f((width / (3) + 126), height / 2 + 175));

	levelname[3].setFont(font);
	levelname[3].setFillColor(Color(207, 114, 56));
	levelname[3].setString("Feeling Dizzy?");
	levelname[3].setCharacterSize(0);
	levelname[3].setPosition(Vector2f((width / (3) + 25), height / 2 + 175));

	levelname[4].setFont(font);
	levelname[4].setFillColor(Color(207, 114, 56));
	levelname[4].setString("Watch Your Step");
	levelname[4].setCharacterSize(0);
	levelname[4].setPosition(Vector2f((width / (3) + 0), height / 2 + 175));

	levelname[5].setFont(font);
	levelname[5].setFillColor(Color(207, 114, 56));
	levelname[5].setString("Find The Button");
	levelname[5].setCharacterSize(0);
	levelname[5].setPosition(Vector2f((width / (3) ), height / 2 + 175));

	levelname[6].setFont(font);
	levelname[6].setFillColor(Color(207, 114, 56));
	levelname[6].setString("Run");
	levelname[6].setCharacterSize(0);
	levelname[6].setPosition(Vector2f((width / (3) + 245), height / 2 + 175));

	levelname[7].setFont(font);
	levelname[7].setFillColor(Color(207, 114, 56));
	levelname[7].setString("No Touching!");
	levelname[7].setCharacterSize(0);
	levelname[7].setPosition(Vector2f((width / (3) + 70), height / 2 + 175));

	levelname[8].setFont(font);
	levelname[8].setFillColor(Color(207, 114, 56));
	levelname[8].setString("Sacrifice");
	levelname[8].setCharacterSize(0);
	levelname[8].setPosition(Vector2f((width / (3) + 125), height / 2 + 175));

	levelname[9].setFont(font);
	levelname[9].setFillColor(Color(207, 114, 56));
	levelname[9].setString("The Escape");
	levelname[9].setCharacterSize(0);
	levelname[9].setPosition(Vector2f((width / (3) + 115), height / 2 + 175));



	//LEVEL PICTURES INITIALIZATION

	level[0].loadFromFile("../Assets/Texture/level1.png");

	level[1].loadFromFile("../Assets/Texture/level2.png");

	level[2].loadFromFile("../Assets/Texture/level3.png");

	level[3].loadFromFile("../Assets/Texture/level4.png");

	level[4].loadFromFile("../Assets/Texture/level5.png");

	level[5].loadFromFile("../Assets/Texture/level6.png");

	level[6].loadFromFile("../Assets/Texture/level7.png");

	level[7].loadFromFile("../Assets/Texture/level8.png");

	level[8].loadFromFile("../Assets/Texture/level9.png");

	level[9].loadFromFile("../Assets/Texture/level10.png");


	
	




	Level[0].setTexture(level[0]);
	Level[0].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[0].setScale(0.672, 0.52);

	Level[1].setTexture(level[1]);
	Level[1].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[1].setScale(0, 0);

	Level[2].setTexture(level[2]);
	Level[2].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[2].setScale(0, 0);

	Level[3].setTexture(level[3]);
	Level[3].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[3].setScale(0, 0);

	Level[4].setTexture(level[4]);
	Level[4].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[4].setScale(0, 0);

	Level[5].setTexture(level[5]);
	Level[5].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[5].setScale(0, 0);

	Level[6].setTexture(level[6]);
	Level[6].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[6].setScale(0, 0);

	Level[7].setTexture(level[7]);
	Level[7].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[7].setScale(0, 0);

	Level[8].setTexture(level[8]);
	Level[8].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[8].setScale(0, 0);

	Level[9].setTexture(level[9]);
	Level[9].setPosition(Vector2f((width / (4) - 162), height / 2 - 433));
	Level[9].setScale(0, 0);


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
		window.draw(Level[i]);
		window.draw(levelname[i]);
		window.draw(textnum[i]);
	}
}

void Levels::MoveRight() {
	if (selected + 1 <= 10)
	{
		Level[selected].setScale(0, 0);
		levelnum[selected].setFillColor(Color::White);
		levelname[selected].setCharacterSize(0);
		textnum[selected].setCharacterSize(0);
		selected++;
		if (selected == 10)
		{
			selected = 0;
		}
		levelnum[selected].setFillColor(Color::Black);
		Level[selected].setScale(0.672, 0.52);
		levelname[selected].setCharacterSize(50);
		textnum[selected].setCharacterSize(50);
	}
}

void Levels::MoveLeft()
{
	if (selected - 1 >= -1)
	{
		Level[selected].setScale(0, 0);
		levelnum[selected].setFillColor(Color::White);
		levelname[selected].setCharacterSize(0);
		textnum[selected].setCharacterSize(0);
		selected--;
		if (selected == -1)
		{
			selected = 9;
		}
		levelnum[selected].setFillColor(Color::Black);
		Level[selected].setScale(0.672, 0.52);
		levelname[selected].setCharacterSize(50);
		textnum[selected].setCharacterSize(50);
	}
}