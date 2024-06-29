#pragma once
#include "Initialization.h"
#include "player struct.h"
#include "Thief.h"
#include "Scientist.h"
#include "Builder.h"
#include "astronaut.h"
#include "Player Collision.h"
#include "Key.h"
#include "Movement.h"
#include "Paused.h"
#include "Reset.h"




void Level1(RenderWindow& window, int& pagenum)
{
	View menu = window.getDefaultView();
	View view = window.getDefaultView();

	// SOUNDS

	Music buttonsound;
	buttonsound.openFromFile("../Assets/Sounds/button.mp3");
	Music unlock;
	unlock.openFromFile("../Assets/Sounds/door.mp3");

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
	groundtex3.setScale(3, 10);

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
	wall_2.setPosition(-200-970.5, -105);
	wall_2.setScale(2, 2);


	Sprite wall_3(wall);
	wall_3.setTexture(wall);
	wall_3.setPosition(2000, -250);
	wall_3.setScale(1, 1);



	Sprite wall_4(wall);
	wall_4.setTexture(wall);
	wall_4.setPosition(5000, -2500);
	wall_4.setScale(2, 5);


	Texture mov_wall;
	mov_wall.loadFromFile("../Pico/wall2.png");
	Sprite moving_wall;
	moving_wall.setTexture(mov_wall);
	moving_wall.setPosition(2250, 210);
	moving_wall.setScale(1, 1);


	Sprite moving_wall1;
	moving_wall1.setTexture(mov_wall);
	moving_wall1.setPosition(3058, 620);
	moving_wall1.setScale(2.91, 10);


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
	door.setPosition(4800, 475);
	door.setScale(0.25, 0.25);

	Texture door2;
	door2.loadFromFile("../Pico/open.png");




	const int numSquares = 4; // Number of falling squares
	CircleShape fallingSquares[numSquares];

	for (int i = 0; i < numSquares; i++) {
		fallingSquares[i].setRadius(20);
		fallingSquares[i].setPointCount(4);
		fallingSquares[i].setOutlineThickness(1.5);
		fallingSquares[i].setOutlineColor(Color::Red);
		fallingSquares[i].setFillColor(Color::Transparent);
		fallingSquares[i].setScale(1.5, 1.5);
		fallingSquares[i].setPosition(3390 + i * 200, 580);
		fallingSquares[i].rotate(45);
	}

	
	////////////////////////////////////////////   SPRITES   ///////////////////////////////////////

	Texture thief;
	thief.loadFromFile("../Assets/Texture/ThiefSheet.png");

	Texture thiefmask;
	thiefmask.loadFromFile("../Assets/Texture/ThiefMaskSheet.png");

	Texture scientist;
	scientist.loadFromFile("../Assets/Texture/ScientistSheet.png");

	Texture builder;
	builder.loadFromFile("../Assets/Texture/BuilderSheet.png");

	Texture astronaut;
	astronaut.loadFromFile("../Assets/Texture/AstroSheet.png");

	Texture astronautmask;
	astronautmask.loadFromFile("../Assets/Texture/AstroMaskSheet.png");


	Player Thief;
	Thief.pico.setTextureRect(IntRect(7, 118, 45, 63));
	Thief.sp(thief);
	Thief.pico.setScale(0.8, 0.8);

	Player Scientist;
	Scientist.pico.setTextureRect(IntRect(7, 118, 45, 63));
	Scientist.sp(scientist);
	Scientist.pico.setScale(0.8, 0.8);

	Player Builder;
	Builder.pico.setTextureRect(IntRect(7, 118, 45, 63));
	Builder.sp(builder);
	Builder.pico.setScale(0.8, 0.8);

	Player Astronaut;
	Astronaut.pico.setTextureRect(IntRect(7, 118, 45, 63));
	Astronaut.sp(astronaut);
	Astronaut.pico.setScale(0.8, 0.8);


	RectangleShape top1;
	top1.setSize(Vector2f(24, 3));
	top1.setFillColor(Color::Red);

	RectangleShape top2;
	top2.setSize(Vector2f(24, 3));
	top2.setFillColor(Color::Red);

	RectangleShape top3;
	top3.setSize(Vector2f(24, 3));
	top3.setFillColor(Color::Red);

	RectangleShape top4;
	top4.setSize(Vector2f(24, 3));
	top4.setFillColor(Color::Red);

	RectangleShape down1;
	down1.setSize(Vector2f(35, 3));
	down1.setFillColor(Color::Red);

	RectangleShape down2;
	down2.setSize(Vector2f(35, 3));
	down2.setFillColor(Color::Red);

	RectangleShape down3;
	down3.setSize(Vector2f(35, 3));
	down3.setFillColor(Color::Red);

	RectangleShape down4;
	down4.setSize(Vector2f(35, 3));
	down4.setFillColor(Color::Red);

	RectangleShape left1;
	left1.setSize(Vector2f(7, 47));
	left1.setFillColor(Color::Red);

	RectangleShape left2;
	left2.setSize(Vector2f(7, 47));
	left2.setFillColor(Color::Red);

	RectangleShape left3;
	left3.setSize(Vector2f(7, 47));
	left3.setFillColor(Color::Red);

	RectangleShape left4;
	left4.setSize(Vector2f(7, 47));
	left4.setFillColor(Color::Red);

	RectangleShape right1;
	right1.setSize(Vector2f(7, 47));
	right1.setFillColor(Color::Red);

	RectangleShape right2;
	right2.setSize(Vector2f(7, 47));
	right2.setFillColor(Color::Red);

	RectangleShape right3;
	right3.setSize(Vector2f(7, 47));
	right3.setFillColor(Color::Red);

	RectangleShape right4;
	right4.setSize(Vector2f(7, 47));
	right4.setFillColor(Color::Red);

	////////////////////////////////////////////// HINTS ////////////////////////////////////////////

	Texture hint1;
	hint1.loadFromFile("../Assets/Texture/level1 1.png");//adding ground texture
	Sprite Hint1(hint1);
	Hint1.setTexture(hint1);
	Hint1.setPosition(180, 400);
	Hint1.setScale(0.7, 0.7);

	Texture hint2;
	hint2.loadFromFile("../Assets/Texture/level1 2.png");//adding ground texture
	Sprite Hint2(hint2);
	Hint2.setTexture(hint2);
	Hint2.setPosition(1870, 725);
	Hint2.setScale(0.7, 0.7);

	Texture hint3;
	hint3.loadFromFile("../Assets/Texture/level1 3.png");//adding ground texture
	Sprite Hint3(hint3);
	Hint3.setTexture(hint3);
	Hint3.setPosition(2420, 718);
	Hint3.setScale(0.6, 0.6);

	////////////////////////////////////////////// OVERALL //////////////////////////////////////////

	RectangleShape pausescreen;
	pausescreen.setSize(Vector2f(192000, 108000));
	pausescreen.setPosition(-100000, -54000);
	pausescreen.setFillColor(Color(250, 200, 152, 128));

	Sprite death(ground);
	death.setTexture(ground);
	death.setPosition(-2000, 2000);
	death.setScale(200, 1);


	Sprite death_ceiling(ground);
	death_ceiling.setTexture(ground);
	death_ceiling.setPosition(-2000, -500);
	death_ceiling.setScale(200, 2);


	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//DEATH SCREEN

	Texture thiefdeath;
	thiefdeath.loadFromFile("../Assets/Texture/deadthief.png");
	Sprite Tdeath(thiefdeath);
	Tdeath.setTexture(thiefdeath);
	Tdeath.setScale(1 / 1.25, 1 / 1.25);

	Texture scientistdeath;
	scientistdeath.loadFromFile("../Assets/Texture/deadscience.png");
	Sprite Sdeath(scientistdeath);
	Sdeath.setTexture(scientistdeath);
	Sdeath.setScale(1 / 1.25, 1 / 1.25);

	Texture builderdeath;
	builderdeath.loadFromFile("../Assets/Texture/deadbuilder.png");
	Sprite Bdeath(builderdeath);
	Bdeath.setTexture(builderdeath);
	Bdeath.setScale(1 / 1.25, 1 / 1.25);

	Texture astrodeath;
	astrodeath.loadFromFile("../Assets/Texture/deadastro.png");
	Sprite Adeath(astrodeath);
	Adeath.setTexture(astrodeath);
	Adeath.setScale(1 / 1.25, 1 / 1.25);

	Texture Admin;
	Admin.loadFromFile("../Assets/Texture/admin.png");

	Sprite admin;
	admin.setTexture(Admin);
	admin.setOrigin(65, 85);
	admin.setScale(0.5, 0.5);
	admin.setPosition(-2000, -2000);

	Clock loading1;

	Texture loading;
	loading.loadFromFile("../Assets/Texture/loading screen.png");

	Sprite ls;
	ls.setTexture(loading);
	ls.setOrigin(1920 / 2, 1080 / 2);
	ls.setScale(0, 0);

	int rand_sec = 1 + rand() % 5;

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	left_wall = 100;


	Clock clock;
	Clock clock3;



	while (window.isOpen()) {

		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(100, 100);
			Scientist.start(175, 100);
			Builder.start(250, 100);
			Astronaut.start(325, 100);
		}

		//BUTTON

		if (button_ispressed) {
			if (pause == false) {
				buttonp.setTexture(buttpress);
				buttonp.setPosition(2000, 890);
				buttonp.setScale(0.1431, 0.13475);
				moving_wall.move(0, -0.15);
				if (playsound == 0)
				{
					buttonsound.play();
					for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
					playsound++;
				}
			}
		}
		
		

		if (Key(window, Thief, Scientist, Builder, Astronaut, key, door, door2, pagenum,admin))
		{
			


			if(!freeplay){
				if(!drawls)
					loading1.restart();
				drawls = true;
				admin_powers = false;

				ofstream outputFile("progress.txt");

				progress = 1;
				outputFile << 1 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 2;
				Reset();
				return;
			}
			
		}

		how_many_touching = 0;
		
		//door sound

		if (dooropen) {
			if (doorsound == 0) {
				unlock.play();
				for (int i = 0; unlock.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				doorsound++;
			}
		}
		

		//THIEF COLLISIONS WITH EVERYTHING

		Thief_collision1(Thief, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, fallingSquares, groundtex, groundtex2, groundtex3, groundtex4, wall_1, wall_2, wall_3, wall_4, moving_wall, moving_wall1, pushwall, button, buttonp, button_ispressed, numSquares,death);

		//SCIENTIST COLLISIONS WITH EVERYTHING

		Scientist_collision1(Scientist, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, fallingSquares, groundtex, groundtex2, groundtex3, groundtex4, wall_1, wall_2, wall_3, wall_4, moving_wall, moving_wall1, pushwall, button, buttonp, button_ispressed, numSquares, death);

		//BUILDER COLLISION WITH EVERYTHING

		Builder_collision1(Builder, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, fallingSquares, groundtex, groundtex2, groundtex3, groundtex4, wall_1, wall_2, wall_3, wall_4, moving_wall, moving_wall1, pushwall, button, buttonp, button_ispressed, numSquares, death);
		//ASTRONAUT COLLISION WITH EVERYTING

		Astronaut_collision1(Astronaut, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, fallingSquares, groundtex, groundtex2, groundtex3, groundtex4, wall_1, wall_2, wall_3, wall_4, moving_wall, moving_wall1, pushwall, button, buttonp, button_ispressed, numSquares, death);

		////////////////////////////////////////////////////////////////////////////////////////////////////////////////


		timer1++;
		timer2++;
		
		

		players_movment(window, Thief, Scientist, Builder, Astronaut, clock,left_wall, right_wall);

		player_collision(window, Thief, Scientist, Builder, Astronaut, top1, top2, top3, top4, left1, left2, left3, left4, right1, right2, right3, right4,down1, down2, down3, down4);


		//CAMERA MOVEMENT

			 
			if (Keyboard::isKeyPressed(Keyboard::Left))
			{
				view.move(-10, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Right))
			{
				view.move(10, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Up))
			{
				view.move(0, -10);
			}
			if (Keyboard::isKeyPressed(Keyboard::Down))
			{
				view.move(0, 10);
			}
				
			
		int midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x + Astronaut.pico.getPosition().x) / 4;
		view.setCenter(midx, 600);
		view.setSize(1920 / 1.125, 1080 / 1.125);
		
		screenratio = 1.125 / 1.125;
		
		//////////////////////////////////////////
		/////////////////// pause menu
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,600);
		sel = paused.pressed();

		if (pause == true)
		{
			if ((Keyboard::isKeyPressed(Keyboard::Left)) || (Keyboard::isKeyPressed(Keyboard::Up))|| dPadX1 == 100|| dPadY1 == 100|| dPadX0 == 100 || dPadY0 == 100 ) {
				if (timer2 > 10)
					sel--;
				if (sel == -1)
				{
					sel = 2;
				}
				timer2 = 0;
			}
			if ((Keyboard::isKeyPressed(Keyboard::Right)) || (Keyboard::isKeyPressed(Keyboard::Down))||dPadX1 == -100 || dPadY1 == -100 || dPadX0 == -100 || dPadY0 == -100) {
				if (timer2 > 10)
					sel++;
				if (sel == 3)
				{
					sel = 0;
				}
				timer2 = 0;
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter) || Joystick::isButtonPressed(0,1)|| Joystick::isButtonPressed(1, 1)) {
				if (paused.pressed() == 0) {
					pause = false;
					
				}
				if (paused.pressed() == 1) {
					Reset();
					break;
				}
				if (paused.pressed() == 2) {
					pagenum = 0;
					gotomenu = true;
					mainmenureset();
					display = false;
					window.setView(menu);

					break;
				}
			}

		}
		///////////////////////////////////////////////////////////////////////
		///admin powers
		if (admin_powers) {
			if (Keyboard::isKeyPressed(Keyboard::Numpad6))
			{
				admin.move(3, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Numpad4))
			{
				admin.move(-3, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Numpad8))
			{
				admin.move(0, -3);
			}
			if (Keyboard::isKeyPressed(Keyboard::Numpad5))
			{
				admin.move(0, 3);
			}
			view.setCenter(admin.getPosition().x, admin.getPosition().y);
		}
		
		

		//EVENT HAS TO BE ABOVE DRAW AFTER EVERYTHING
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}
			if (event.type == sf::Event::TextEntered)
			{
				
				
					if (event.text.unicode == '\b') // Backspace
					{
						if (!inputText.empty())
							inputText.pop_back();
					}
					else if (event.text.unicode == '\r' || event.text.unicode == '\n') // Enter key
					{
						if (inputText == desiredWord) {
							admin_powers = true;
							cout << "cheatcode activated";
							admin.setPosition(midx, 600);
							inputText.clear();
						}
						inputText.clear();
					}
					else
					{
						inputText += char(event.text.unicode);
					}
				
			}
			
		}
		////////////////////////////////////////////////////////////////////////////////


		window.setView(view);

		

		window.clear(Color(250, 200, 152)); //adding background color 

		//DRAWING EVERYTHING

		if (easy||medium||fp){
			window.draw(Hint1);
			window.draw(Hint2);
			window.draw(Hint3);
		}

		
		
		window.draw(death_ceiling);
		window.draw(pushwall);
		window.draw(moving_wall1);
		window.draw(groundtex);
		window.draw(groundtex3);
		window.draw(death);
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
		window.draw(Astronaut.pico);
		window.draw(admin);
		window.draw(key);
		if (drawls) {
			if (ls.getScale().x < 1/ 1.125) {
				ls.setScale(ls.getScale().x + 0.02, ls.getScale().x + 0.02);
			}
			ls.setPosition(midx, 600);
			window.draw(ls);
			if (loading1.getElapsedTime().asSeconds() > rand_sec)
			{
				pagenum = 102;
				Reset();
				return;
			}
		}
		
		if (pause == true) {

			window.draw(pausescreen);
			paused.draw(window);

		}
		/*window.draw(down1);
		window.draw(down2);
		window.draw(down4);
		window.draw(down3);

		window.draw(top1);
		window.draw(top2);
		window.draw(top4);
		window.draw(top3);

		window.draw(right1);
		window.draw(right2);
		window.draw(right4);
		window.draw(right3);


		window.draw(left1);
		window.draw(left2);
		window.draw(left4);
		window.draw(left3);*/

		window.display();

	}
}