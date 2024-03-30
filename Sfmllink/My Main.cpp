#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <SFML\Audio.hpp>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <string>
#include <random>
#include <iomanip>
#include <vector>
#include "Menu.h"
#include "Levels.h"

using namespace std;
using namespace sf;

float const left_wall = 117.5;
float const right_wall = 5050;


bool button_ispressed;
int whoisTouching = 0;
bool isunlocked = false;
bool isinvisible[4] = { false, false, false, false };

//page number			place
//   1000			    Main Menu
//   -1				    Close
//    0                 StartGame (Level 1)
//    1                 Levels
//	  
//	  

struct Player      //add sprites of players here !!!

{
	Sprite pico;
	float currentframe;
	float move_x, move_y;
	FloatRect rect;
	bool onground;
	int LastKeyPressed = 0;

	void sp(Texture& thief) {
		pico.setTexture(thief);
		pico.setScale(0.8, 0.8);
		move_x = 0;
		move_y = 0;
		currentframe = 0;
		LastKeyPressed = 1;
	}
	void update(float time) {
		rect.left += move_x * time;
		rect.top += move_y * time;
		if (onground == false) {
			move_y += (0.0007 * time);
		}
		onground = false;

		if (rect.left > right_wall) {
			rect.left = right_wall;
		}
		if (rect.left < left_wall) {
			rect.left = left_wall;
		}

		currentframe += 0.009 * time;
		if (currentframe > 8) {
			currentframe -= 8;
		}

		if (move_x > 0) {
			pico.setTextureRect(IntRect(11 + (int(currentframe) * 45), 30, 45, 63));
		}

		if (move_x < 0) {
			pico.setTextureRect(IntRect(11 + (int(currentframe) * 45) + 45, 30, -45, 63));
		}

		pico.setPosition(rect.left, rect.top);
		move_x = 0;
	}
};


int pagenum = 1000;
void Level1(RenderWindow& window);

int main()
{
	RenderWindow window(VideoMode(1920, 1080), "Test");
	View view = window.getDefaultView();
	Menu menu(1920, 1080);
	Levels levels(1920, 1080);
	Texture mainmenubg;
	mainmenubg.loadFromFile("../Assets/Texture/light-colors-geometric-pattern-abstract.jpg");
	Texture Levelsbg;
	Levelsbg.loadFromFile("../Assets/Texture/1685585048_en-idei-club-p-pixel-background-dizain-instagram-1.jpg");
	Sprite bg;

	while (true)
	{
		if (pagenum == 1000)
		{
			bg.setTexture(mainmenubg);

			while (window.isOpen())
			{
				Event event;
				while (window.pollEvent(event))
				{
					if (event.type == Event::Closed)
					{
						window.close();
						break;
					}

					if (event.type == Event::KeyPressed)
					{
						if (event.key.code == Keyboard::Up) {
							menu.MoveUp();
						}
						if (event.key.code == Keyboard::Down) {
							menu.MoveDown();
						}
						if (event.key.code == Keyboard::Enter) {
							if (menu.pressed() == 0) {
								pagenum = 0;
							}
							if (menu.pressed() == 1) {
								pagenum = 1;
							}
							if (menu.pressed() == 2) {
								pagenum = -1;
							}
						}
					}
				}
				window.clear();

				if (pagenum != 1000) {
					break;
				}

				window.draw(bg);
				menu.draw(window);

				window.display();
			}




			if (pagenum == -1) {
				window.close();
				break;
			}

			if (pagenum == 0) {
				Level1(window);
				window.display();
			}



			if (pagenum == 1) {

				bg.setTexture(Levelsbg);

				while (window.isOpen())
				{
					Event event;
					while (window.pollEvent(event))
					{
						if (event.type == Event::Closed)
						{
							window.close();
							break;
						}

						if (event.type == Event::KeyPressed)
						{
							if (event.key.code == Keyboard::Left) {
								levels.MoveLeft();
							}
							if (event.key.code == Keyboard::Right) {
								levels.MoveRight();
							}
							if (event.key.code == Keyboard::Escape) {
								pagenum = 1000;
							}

						}
					}
					window.clear();

					if (pagenum != 1) {
						break;
					}

					window.draw(bg);
					levels.draw(window);

					window.display();
				}
			}

		}
	}
	return 0;
}

