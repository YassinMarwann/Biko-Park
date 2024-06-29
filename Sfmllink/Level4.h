#pragma once
#include "Initialization.h"
#include "player struct.h"
#include "Thief.h"
#include "Scientist.h"
#include "Builder.h"
#include "Astronaut.h"
#include "Player Collision.h"
#include "Key.h"
#include "Movement.h"




void Level4(RenderWindow& window, int& pagenum) {



	View view = window.getDefaultView();
	View menu = window.getDefaultView();

	//SOUNDS

	Music buttonsound;
	buttonsound.openFromFile("../Assets/Sounds/button.mp3");

	Music unlock;
	unlock.openFromFile("../Assets/Sounds/door.mp3");

	Music lazer;
	lazer.openFromFile("../Assets/Sounds/lasar.mp3");

	Music fall;
	fall.openFromFile("../Assets/Sounds/fall.mp3");


	// MAP TEXTURES AND POSITIONS 


	Texture ground;
	ground.loadFromFile("../Pico/ground.jpg"); 
	Sprite groundtex(ground);
	groundtex.setPosition(0, 900);
	groundtex.setScale(4.5, 3.5);

	Sprite groundtex2(ground);
	groundtex2.setPosition(1927, 900);
	groundtex2.setScale(2.45, 3.5);


	Sprite groundtex3(ground);
	groundtex3.setPosition(3550, 900);
	groundtex3.setScale(1.5, 3.5);

	
	Sprite groundtex4(ground);
	groundtex4.setPosition(1768, 1900);
	groundtex4.setScale(4.7, 3.5);

	Sprite groundtex5(ground);
	groundtex5.setPosition(4249, 900);
	groundtex5.setScale(2.5, 3.5);

	Sprite groundtex6(ground);
	groundtex6.setPosition(5400, 900);
	groundtex6.setScale(3, 3.5);

	Sprite groundtex7(ground);     
	groundtex7.setPosition(7750, 760+35);
	groundtex7.setScale(3.15, 1);

	Sprite groundtex8(ground);
	groundtex8.setPosition(7750, 970+35);
	groundtex8.setScale(3.15, 1);

	Sprite groundtex9(ground);
	groundtex9.setPosition(9650, 770);
	groundtex9.setScale(3.5, 5);

	Sprite groundtex10(ground);
	groundtex10.setPosition(6500, 1900);
	groundtex10.setScale(9, 3.5);


	Texture butt;
	butt.loadFromFile("../Pico/button.png");

	Sprite button(butt);
	button.setPosition(4150, 870);
	button.setScale(0.14313, 0.1228);
	Texture buttpress;
	buttpress.loadFromFile("../Pico/buttonpressed.png");
	Sprite buttonp(buttpress);
	buttonp.setScale(0, 0);


	Texture wall;
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setTexture(wall);
	wall_1.setPosition(1768, 899.5);
	wall_1.setScale(0.26, 0.9);

	Sprite wall_2(wall);
	wall_2.setTexture(wall);
	wall_2.setPosition(-200-970.5, 0);
	wall_2.setScale(2, 1.83);

	Sprite wall_3(wall);
	wall_3.setTexture(wall);
	wall_3.setPosition(5230, 900);
	wall_3.setScale(0.3, 0.9);



	Sprite wall_4(wall);
	wall_4.setTexture(wall);
	wall_4.setPosition(11004, -307);
	wall_4.setScale(2, 3);

	
	Texture mov_wall;
	mov_wall.loadFromFile("../Pico/wall2.png");
	Sprite moving_wall;
	moving_wall.setTexture(mov_wall);
	moving_wall.setPosition(4139, 900);
	moving_wall.setScale(1.3, 1);



	Texture squares;      //adding squares to jump on it
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares);
	squares_1.setTexture(squares);
	squares_1.setPosition(2950, 790);
	squares_1.setScale(0.5, 0.5);

	Sprite squares_2(squares);
	squares_2.setTexture(squares);
	squares_2.setPosition(3080, 700);
	squares_2.setScale(0.5, 0.5);

	Sprite squares_3(squares);
	squares_3.setTexture(squares);
	squares_3.setPosition(3280, 700);
	squares_3.setScale(0.5, 0.5);

	Sprite squares_4(squares);
	squares_4.setTexture(squares);
	squares_4.setPosition(3470, 640);
	squares_4.setScale(0.5, 0.5);

	Sprite squares_5(squares);
	squares_5.setTexture(squares);
	squares_5.setPosition(3170, 800);
	squares_5.setScale(0.5, 0.5);

	Sprite squares_6(squares);
	squares_6.setTexture(squares);
	squares_6.setPosition(3400, 800);
	squares_6.setScale(0.5, 0.5);

	
	Sprite squares_7(wall);
	squares_7.setTexture(wall);
	squares_7.setPosition(5100, 805);
	squares_7.setScale(0.15, 0.15);

	
	Sprite squares_8(squares);
	squares_8.setTexture(squares);
	squares_8.setPosition(6702, 900);
	squares_8.setScale(0.5, 0.5);

	Sprite squares_9(squares);
	squares_9.setTexture(squares);
	squares_9.setPosition(6850, 900);
	squares_9.setScale(0.5, 0.5);

	Sprite squares_10(squares);
	squares_10.setTexture(squares);
	squares_10.setPosition(6950, 900);
	squares_10.setScale(0.5, 0.5);

	Sprite squares_11(squares);
	squares_11.setTexture(squares);
	squares_11.setPosition(7100, 900);
	squares_11.setScale(0.5, 0.5);

	Sprite squares_12(squares);
	squares_12.setTexture(squares);
	squares_12.setPosition(7200, 900);
	squares_12.setScale(0.5, 0.5);

	Sprite squares_13(squares);
	squares_13.setTexture(squares);
	squares_13.setPosition(7400, 900);
	squares_13.setScale(0.5, 0.5);

	Sprite squares_14(squares);
	squares_14.setTexture(squares);
	squares_14.setPosition(7600, 900);
	squares_14.setScale(0.5, 0.5);

	
	Sprite squares_15(squares);
	squares_15.setTexture(squares);
	squares_15.setPosition(9060, 945);
	squares_15.setScale(0.5, 0.5);

	Sprite squares_16(squares);
	squares_16.setTexture(squares);
	squares_16.setPosition(9243, 945);
	squares_16.setScale(0.5, 0.5);

	Sprite squares_17(squares);
	squares_17.setTexture(squares);
	squares_17.setPosition(9413, 945);
	squares_17.setScale(0.5, 0.5);

	Sprite squares_18(squares);
	squares_18.setTexture(squares);
	squares_18.setPosition(9583, 945);
	squares_18.setScale(0.5, 0.5);

	Sprite squares_19(squares);
	squares_19.setTexture(squares);
	squares_19.setPosition(9143, 810);
	squares_19.setScale(0.5, 0.5);

	Sprite squares_20(squares);
	squares_20.setTexture(squares);
	squares_20.setPosition(9320, 810);
	squares_20.setScale(0.5, 0.5);

	Sprite squares_21(squares);
	squares_21.setTexture(squares);
	squares_21.setPosition(9500, 850);
	squares_21.setScale(0.5, 0.5);

	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(2850, 750);
	key.setScale(0, 0);


	Texture door2;
	door2.loadFromFile("../Pico/open.png");
	Sprite door(door2);
	door.setPosition(10730, 595);
	door.setScale(0.25, 0.25);

	

	//////////////////////////////////////////   SPRITES   ///////////////////////////////////////

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

	//////////////////////////////////////////// HINTS ////////////////////////////////////////////

	Texture hint1;
	hint1.loadFromFile("../Assets/Texture/level4 1.png");//adding ground texture
	Sprite Hint1(hint1);
	Hint1.setTexture(hint1);
	Hint1.setPosition(350, 400);
	Hint1.setScale(0.85, 0.85);

	//////////////////////////////////////////// OVERALL //////////////////////////////////////////

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


	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//////////DEATH SCREEN

	Texture thiefdeath;
	thiefdeath.loadFromFile("../Assets/Texture/deadthief.png");
	Sprite Tdeath(thiefdeath);
	Tdeath.setTexture(thiefdeath);
	Tdeath.setScale(1 / 1.125, 1 / 1.125);

	Texture scientistdeath;
	scientistdeath.loadFromFile("../Assets/Texture/deadscience.png");
	Sprite Sdeath(scientistdeath);
	Sdeath.setTexture(scientistdeath);
	Sdeath.setScale(1 / 1.125, 1 / 1.125);

	Texture builderdeath;
	builderdeath.loadFromFile("../Assets/Texture/deadbuilder.png");
	Sprite Bdeath(builderdeath);
	Bdeath.setTexture(builderdeath);
	Bdeath.setScale(1 / 1.125, 1 / 1.125);

	Texture astrodeath;
	astrodeath.loadFromFile("../Assets/Texture/deadastro.png");
	Sprite Adeath(astrodeath);
	Adeath.setTexture(astrodeath);
	Adeath.setScale(1 / 1.125, 1 / 1.125);

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
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


		if (button_ispressed) {
			if (!(moving_wall.getGlobalBounds().intersects(wall_3.getGlobalBounds()))) {
				if (pause == false)
				moving_wall.move(2, 0);
				buttonp.setScale(0.1431, 0.13475);
				buttonp.setPosition(4000, 888);
			}
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		isunlocked = true;

		door.setScale(0.35, 0.35);

		if (Key(window, Thief, Scientist, Builder, Astronaut, key, door, door2, pagenum, admin))
		{
			


			if (!freeplay) {
				if (!drawls)
					loading1.restart();
				drawls = true;
				admin_powers = false;

				ofstream outputFile("progress.txt");

				progress = 4;
				outputFile << 4 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 5;
				Reset();
				return;	
			}
			
		}

		 //////////door sound

		if (dooropen) {
			if (doorsound == 0) {
				unlock.play();
				for (int i = 0; unlock.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				doorsound++;
			}
		}

		//// death sounds

		if (fell) {
			if (deathsound == 0) {
				fall.play();
				for (int i = 0; fall.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				deathsound = 1;
			}
		}

		if (burn) {
			if (deathsound == 0) {
				lazer.play();
				for (int i = 0; lazer.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				deathsound = 1;
			}
		}

		////////THIEF COLLISION///////////////////

		Thief_collision4(Thief, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21,  wall_1,  wall_2,  wall_3,  wall_4, moving_wall, button, buttonp, death, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, death_ceiling);
		
		////////SCIENTIST COLLISION ///////////////////

		Scientist_collision4(Scientist, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21, wall_1, wall_2, wall_3, wall_4, moving_wall, button, buttonp, death, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10,  death_ceiling);
		
		////////BUILDER COLLISION///////////////////

		Builder_collision4(Builder, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21, wall_1, wall_2, wall_3, wall_4, moving_wall, button, buttonp, death, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10,  death_ceiling);
		
		////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision4(Astronaut, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21, wall_1, wall_2, wall_3, wall_4, moving_wall, button, buttonp, death, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10,  death_ceiling);
		
		/////////////////////////////////////////////////////////////////


		timer1++;
		timer2++;

		players_movment(window, Thief, Scientist, Builder, Astronaut, clock, left_wall, right_wall);

		player_collision(window, Thief, Scientist, Builder, Astronaut, top1, top2, top3, top4, left1, left2, left3, left4, right1, right2, right3, right4, down1, down2, down3, down4);








		//CAMERA MOVEMENT
		{
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
		}
		int midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x + Astronaut.pico.getPosition().x) / 4;
		view.setCenter(midx, 650);
		view.setSize(1920 / 1.125, 1080 / 1.125);

		screenratio = 1.125 / 1.125;

		////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,650);
		sel = paused.pressed();

		////////////////////////////////////////////////

		Tdeath.setPosition(midx - 853, 167);
		Sdeath.setPosition(midx - 853, 167);
		Bdeath.setPosition(midx - 853, 167);
		Adeath.setPosition(midx - 853, 167);

		/////////death
		if (dead[0] == 1 || dead[1] == 1 || dead[2] == 1 || dead[3] == 1) {

			deathscreen = true;
			pause = true;

		}

		if (deathscreen)
		{
			if ((Keyboard::isKeyPressed(Keyboard::Left)) || (Keyboard::isKeyPressed(Keyboard::Up)) || dPadX1 == -100 || dPadY1 == -100 || dPadX0 == 100 || dPadY0 == 100) {
				if (timer2 > 10)
					sel--;
				if (sel == 0)
				{
					sel = 2;
				}
				timer2 = 0;
			}
			if ((Keyboard::isKeyPressed(Keyboard::Right)) || (Keyboard::isKeyPressed(Keyboard::Down)) || dPadX1 == 100 || dPadY1 == 100 || dPadX0 == -100 || dPadY0 == -100) {
				if (timer2 > 10)
					sel++;
				if (sel == 3)
				{
					sel = 1;
				}
				timer2 = 0;
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter)) {
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
		/////////////// pause menu


		if (pause == true && !deathscreen)
		{
			if ((Keyboard::isKeyPressed(Keyboard::Left)) || (Keyboard::isKeyPressed(Keyboard::Up)) || dPadX1 == -100 || dPadY1 == -100 || dPadX0 == 100 || dPadY0 == 100) {
				if (timer2 > 10)
					sel--;
				if (sel == -1)
				{
					sel = 2;
				}
				timer2 = 0;
			}
			if ((Keyboard::isKeyPressed(Keyboard::Right)) || (Keyboard::isKeyPressed(Keyboard::Down)) || dPadX1 == 100 || dPadY1 == 100 || dPadX0 == -100 || dPadY0 == -100) {
				if (timer2 > 10)
					sel++;
				if (sel == 3)
				{
					sel = 0;
				}
				timer2 = 0;
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter)) {
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
		//////////////////////////////////





/////////////////////////////////////////////////////////////////////
		//////admin powers
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


		//////////////EVENT HAS TO BE ABOVE DRAW AFTER EVERYTHING
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
					}
					inputText.clear();
				}
				else
				{
					inputText += char(event.text.unicode);
				}

			}

		}
		//////////////////////////////////////////////////////////////////////////////

		//////////////////////////////////////////////////////////////////////////////


		window.setView(view);



		window.clear(Color(250, 200, 152)); //adding background color 


		////DRAWING EVERYTHING
		if (easy||fp) {
			window.draw(Hint1);
		}
		window.draw(death);
		window.draw(death_ceiling);
		window.draw(groundtex);
		window.draw(groundtex2);
		window.draw(groundtex3);
		window.draw(groundtex5);
		window.draw(groundtex6);
		window.draw(groundtex7);
		window.draw(groundtex8);
		window.draw(groundtex9);
		if(hard){ window.draw(wall_1);
		window.draw(wall_3);}
		window.draw(wall_2);
		window.draw(wall_4);
		window.draw(moving_wall);
		window.draw(squares_1);
		window.draw(squares_2);
		window.draw(squares_3);
		window.draw(squares_4);
		window.draw(squares_5);
		window.draw(squares_6);
		window.draw(squares_7);
		window.draw(squares_8);
		window.draw(squares_9);
		window.draw(squares_10);
		window.draw(squares_11);
		window.draw(squares_12);
		window.draw(squares_13);
		window.draw(squares_14);
		window.draw(squares_15);
		window.draw(squares_16);
		window.draw(squares_17);
		window.draw(squares_19);
		window.draw(squares_20);
		window.draw(squares_21);
		window.draw(button);
		window.draw(door);
		window.draw(Scientist.pico);
		window.draw(Builder.pico);
		window.draw(Astronaut.pico);
		window.draw(Thief.pico);
		window.draw(admin);
		window.draw(key);
		if (pause == true) {

			window.draw(pausescreen);
			if (deathscreen) {
				if (dead[0] == true) {
					window.draw(Tdeath);
				}
				if (dead[1] == true) {
					window.draw(Sdeath);
				}
				if (dead[2] == true) {
					window.draw(Bdeath);
				}
				if (dead[3] == true) {
					window.draw(Adeath);
				}
			}
			paused.draw(window);

		}
		if (drawls) {
			if (ls.getScale().x < 1 / 1.125) {
				ls.setScale(ls.getScale().x + 0.02, ls.getScale().x + 0.02);
			}
			ls.setPosition(midx, 650);
			window.draw(ls);
			if (loading1.getElapsedTime().asSeconds() > rand_sec)
			{
				pagenum = 102;
				Reset();
				return;
			}
		}
		window.display();

	}

}