void Level1(RenderWindow& window)
{

	View view = window.getDefaultView();

	//MAP TEXTURES AND POSITIONS

	Texture ground;
	ground.loadFromFile("..//Pico/ground.jpg");//adding ground texture
	Sprite groundtex(ground);
	groundtex.setTexture(ground);
	groundtex.setPosition(0, 900);
	groundtex.setScale(8, 3.5);

	Sprite groundtex2(ground);
	groundtex2.setTexture(ground);
	groundtex2.setPosition(1340, 600);
	groundtex2.setScale(5, 1);

	Sprite groundtex3(ground);
	groundtex3.setTexture(ground);
	groundtex3.setPosition(4100, 600);
	groundtex3.setScale(3, 1);

	Sprite groundtex4(ground);
	groundtex4.setTexture(ground);
	groundtex4.setPosition(3140, 2000);
	groundtex4.setScale(3, 1);

	Texture wall;
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setTexture(wall);
	wall_1.setPosition(800, 600);
	wall_1.setScale(0.5, 0.9);


	Sprite wall_2(wall);
	wall_2.setTexture(wall);
	wall_2.setPosition(-200, -105);
	wall_2.setScale(0.5, 2);


	Sprite wall_3(wall);
	wall_3.setTexture(wall);
	wall_3.setPosition(2000, -250);
	wall_3.setScale(1, 1);



	Sprite wall_4(wall);
	wall_4.setTexture(wall);
	wall_4.setPosition(5000, -2530);
	wall_4.setScale(0.5, 5);


	Texture mov_wall;
	mov_wall.loadFromFile("../Pico/wall2.png");
	Sprite moving_wall;
	moving_wall.setTexture(mov_wall);
	moving_wall.setPosition(2250, 0);
	moving_wall.setScale(1, 1);


	Sprite moving_wall1;
	moving_wall1.setTexture(mov_wall);
	moving_wall1.setPosition(3058, 620);
	moving_wall1.setScale(1, 0.8);


	Texture buttpress; //adding button to move the wall
	buttpress.loadFromFile("../Pico/buttonpressed.png");
	Sprite buttonp(buttpress);
	buttonp.setScale(0, 0);


	Texture butt; //adding button to move the wall
	butt.loadFromFile("../Pico/button.png");
	Sprite button(butt);
	button.setTexture(butt);
	button.setPosition(2000, 870);
	button.setScale(0.14313, 0.1228);



	Texture squares;      //adding squares to jump on it
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares);
	squares_1.setTexture(squares);
	squares_1.setPosition(500, 800);
	squares_1.setScale(0.5, 0.5);


	Sprite squares_2(squares);
	squares_2.setTexture(squares);
	squares_2.setPosition(600, 710);
	squares_2.setScale(0.5, 0.5);


	Sprite squares_3(squares);
	squares_3.setTexture(squares);
	squares_3.setPosition(700, 640);
	squares_3.setScale(0.5, 0.5);


	Sprite squares_4(squares);
	squares_4.setTexture(squares);
	squares_4.setPosition(1120, 685);
	squares_4.setScale(0.5, 0.5);


	Sprite squares_5(squares);
	squares_5.setTexture(squares);
	squares_5.setPosition(1270, 640);
	squares_5.setScale(0.5, 0.5);

	Sprite squares_6(squares);
	squares_6.setTexture(squares);
	squares_6.setPosition(1200, 790);
	squares_6.setScale(0.5, 0.5);




	Texture pushtomove;
	pushtomove.loadFromFile("../Pico/moving wall.png");
	Sprite pushwall(pushtomove);
	pushwall.setTexture(pushtomove);
	pushwall.setPosition(2750, 670);
	pushwall.setScale(0.4, 0.4);

	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(2850, 750);
	key.setScale(0.2, 0.2);


	Texture door1;
	door1.loadFromFile("../Pico/closed.png");
	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(4800, 420);
	door.setScale(0.25, 0.25);

	Texture door2;
	door2.loadFromFile("../Pico/open.png");




	const int numSquares = 7; // Number of falling squares
	CircleShape fallingSquares[numSquares];

	for (int i = 0; i < numSquares; i++) {
		fallingSquares[i].setRadius(20);
		fallingSquares[i].setPointCount(4);
		fallingSquares[i].setOutlineThickness(1.5);
		fallingSquares[i].setOutlineColor(Color::Red);
		fallingSquares[i].setFillColor(Color::Transparent);
		fallingSquares[i].setScale(1.5, 1.5);
		fallingSquares[i].setPosition(3390 + i * 100, 580);
		fallingSquares[i].rotate(45);
	}

	Texture background;
	background.loadFromFile("../Assets/Texture/light-colors-geometric-pattern-abstract.jpg");
	Sprite Level1bg;
	Level1bg.setTexture(background);

	Texture thief;
	thief.loadFromFile("../Assets/Texture/ThiefSheet.png");

	Texture scientist;
	scientist.loadFromFile("../Assets/Texture/ScientistSheet.png");

	Texture builder;
	builder.loadFromFile("../Assets/Texture/BuilderSheet.png");

	Player Thief;
	Thief.pico.setTextureRect(IntRect(7, 118, 45, 63));
	Thief.sp(thief);

	Player Scientist;
	Scientist.pico.setTextureRect(IntRect(7, 118, 45, 63));
	Scientist.sp(scientist);

	Player Builder;
	Builder.pico.setTextureRect(IntRect(7, 118, 45, 63));
	Builder.sp(builder);

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	bool istouching = false;

	Clock clock;

	while (window.isOpen()) {

		//BUTTON

		if (button_ispressed) {
			buttonp.setTexture(buttpress);
			buttonp.setPosition(2000, 890);
			buttonp.setScale(0.1431, 0.13475);
			moving_wall.move(0, -0.15);
		}

		//THIEF COLLISION WITH MAP

		///////////////////////////////////////////////////key///////////////////////////////////////////////////////////////
		{

			if (whoisTouching == 0) {
				if (Thief.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
				{
					whoisTouching = 1;
				}
				if (Scientist.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
				{
					whoisTouching = 2;
				}
				if (Builder.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
				{
					whoisTouching = 3;
				}
				/*if (player4.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
				{
					whoisTouching = 4;
				}*/
			}
			if (whoisTouching == 1)
			{
				key.setScale(0.05, 0.05);
				key.setPosition(Thief.pico.getPosition().x + 12, Thief.pico.getPosition().y + 25);
			}
			else if (whoisTouching == 2)
			{
				key.setScale(0.05, 0.05);
				key.setPosition(Scientist.pico.getPosition().x + 12, Scientist.pico.getPosition().y + 25);
			}
			else if (whoisTouching == 3)
			{
				key.setScale(0.05, 0.05);
				key.setPosition(Builder.pico.getPosition().x + 12, Builder.pico.getPosition().y + 25);
			}/*else if (whoisTouching == 4)
			{
				key.setScale(0.05, 0.05);
				key.setPosition(Builder.pico.getPosition().x + 12, player4.pico.getPosition().y + 25);
			}*/

			////////////////////////////////////////////////
			//UNLOCKING THE DOOR
			if (isunlocked) {
				if (key.getGlobalBounds().intersects(door.getGlobalBounds()))
				{
					door.setTexture(door2);
					key.setColor(Color::Transparent);
					isunlocked = true;

				}
				if (Thief.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
				{
					Thief.pico.setColor(Color::Transparent);
					isinvisible[0] = true;
				}
				else {
					Thief.pico.setColor(Color::White);
					isinvisible[0] = false;
				}
				if (Scientist.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
				{
					Scientist.pico.setColor(Color::Transparent);
					isinvisible[1] = true;
				}
				else {
					Scientist.pico.setColor(Color::White);
					isinvisible[1] = false;
				}
				if (Builder.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
				{
					Builder.pico.setColor(Color::Transparent);
					isinvisible[2] = true;
				}
				else {
					Builder.pico.setColor(Color::White);
					isinvisible[2] = false;
				}
				/*if (player4.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
				{
					player4.pico.setColor(Color::Transparent);
					isinvisible[3] = true;
				}
				else {
					player4.pico.setColor(Color::White);
					isinvisible[3] = false;
				}*/

				int c = 0;
				for (int i = 0; i < 3; i++)
				{

					if (isinvisible[i]) {
						c++;
					}
				}
				if (c == 3)
				{
					// next level /
						window.close();
				}
			}
		}

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		//THIEF COLLISIONS WITH EVERYTHING
		{
			if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
					Thief.rect.left = squares_1.getPosition().x - 36;
				}

				else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
					Thief.rect.left = squares_1.getPosition().x + 55;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;


					if (Thief.rect.top > squares_1.getPosition().y + 55) { //down
						Thief.onground = false;
						Thief.move_y += 0.5;

					}

					else if (Thief.rect.top < squares_1.getPosition().y) {//jump

						Thief.onground = true;



					}

				}
			}




			if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
					Thief.rect.left = squares_2.getPosition().x - 36;
				}

				else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
					Thief.rect.left = squares_2.getPosition().x + 55;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;


					if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
						Thief.onground = false;
						Thief.move_y += 0.007;

					}

					else if (Thief.rect.top < squares_2.getPosition().y) {//jump

						Thief.onground = true;



					}

				}
			}




			if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
					Thief.rect.left = squares_3.getPosition().x - 36;
				}

				else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
					Thief.rect.left = squares_3.getPosition().x + 55;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;


					if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
						Thief.onground = false;
						Thief.move_y += 0.007;

					}

					else if (Thief.rect.top < squares_3.getPosition().y) {//jump

						Thief.onground = true;



					}

				}
			}

			if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
					Thief.rect.left = squares_4.getPosition().x - 36;
				}

				else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
					Thief.rect.left = squares_4.getPosition().x + 55;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;


					if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
						Thief.onground = false;
						Thief.move_y += 0.007;

					}

					else if (Thief.rect.top < squares_4.getPosition().y) {//jump

						Thief.onground = true;



					}

				}
			}

			if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
					Thief.rect.left = squares_5.getPosition().x - 36;
				}

				else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
					Thief.rect.left = squares_5.getPosition().x + 55;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;


					if (Thief.rect.top > squares_5.getPosition().y + 50) { //down
						Thief.onground = false;
						Thief.move_y += 0.007;

					}

					else if (Thief.rect.top < squares_5.getPosition().y) {//jump

						Thief.onground = true;



					}

				}
			}
			if (Thief.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= squares_6.getPosition().x) || (Thief.rect.left + 33 <= squares_6.getPosition().x)) { //right
					Thief.rect.left = squares_6.getPosition().x - 36;
				}

				else if ((Thief.rect.left >= squares_6.getPosition().x + 50) || (Thief.rect.left >= squares_6.getPosition().x + 50.5)) {//left
					Thief.rect.left = squares_6.getPosition().x + 55;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;


					if (Thief.rect.top > squares_6.getPosition().y + 50) { //down
						Thief.onground = false;
						Thief.move_y += 0.007;

					}

					else if (Thief.rect.top < squares_6.getPosition().y) {//jump

						Thief.onground = true;



					}

				}
			}

			if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
				if (Thief.rect.top > groundtex.getPosition().y - 48) {//jump
					Thief.move_y = 0;
					Thief.rect.top = groundtex.getPosition().y - 48;
					Thief.onground = true;
				}
			}


			if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= groundtex2.getPosition().x) || (Thief.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
					Thief.rect.left = groundtex2.getPosition().x - 36;
				}
				else if ((Thief.rect.left >= groundtex2.getPosition().x + 1960) || (Thief.rect.left >= groundtex2.getPosition().x + 1961)) {		//left
					Thief.rect.left = groundtex2.getPosition().x + 1965;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;


					if (Thief.rect.top > groundtex2.getPosition().y) {		//down
						Thief.rect.top = groundtex2.getPosition().y + 80;
						Thief.move_y += 0.5;
						Thief.onground = false;

					}

					else if (Thief.rect.top > groundtex2.getPosition().y) {		//jump
						Thief.move_y = 0;
						Thief.rect.top = groundtex2.getPosition().y - 30;
						Thief.onground = true;
					}
				}
			}


			if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= groundtex3.getPosition().x) || (Thief.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
					Thief.rect.left = groundtex3.getPosition().x - 36;
				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;
				}
			}


			if (Thief.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
				if ((Thief.rect.left + 31 <= wall_1.getPosition().x) || (Thief.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
					Thief.rect.left = wall_1.getPosition().x - 38;

				}
				else if ((Thief.rect.left >= wall_1.getPosition().x + 315) || (Thief.rect.left >= wall_1.getPosition().x + 316)) {//left to player
					Thief.rect.left = wall_1.getPosition().x + 318;

				}
				else {
					Thief.move_y = 0;
					Thief.onground = true;
				}

				if (Thief.rect.top < wall_1.getPosition().y - 55.5) {//jump
					Thief.move_y = 0;

					Thief.onground = true;
				}
			}




			if (Thief.pico.getGlobalBounds().intersects(moving_wall1.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= moving_wall1.getPosition().x) || (Thief.rect.left + 33 <= moving_wall1.getPosition().x)) { //right
					Thief.rect.left = moving_wall1.getPosition().x - 36;

				}
			}


			if (Thief.pico.getGlobalBounds().intersects(moving_wall.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= moving_wall.getPosition().x) || (Thief.rect.left + 33 <= moving_wall.getPosition().x)) { //right
					Thief.rect.left = moving_wall.getPosition().x - 36;
				}
			}










			if (Thief.pico.getGlobalBounds().intersects(pushwall.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= pushwall.getPosition().x) || (Thief.rect.left + 33 <= pushwall.getPosition().x)) {
					Thief.rect.left = pushwall.getPosition().x - 36;
					if (pushwall.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {}
					else {
						pushwall.move(0.4, 0);
					}



				}
			}

			if (Thief.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
				if ((Thief.rect.left + 32 <= wall_4.getPosition().x) || (Thief.rect.left + 33 <= wall_4.getPosition().x)) { //right
					Thief.rect.left = wall_4.getPosition().x - 36;

				}
			}

			//PLAYER COLLISION WITH BUTTON

			if (Thief.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

				if (Thief.rect.top < button.getPosition().y) {			//jump
					Thief.onground = true;
					button_ispressed = true;
					button.setScale(0, 0);
				}
			}

			if (Thief.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

				if (Thief.rect.top < buttonp.getPosition().y - 20) {			//jump
					Thief.rect.top = buttonp.getPosition().y - 48.5;
					Thief.onground = true;
					button_ispressed = true;
					button.setScale(0, 0);
				}

			}

			//MORE THIEF MAP COLLISION


			if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
				if (Thief.rect.top > groundtex4.getPosition().y - 1500) {
					Thief.rect.top = groundtex4.getPosition().y - 2000;
					Thief.rect.left = groundtex4.getPosition().x;
				}
			}


			//THIEF COLLISION WITH FALLING BLOCKS
			//NEED HELP

			for (int i = 0; i < numSquares; i++) {

				if (Thief.pico.getGlobalBounds().intersects(fallingSquares[i].getGlobalBounds())) {
					//if ((Thief.rect.left + 15 <= fallingSquares[i].getPosition().x) || (Thief.rect.left + 16 <= fallingSquares[i].getPosition().x)) { //right
					//	Thief.rect.left = fallingSquares[i].getPosition().x - 70;
					//}
					//else if ((Thief.rect.left >= fallingSquares[i].getPosition().x + 52) || (Thief.rect.left >= fallingSquares[i].getPosition().x + 53)) {//left
					//	Thief.rect.left = fallingSquares[i].getPosition().x + 54;
					//}
					if (Thief.rect.top >= fallingSquares[i].getPosition().y - 37 && Thief.rect.top <= fallingSquares[i].getPosition().y - 35) {
						Thief.rect.top = fallingSquares[i].getPosition().y - 37;
						Thief.onground = true;
						fallingSquares[i].move(0, 0.5);
					}
					if (fallingSquares[i].getPosition().y > groundtex4.getPosition().y - 650) {
						fallingSquares[i].setPosition(3390 + i * 100, 580);
						Thief.onground = 0;
						key.setPosition(2850, 750);
						key.setScale(0.2, 0.2);
					}
				}
			}

			////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		}

		//SCIENTIST COLLISIONS WITH EVERYTHING
		{} //idk what that is but it makes things work, do not touch.
		{
			if (Scientist.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= squares_1.getPosition().x) || (Scientist.rect.left + 33 <= squares_1.getPosition().x)) { //right
					Scientist.rect.left = squares_1.getPosition().x - 36;
				}

				else if ((Scientist.rect.left >= squares_1.getPosition().x + 50) || (Scientist.rect.left >= squares_1.getPosition().x + 50.5)) {//left
					Scientist.rect.left = squares_1.getPosition().x + 55;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;


					if (Scientist.rect.top > squares_1.getPosition().y + 55) { //down
						Scientist.onground = false;
						Scientist.move_y += 0.5;

					}

					else if (Scientist.rect.top < squares_1.getPosition().y) {//jump

						Scientist.onground = true;



					}

				}
			}




			if (Scientist.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= squares_2.getPosition().x) || (Scientist.rect.left + 33 <= squares_2.getPosition().x)) { //right
					Scientist.rect.left = squares_2.getPosition().x - 36;
				}

				else if ((Scientist.rect.left >= squares_2.getPosition().x + 50) || (Scientist.rect.left >= squares_2.getPosition().x + 50.5)) {//left
					Scientist.rect.left = squares_2.getPosition().x + 55;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;


					if (Scientist.rect.top > squares_2.getPosition().y + 50) { //down
						Scientist.onground = false;
						Scientist.move_y += 0.007;

					}

					else if (Scientist.rect.top < squares_2.getPosition().y) {//jump

						Scientist.onground = true;



					}

				}
			}



			if (Scientist.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= squares_3.getPosition().x) || (Scientist.rect.left + 33 <= squares_3.getPosition().x)) { //right
					Scientist.rect.left = squares_3.getPosition().x - 36;
				}

				else if ((Scientist.rect.left >= squares_3.getPosition().x + 50) || (Scientist.rect.left >= squares_3.getPosition().x + 50.5)) {//left
					Scientist.rect.left = squares_3.getPosition().x + 55;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;


					if (Scientist.rect.top > squares_3.getPosition().y + 50) { //down
						Scientist.onground = false;
						Scientist.move_y += 0.007;

					}

					else if (Scientist.rect.top < squares_3.getPosition().y) {//jump

						Scientist.onground = true;



					}

				}
			}


			if (Scientist.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= squares_4.getPosition().x) || (Scientist.rect.left + 33 <= squares_4.getPosition().x)) { //right
					Scientist.rect.left = squares_4.getPosition().x - 36;
				}

				else if ((Scientist.rect.left >= squares_4.getPosition().x + 50) || (Scientist.rect.left >= squares_4.getPosition().x + 50.5)) {//left
					Scientist.rect.left = squares_4.getPosition().x + 55;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;


					if (Scientist.rect.top > squares_4.getPosition().y + 50) { //down
						Scientist.onground = false;
						Scientist.move_y += 0.007;

					}

					else if (Scientist.rect.top < squares_4.getPosition().y) {//jump

						Scientist.onground = true;



					}

				}
			}

			if (Scientist.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= squares_5.getPosition().x) || (Scientist.rect.left + 33 <= squares_5.getPosition().x)) { //right
					Scientist.rect.left = squares_5.getPosition().x - 36;
				}

				else if ((Scientist.rect.left >= squares_5.getPosition().x + 50) || (Scientist.rect.left >= squares_5.getPosition().x + 50.5)) {//left
					Scientist.rect.left = squares_5.getPosition().x + 55;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;


					if (Scientist.rect.top > squares_5.getPosition().y + 50) { //down
						Scientist.onground = false;
						Scientist.move_y += 0.007;

					}

					else if (Scientist.rect.top < squares_5.getPosition().y) {//jump

						Scientist.onground = true;



					}

				}
			}


			if (Scientist.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= squares_6.getPosition().x) || (Scientist.rect.left + 33 <= squares_6.getPosition().x)) { //right
					Scientist.rect.left = squares_6.getPosition().x - 36;
				}

				else if ((Scientist.rect.left >= squares_6.getPosition().x + 50) || (Scientist.rect.left >= squares_6.getPosition().x + 50.5)) {//left
					Scientist.rect.left = squares_6.getPosition().x + 55;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;


					if (Scientist.rect.top > squares_6.getPosition().y + 50) { //down
						Scientist.onground = false;
						Scientist.move_y += 0.007;

					}

					else if (Scientist.rect.top < squares_6.getPosition().y) {//jump

						Scientist.onground = true;



					}

				}
			}

			if (Scientist.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
				if (Scientist.rect.top > groundtex.getPosition().y - 48) {//jump
					Scientist.move_y = 0;
					Scientist.rect.top = groundtex.getPosition().y - 48;
					Scientist.onground = true;
				}
			}


			if (Scientist.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= groundtex2.getPosition().x) || (Scientist.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
					Scientist.rect.left = groundtex2.getPosition().x - 36;
				}
				else if ((Scientist.rect.left >= groundtex2.getPosition().x + 1960) || (Scientist.rect.left >= groundtex2.getPosition().x + 1961)) {		//left
					Scientist.rect.left = groundtex2.getPosition().x + 1965;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;


					if (Scientist.rect.top > groundtex2.getPosition().y) {		//down
						Scientist.rect.top = groundtex2.getPosition().y + 80;
						Scientist.move_y += 0.5;
						Scientist.onground = false;

					}

					else if (Scientist.rect.top > groundtex2.getPosition().y) {		//jump
						Scientist.move_y = 0;
						Scientist.rect.top = groundtex2.getPosition().y - 30;
						Scientist.onground = true;
					}
				}
			}


			if (Scientist.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= groundtex3.getPosition().x) || (Scientist.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
					Scientist.rect.left = groundtex3.getPosition().x - 36;
				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;
				}
			}


			if (Scientist.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
				if ((Scientist.rect.left + 31 <= wall_1.getPosition().x) || (Scientist.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
					Scientist.rect.left = wall_1.getPosition().x - 38;

				}
				else if ((Scientist.rect.left >= wall_1.getPosition().x + 315) || (Scientist.rect.left >= wall_1.getPosition().x + 316)) {//left to player
					Scientist.rect.left = wall_1.getPosition().x + 318;

				}
				else {
					Scientist.move_y = 0;
					Scientist.onground = true;
				}

				if (Scientist.rect.top < wall_1.getPosition().y - 55.5) {//jump
					Scientist.move_y = 0;

					Scientist.onground = true;
				}
			}





			if (Scientist.pico.getGlobalBounds().intersects(moving_wall1.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= moving_wall1.getPosition().x) || (Scientist.rect.left + 33 <= moving_wall1.getPosition().x)) { //right
					Scientist.rect.left = moving_wall1.getPosition().x - 36;

				}
			}


			if (Scientist.pico.getGlobalBounds().intersects(moving_wall.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= moving_wall.getPosition().x) || (Scientist.rect.left + 33 <= moving_wall.getPosition().x)) { //right
					Scientist.rect.left = moving_wall.getPosition().x - 36;
				}
			}










			if (Scientist.pico.getGlobalBounds().intersects(pushwall.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= pushwall.getPosition().x) || (Scientist.rect.left + 33 <= pushwall.getPosition().x)) {
					Scientist.rect.left = pushwall.getPosition().x - 36;
					if (pushwall.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {}
					else {
						pushwall.move(0.4, 0);
					}



				}
			}

			if (Scientist.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
				if ((Scientist.rect.left + 32 <= wall_4.getPosition().x) || (Scientist.rect.left + 33 <= wall_4.getPosition().x)) { //right
					Scientist.rect.left = wall_4.getPosition().x - 36;

				}
			}

			//PLAYER COLLISION WITH BUTTON

			if (Scientist.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

				if (Scientist.rect.top < button.getPosition().y) {			//jump
					Scientist.onground = true;
					button_ispressed = true;
					button.setScale(0, 0);
				}
			}

			if (Scientist.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

				if (Scientist.rect.top < buttonp.getPosition().y - 20) {			//jump
					Scientist.rect.top = buttonp.getPosition().y - 48.5;
					Scientist.onground = true;
					button_ispressed = true;
					button.setScale(0, 0);
				}

			}

			//MORE THIEF MAP COLLISION


			if (Scientist.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
				if (Scientist.rect.top > groundtex4.getPosition().y - 1500) {
					Scientist.rect.top = groundtex4.getPosition().y - 2000;
					Scientist.rect.left = groundtex4.getPosition().x;
				}
			}


			//THIEF COLLISION WITH FALLING BLOCKS
			//NEED HELP

			for (int i = 0; i < numSquares; i++) {

				if (Scientist.pico.getGlobalBounds().intersects(fallingSquares[i].getGlobalBounds())) {
					//if ((Scientist.rect.left + 15 <= fallingSquares[i].getPosition().x) || (Scientist.rect.left + 16 <= fallingSquares[i].getPosition().x)) { //right
					//	Scientist.rect.left = fallingSquares[i].getPosition().x - 70;
					//}
					//else if ((Scientist.rect.left >= fallingSquares[i].getPosition().x + 52) || (Scientist.rect.left >= fallingSquares[i].getPosition().x + 53)) {//left
					//	Scientist.rect.left = fallingSquares[i].getPosition().x + 54;
					//}
					if (Scientist.rect.top >= fallingSquares[i].getPosition().y - 37 && Scientist.rect.top <= fallingSquares[i].getPosition().y - 35) {
						Scientist.rect.top = fallingSquares[i].getPosition().y - 37;
						Scientist.onground = true;
						fallingSquares[i].move(0, 0.5);
					}
					if (fallingSquares[i].getPosition().y > groundtex4.getPosition().y - 650) {
						fallingSquares[i].setPosition(3390 + i * 100, 580);
						Scientist.onground = 0;
						key.setPosition(2850, 750);
						key.setScale(0.2, 0.2);
					}
				}
			}

		}

		//BUILDER COLLISION WITH EVERYTHING
		{} //idk what that is but it makes things work, do not touch.
		{
			if (Builder.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= squares_1.getPosition().x) || (Builder.rect.left + 33 <= squares_1.getPosition().x)) { //right
					Builder.rect.left = squares_1.getPosition().x - 36;
				}

				else if ((Builder.rect.left >= squares_1.getPosition().x + 50) || (Builder.rect.left >= squares_1.getPosition().x + 50.5)) {//left
					Builder.rect.left = squares_1.getPosition().x + 55;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;


					if (Builder.rect.top > squares_1.getPosition().y + 55) { //down
						Builder.onground = false;
						Builder.move_y += 0.5;

					}

					else if (Builder.rect.top < squares_1.getPosition().y) {//jump

						Builder.onground = true;



					}

				}
			}




			if (Builder.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= squares_2.getPosition().x) || (Builder.rect.left + 33 <= squares_2.getPosition().x)) { //right
					Builder.rect.left = squares_2.getPosition().x - 36;
				}

				else if ((Builder.rect.left >= squares_2.getPosition().x + 50) || (Builder.rect.left >= squares_2.getPosition().x + 50.5)) {//left
					Builder.rect.left = squares_2.getPosition().x + 55;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;


					if (Builder.rect.top > squares_2.getPosition().y + 50) { //down
						Builder.onground = false;
						Builder.move_y += 0.007;

					}

					else if (Builder.rect.top < squares_2.getPosition().y) {//jump

						Builder.onground = true;



					}

				}
			}



			if (Builder.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= squares_3.getPosition().x) || (Builder.rect.left + 33 <= squares_3.getPosition().x)) { //right
					Builder.rect.left = squares_3.getPosition().x - 36;
				}

				else if ((Builder.rect.left >= squares_3.getPosition().x + 50) || (Builder.rect.left >= squares_3.getPosition().x + 50.5)) {//left
					Builder.rect.left = squares_3.getPosition().x + 55;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;


					if (Builder.rect.top > squares_3.getPosition().y + 50) { //down
						Builder.onground = false;
						Builder.move_y += 0.007;

					}

					else if (Builder.rect.top < squares_3.getPosition().y) {//jump

						Builder.onground = true;



					}

				}
			}
			if (Builder.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= squares_4.getPosition().x) || (Builder.rect.left + 33 <= squares_4.getPosition().x)) { //right
					Builder.rect.left = squares_4.getPosition().x - 36;
				}

				else if ((Builder.rect.left >= squares_4.getPosition().x + 50) || (Builder.rect.left >= squares_4.getPosition().x + 50.5)) {//left
					Builder.rect.left = squares_4.getPosition().x + 55;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;


					if (Builder.rect.top > squares_4.getPosition().y + 50) { //down
						Builder.onground = false;
						Builder.move_y += 0.007;

					}

					else if (Builder.rect.top < squares_4.getPosition().y) {//jump

						Builder.onground = true;



					}

				}
			}

			if (Builder.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= squares_5.getPosition().x) || (Builder.rect.left + 33 <= squares_5.getPosition().x)) { //right
					Builder.rect.left = squares_5.getPosition().x - 36;
				}

				else if ((Builder.rect.left >= squares_5.getPosition().x + 50) || (Builder.rect.left >= squares_5.getPosition().x + 50.5)) {//left
					Builder.rect.left = squares_5.getPosition().x + 55;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;


					if (Builder.rect.top > squares_5.getPosition().y + 50) { //down
						Builder.onground = false;
						Builder.move_y += 0.007;

					}

					else if (Builder.rect.top < squares_5.getPosition().y) {//jump

						Builder.onground = true;



					}

				}
			}

			if (Builder.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= squares_6.getPosition().x) || (Builder.rect.left + 33 <= squares_6.getPosition().x)) { //right
					Builder.rect.left = squares_6.getPosition().x - 36;
				}

				else if ((Builder.rect.left >= squares_6.getPosition().x + 50) || (Builder.rect.left >= squares_6.getPosition().x + 50.5)) {//left
					Builder.rect.left = squares_6.getPosition().x + 55;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;


					if (Builder.rect.top > squares_6.getPosition().y + 50) { //down
						Builder.onground = false;
						Builder.move_y += 0.007;

					}

					else if (Builder.rect.top < squares_6.getPosition().y) {//jump

						Builder.onground = true;



					}

				}
			}

			if (Builder.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
				if (Builder.rect.top > groundtex.getPosition().y - 48) {//jump
					Builder.move_y = 0;
					Builder.rect.top = groundtex.getPosition().y - 48;
					Builder.onground = true;
				}
			}


			if (Builder.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= groundtex2.getPosition().x) || (Builder.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
					Builder.rect.left = groundtex2.getPosition().x - 36;
				}
				else if ((Builder.rect.left >= groundtex2.getPosition().x + 1960) || (Builder.rect.left >= groundtex2.getPosition().x + 1961)) {		//left
					Builder.rect.left = groundtex2.getPosition().x + 1965;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;


					if (Builder.rect.top > groundtex2.getPosition().y) {		//down
						Builder.rect.top = groundtex2.getPosition().y + 80;
						Builder.move_y += 0.5;
						Builder.onground = false;

					}

					else if (Builder.rect.top > groundtex2.getPosition().y) {		//jump
						Builder.move_y = 0;
						Builder.rect.top = groundtex2.getPosition().y - 30;
						Builder.onground = true;
					}
				}
			}


			if (Builder.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= groundtex3.getPosition().x) || (Builder.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
					Builder.rect.left = groundtex3.getPosition().x - 36;
				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;
				}
			}


			if (Builder.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
				if ((Builder.rect.left + 31 <= wall_1.getPosition().x) || (Builder.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
					Builder.rect.left = wall_1.getPosition().x - 38;

				}
				else if ((Builder.rect.left >= wall_1.getPosition().x + 315) || (Builder.rect.left >= wall_1.getPosition().x + 316)) {//left to player
					Builder.rect.left = wall_1.getPosition().x + 318;

				}
				else {
					Builder.move_y = 0;
					Builder.onground = true;
				}

				if (Builder.rect.top < wall_1.getPosition().y - 55.5) {//jump
					Builder.move_y = 0;

					Builder.onground = true;
				}
			}





			if (Builder.pico.getGlobalBounds().intersects(moving_wall1.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= moving_wall1.getPosition().x) || (Builder.rect.left + 33 <= moving_wall1.getPosition().x)) { //right
					Builder.rect.left = moving_wall1.getPosition().x - 36;

				}
			}


			if (Builder.pico.getGlobalBounds().intersects(moving_wall.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= moving_wall.getPosition().x) || (Builder.rect.left + 33 <= moving_wall.getPosition().x)) { //right
					Builder.rect.left = moving_wall.getPosition().x - 36;
				}
			}










			if (Builder.pico.getGlobalBounds().intersects(pushwall.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= pushwall.getPosition().x) || (Builder.rect.left + 33 <= pushwall.getPosition().x)) {
					Builder.rect.left = pushwall.getPosition().x - 36;
					if (pushwall.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {}
					else {
						pushwall.move(0.4, 0);
					}



				}
			}

			if (Builder.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
				if ((Builder.rect.left + 32 <= wall_4.getPosition().x) || (Builder.rect.left + 33 <= wall_4.getPosition().x)) { //right
					Builder.rect.left = wall_4.getPosition().x - 36;

				}
			}

			//PLAYER COLLISION WITH BUTTON

			if (Builder.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

				if (Builder.rect.top < button.getPosition().y) {			//jump
					Builder.onground = true;
					button_ispressed = true;
					button.setScale(0, 0);
				}
			}

			if (Builder.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

				if (Builder.rect.top < buttonp.getPosition().y - 20) {			//jump
					Builder.rect.top = buttonp.getPosition().y - 48.5;
					Builder.onground = true;
					button_ispressed = true;
					button.setScale(0, 0);
				}

			}

			//MORE BUILDER MAP COLLISION


			if (Builder.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
				if (Builder.rect.top > groundtex4.getPosition().y - 1500) {
					Builder.rect.top = groundtex4.getPosition().y - 2000;
					Builder.rect.left = groundtex4.getPosition().x;
				}
			}


			//BUILDER COLLISION WITH FALLING BLOCKS
			//NEED HELP

			for (int i = 0; i < numSquares; i++) {

				if (Builder.pico.getGlobalBounds().intersects(fallingSquares[i].getGlobalBounds())) {
					//if ((Builder.rect.left + 15 <= fallingSquares[i].getPosition().x) || (Builder.rect.left + 16 <= fallingSquares[i].getPosition().x)) { //right
					//	Builder.rect.left = fallingSquares[i].getPosition().x - 70;
					//}
					//else if ((Builder.rect.left >= fallingSquares[i].getPosition().x + 52) || (Builder.rect.left >= fallingSquares[i].getPosition().x + 53)) {//left
					//	Builder.rect.left = fallingSquares[i].getPosition().x + 54;
					//}
					if (Builder.rect.top >= fallingSquares[i].getPosition().y - 37 && Builder.rect.top <= fallingSquares[i].getPosition().y - 35) {
						Builder.rect.top = fallingSquares[i].getPosition().y - 37;
						Builder.onground = true;
						fallingSquares[i].move(0, 0.5);
					}
					if (fallingSquares[i].getPosition().y > groundtex4.getPosition().y - 1000) {
						fallingSquares[i].setPosition(3390 + i * 100, 580);
						Builder.onground = 0;
						key.setPosition(2850, 750);
						key.setScale(0.2, 0.2);
					}
				}
			}
		}


		//MOVEMENT

		float time = clock.getElapsedTime().asMicroseconds();
		clock.restart();
		time /= 650;
		if (time > 20) {
			time = 0;
		}

		//Thief Movement
		{
			if (Thief.LastKeyPressed == 1 && Thief.onground == true) {
				Thief.pico.setTextureRect(IntRect(7, 118, 45, 61));
			}

			if (Thief.LastKeyPressed == 2 && Thief.onground == true) {
				Thief.pico.setTextureRect(IntRect(7 + 45, 118, -45, 61));
			}

			if (Keyboard::isKeyPressed(Keyboard::D)) {
				Thief.move_x = 0.2;
				Thief.LastKeyPressed = 1;
			}


			if (Keyboard::isKeyPressed(Keyboard::A)) {
				Thief.move_x = -0.2;
				Thief.LastKeyPressed = 2;
			}


			if (Keyboard::isKeyPressed(Keyboard::W)) {
				if (Thief.onground && istouching == false) {
					Thief.move_y = -0.4;
					Thief.onground = false;
				}
			}
		}

		//Scientist Movement
		{
			if (Scientist.LastKeyPressed == 1 && Scientist.onground == true) {
				Scientist.pico.setTextureRect(IntRect(7, 118, 45, 61));
			}

			if (Scientist.LastKeyPressed == 2 && Scientist.onground == true) {
				Scientist.pico.setTextureRect(IntRect(7 + 45, 118, -45, 61));
			}

			if (Keyboard::isKeyPressed(Keyboard::H)) {
				Scientist.move_x = 0.2;
				Scientist.LastKeyPressed = 1;
			}


			if (Keyboard::isKeyPressed(Keyboard::F)) {
				Scientist.move_x = -0.2;
				Scientist.LastKeyPressed = 2;
			}


			if (Keyboard::isKeyPressed(Keyboard::T)) {
				if (Scientist.onground && istouching == false) {
					Scientist.move_y = -0.4;
					Scientist.onground = false;
				}
			}

		}

		//Builder Movement
		{
			if (Builder.LastKeyPressed == 1 && Builder.onground == true) {
				Builder.pico.setTextureRect(IntRect(7, 118, 45, 61));
			}

			if (Builder.LastKeyPressed == 2 && Builder.onground == true) {
				Builder.pico.setTextureRect(IntRect(7 + 45, 118, -45, 61));
			}

			if (Keyboard::isKeyPressed(Keyboard::L)) {
				Builder.move_x = 0.2;
				Builder.LastKeyPressed = 1;
			}


			if (Keyboard::isKeyPressed(Keyboard::J)) {
				Builder.move_x = -0.2;
				Builder.LastKeyPressed = 2;
			}


			if (Keyboard::isKeyPressed(Keyboard::I)) {
				if (Builder.onground && istouching == false) {
					Builder.move_y = -0.4;
					Builder.onground = false;
				}
			}

		}

		////CAMERA MOVEMENT
		//{
		//	if (Keyboard::isKeyPressed(Keyboard::Left))
		//	{
		//		view.move(-3, 0);

		//	}
		//	if (Keyboard::isKeyPressed(Keyboard::Right))
		//	{
		//		view.move(3, 0);

		//	}
		//	if (Keyboard::isKeyPressed(Keyboard::Up))
		//	{
		//		view.move(0, -3);

		//	}
		//	if (Keyboard::isKeyPressed(Keyboard::Down))
		//	{
		//		view.move(0, 3);

		//	}
		//}
		view.setCenter((Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x) / 3, 600);

		view.setSize(1536, 864);

		//EVENT HAS TO BE ABOVE DRAW AFTER EVERYTHING

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
		}

		window.setView(view);

		Thief.update(time);
		Scientist.update(time);
		Builder.update(time);

		window.clear(Color(250, 200, 152)); //adding background color 

		//DRAWING EVERYTHING

		window.draw(pushwall);
		window.draw(moving_wall1);
		window.draw(groundtex);
		window.draw(groundtex3);
		window.draw(groundtex4);
		window.draw(wall_2);
		window.draw(wall_1);
		window.draw(wall_3);
		window.draw(wall_4);
		window.draw(squares_1);
		window.draw(squares_2);
		window.draw(squares_3);
		window.draw(squares_4);
		window.draw(squares_5);
		window.draw(squares_6);
		window.draw(groundtex2);
		window.draw(button);
		window.draw(buttonp);
		window.draw(moving_wall);
		for (int i = 0; i < numSquares; i++)
			window.draw(fallingSquares[i]);
		window.draw(door);
		window.draw(Thief.pico);
		window.draw(Scientist.pico);
		window.draw(Builder.pico);
		window.draw(key);
		window.display();
	}
}