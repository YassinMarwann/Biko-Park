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




void Level8(RenderWindow& window, int& pagenum) {

	

	View view = window.getDefaultView();
	View menu = window.getDefaultView();


	//SOUNDS

	Music buttonsound;
	buttonsound.openFromFile("../Assets/Sounds/button.mp3");

	Music unlock;
	unlock.openFromFile("../Assets/Sounds/door.mp3");

	Music mask;
	mask.openFromFile("../Assets/Sounds/mask.mp3");

	Music helmet;
	helmet.openFromFile("../Assets/Sounds/helmet.mp3");

	Music tele;
	tele.openFromFile("../Assets/Sounds/teleport.mp3");

	Music lazer;
	lazer.openFromFile("../Assets/Sounds/lasar.mp3");

	Music fall;
	fall.openFromFile("../Assets/Sounds/fall.mp3");

	//MAP TEXTURES AND POSITIONS


	Texture ground;
	ground.loadFromFile("../Pico/ground.jpg"); 
	Sprite groundtex(ground);
	groundtex.setPosition(0, 900);
	groundtex.setScale(3.5, 6.5);


	Sprite groundtex2(ground);
	groundtex2.setPosition(1750, 570);
	groundtex2.setScale(9, 1.5);

	Sprite groundtex3(ground);
	groundtex3.setPosition(1750, 800);
	groundtex3.setScale(9, 8);

	Sprite groundtex4(ground);
	groundtex4.setPosition(4970, 1295);
	groundtex4.setScale(1.5, 2.44);

	Sprite groundtex5(ground); 
	groundtex5.setPosition(5684, 1295);
	groundtex5.setScale(0.65, 2.44);

	Sprite groundtex6(ground); 
	groundtex6.setPosition(5280, 411);
	groundtex6.setScale(7, 2.5);

	Sprite groundtex7(ground); 
	groundtex7.setPosition(6710, 930);
	groundtex7.setScale(1.5, 6.5);

	Sprite groundtex8(ground); 
	groundtex8.setPosition(7425, 930);
	groundtex8.setScale(1.54, 6.5);

	Sprite groundtex9(ground);
	groundtex9.setPosition(9180, 930);
	groundtex9.setScale(2.6, 6.5);

	Sprite groundtex10(ground);
	groundtex10.setPosition(1750, 400);
	groundtex10.setScale(9, 2.25);

	Texture wall;
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setTexture(wall);
	wall_1.setPosition(-1152.5, 0);
	wall_1.setScale(2, 2.83);

	Sprite wall_2(wall); // moving wall 
	wall_2.setTexture(wall);
	wall_2.setPosition(4525, 685);
	wall_2.setScale(0.05, 0.18);

	Sprite wall_3(wall);  
	wall_3.setTexture(wall);
	wall_3.setPosition(4970, 918);
	wall_3.setScale(0.5, 0.9);

	Sprite wall_4(wall);  // 1st fake after 1st fall
	wall_4.setTexture(wall);
	wall_4.setPosition(5559, 1295);
	wall_4.setScale(0.2, 0.3);

	Sprite wall_5(wall);  
	wall_5.setTexture(wall);
	wall_5.setPosition(5939, 930);
	wall_5.setScale(0.5, 2.5);

	Sprite wall_6(wall);
	wall_6.setTexture(wall);
	wall_6.setPosition(6395, 930);
	wall_6.setScale(0.5, 2.5);

	Sprite wall_7(wall);  
	wall_7.setTexture(wall);
	wall_7.setPosition(6395, 508);
	wall_7.setScale(0.4, 0.67);

	Sprite wall_8(wall);   // 2nd fake floor
	wall_8.setTexture(wall);
	wall_8.setPosition(7299, 930); 
	wall_8.setScale(0.2, 1.246);

	Sprite wall_9(wall);   // builder's wall
	wall_9.setTexture(wall);
	wall_9.setPosition(7750, 508);
	wall_9.setScale(0.15, 0.657);

	Sprite wall_10(wall);
	wall_10.setTexture(wall);
	wall_10.setPosition(10163, -2);
	wall_10.setScale(1.5, 2.3);


	Texture squares;      //adding squares to jump on it
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares);
	squares_1.setTexture(squares);
	squares_1.setPosition(1440, 820);
	squares_1.setScale(0.5, 0.5);

	Sprite squares_2(squares);
	squares_2.setTexture(squares);
	squares_2.setPosition(1600, 780);
	squares_2.setScale(0.5, 0.5);

	Sprite squares_3(squares);
	squares_3.setTexture(squares);
	squares_3.setPosition(-1600, -730);
	squares_3.setScale(0.5, 0.5);

	Sprite squares_4(squares); // talat invisible squares
	squares_4.setTexture(squares);
	squares_4.setPosition(5745, 1185);
	squares_4.setScale(0.5, 0.5);
	squares_4.setColor(Color::Transparent);

	Sprite squares_5(squares);
	squares_5.setTexture(squares);
	squares_5.setPosition(5590, 1080);
	squares_5.setScale(0.5, 0.5);
	squares_5.setColor(Color::Transparent);

	Sprite squares_6(squares);
	squares_6.setTexture(squares);
	squares_6.setPosition(5745, 970);
	squares_6.setScale(0.5, 0.5);
	squares_6.setColor(Color::Transparent);

	Sprite squares_7(squares);
	squares_7.setTexture(squares);
	squares_7.setPosition(8380, 930);
	squares_7.setScale(0.5, 0.5);

	Sprite squares_8(squares);
	squares_8.setTexture(squares);
	squares_8.setPosition(8510, 930);
	squares_8.setScale(0.5, 0.5);

	Sprite squares_9(squares);
	squares_9.setTexture(squares);
	squares_9.setPosition(8640, 930);
	squares_9.setScale(0.5, 0.5);

	Sprite squares_10(squares);
	squares_10.setTexture(squares);
	squares_10.setPosition(8770, 930);
	squares_10.setScale(0.5, 0.5);

	Sprite squares_11(squares);
	squares_11.setTexture(squares);
	squares_11.setPosition(8900, 930);
	squares_11.setScale(0.5, 0.5);

	Sprite squares_12(squares);
	squares_12.setTexture(squares);
	squares_12.setPosition(9030, 930);
	squares_12.setScale(0.5, 0.5);



	RectangleShape laser(Vector2f(3, 109));
	laser.setPosition(2910, 690);
	laser.setFillColor(Color::Red);
	laser.setOutlineColor(Color::Red);
	laser.setOutlineThickness(1);

	RectangleShape laser1(Vector2f(3, 109));
	laser1.setPosition(2925, 690);
	laser1.setFillColor(Color::Red);
	laser1.setOutlineColor(Color::Red);
	laser1.setOutlineThickness(1);

	RectangleShape laser2(Vector2f(3, 109));
	laser2.setPosition(2940, 690);
	laser2.setFillColor(Color::Red);
	laser2.setOutlineColor(Color::Red);
	laser2.setOutlineThickness(1);

	RectangleShape laser3(Vector2f(3, 109));
	laser3.setPosition(2955, 690);
	laser3.setFillColor(Color::Red);
	laser3.setOutlineColor(Color::Red);
	laser3.setOutlineThickness(1);

	RectangleShape laser4(Vector2f(3, 109));
	laser4.setPosition(2970, 690);
	laser4.setFillColor(Color::Red);
	laser4.setOutlineColor(Color::Red);
	laser4.setOutlineThickness(1);




	Texture butt;  
	butt.loadFromFile("../Pico/button.png");
	Sprite button(butt);
	button.setPosition(3025, 770);
	button.setScale(0.14313, 0.1228);

	Texture buttpress;
	buttpress.loadFromFile("../Pico/buttonpressed.png");
	Sprite buttonp(buttpress);
	buttonp.setScale(0, 0);

	Sprite button1(butt);   // invisible button
	button1.setPosition(4350, 770);
	button1.setScale(0.14313, 0.1228);
	button1.setColor(Color::Transparent);

	Sprite buttonp1(buttpress);
	buttonp1.setScale(0, 0);

	Sprite button2(butt);  
	button2.setPosition(6060, 901);
	button2.setScale(0.14313, 0.1228);

	Sprite buttonp2(buttpress);
	buttonp2.setScale(0, 0);


	Texture platform;
	platform.loadFromFile("../Pico/23.jpg");
	Sprite platform1(platform);
	platform1.setPosition(8130, 930);
	platform1.setScale(1.1, 1.5);

	Sprite platform2(platform);
	platform2.setPosition(8120, 640);
	platform2.setScale(1.7, 1.5);



	Texture tpmachine;
	tpmachine.loadFromFile("../Pico/teleporter1.png");
	Sprite teleporter1(tpmachine);
	teleporter1.setPosition(8160, 841);
	teleporter1.setScale(0.17, 0.18);

	Sprite teleporter2(tpmachine);
	teleporter2.setPosition(8160, 551);
	teleporter2.setScale(0.17, 0.18);

	Texture keytex;
	keytex.loadFromFile("../Pico/keys.png");
	Sprite key(keytex);
	key.setPosition(8260, 547);
	key.setScale(0.2, 0.2);

	Texture door1;
	door1.loadFromFile("../Pico/closed.png");
	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(10000, 805);
	door.setScale(0.25, 0.25);

	Texture door2;
	door2.loadFromFile("../Pico/open.png");

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Texture thiefmask;
	thiefmask.loadFromFile("../Assets/Texture/ThiefMaskSheet.png");

	Texture thief;
	thief.loadFromFile("../Assets/Texture/ThiefSheet.png");

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

	RectangleShape pausescreen;
	pausescreen.setSize(Vector2f(192000, 108000));
	pausescreen.setPosition(-100000, -54000);
	pausescreen.setFillColor(Color(250, 200, 152, 128));

	Sprite death_ceiling(ground);
	death_ceiling.setTexture(ground);
	death_ceiling.setPosition(-2000, -500);
	death_ceiling.setScale(200, 2);

	Sprite death(ground);
	death.setTexture(ground);
	death.setPosition(-2000, 2000);
	death.setScale(200, 1);

	////////////////////////////////////////////// HINTS ////////////////////////////////////////////

	Texture hint1;
	hint1.loadFromFile("../Assets/Texture/level8 1.png");//adding ground texture
	Sprite Hint1(hint1);
	Hint1.setTexture(hint1);
	Hint1.setPosition(350, 600);
	Hint1.setScale(1, 1);



	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//DEATH SCREEN

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
	admin.setScale(0.5, 0.5);
	admin.setOrigin(65, 85);
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


	Clock clock;
	Clock clock3;

	while (window.isOpen()) {

		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(125, 100);
			Scientist.start(275, 100);
			Builder.start(425, 100);
			Astronaut.start(575, 100);

		}


		
		
		
		
		//BUTTONS
		if (button_ispressed) {
			if (pause == false) {
				buttonp.setTexture(buttpress);
				buttonp.setPosition(3025, 788);
				buttonp.setScale(0.1431, 0.13475);
				laser.setScale(0, 0);
				laser1.setScale(0, 0);
				laser2.setScale(0, 0);
				laser3.setScale(0, 0);
				laser4.setScale(0, 0);
			}
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforwall) {
			if (pause == false) {
				buttonp1.setTexture(buttpress);
				buttonp1.setPosition(4350, 588);
				buttonp1.setScale(0.1431, 0.13475);
				buttonp1.setColor(Color::Transparent);

				if (wall_2.getPosition().x > groundtex3.getPosition().x - 34) {
					if (pause == false)
						wall_2.move(-1, 0);
				}
				if (wall_2.getPosition().x < groundtex3.getPosition().x || wall_2.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
					if (pause == false)
						wall_2.move(0, 1);
				}



			}
			if (playsound == 1)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressed2) {
			buttonp2.setTexture(buttpress);
			buttonp2.setPosition(6060, 919);
			buttonp2.setScale(0.1431, 0.13475);
			squares_4.setColor(Color::White);
			squares_5.setColor(Color::White);
			squares_6.setColor(Color::White);
			if (playsound == 2)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}


		// death sounds

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

		//Ability
		if (maskon == 1) {
			Thief.pico.setTexture(thiefmask);
		}
		if (maskon == 0) {
			Thief.pico.setTexture(thief);
		}

		if (helmeton == 1) {
			Astronaut.pico.setTexture(astronautmask);
		}
		if (helmeton == 0) {
			Astronaut.pico.setTexture(astronaut);
		}

		///// abilities sounds

		if (hasmask) {
			if (masktrue == 0) {
				mask.play();
				for (int i = 0; mask.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				masktrue = 1;
			}
		}

		if (nomask) {
			if (maskfalse == 0) {
				mask.play();
				for (int i = 0; mask.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				maskfalse = 1;
			}
		}

		if (hashelm) {
			if (helmtrue == 0) {
				helmet.play();
				for (int i = 0; helmet.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				helmtrue = 1;
			}
		}

		if (nohelm) {
			if (helmfalse == 0) {
				helmet.play();
				for (int i = 0; helmet.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				helmfalse = 1;
			}
		}

		if (firsttele) {
			if (tele1 == 0) {
				tele.play();
				for (int i = 0; tele.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				tele1 = 1;
			}
		}

		if (secondtele) {
			if (tele2 == 0) {
				tele.play();
				for (int i = 0; tele.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				tele2 = 1;
			}
		}

		//Key
		if (Key(window, Thief, Scientist, Builder, Astronaut, key, door, door2, pagenum, admin))
		{
			

			if (!freeplay) {
				if (!drawls)
					loading1.restart();
				drawls = true;
				admin_powers = false;
				ofstream outputFile("progress.txt");

				progress = 8;
				outputFile << 8 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 9;
				Reset();
				return;
			}
			
		}

		// door sound

		if (dooropen) {
			if (doorsound == 0) {
				unlock.play();
				for (int i = 0; unlock.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				doorsound++;
			}
		}


		

		//////////THIEF COLLISION///////////////////

		Thief_collision8(Thief, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, squares_1, squares_2, squares_3, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, laser, laser1, laser2, laser3, laser4, wall_2, wall_3, wall_4, wall_5, wall_6, wall_8, wall_9, wall_10, platform1, platform2, button, buttonp, button1, buttonp1, buttonp2, death, squares_4, squares_5, squares_6);

		//////////SCIENTIST COLLISION ///////////////////

		Scientist_collision8(Scientist, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, squares_1, squares_2, squares_3, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, laser, laser1, laser2, laser3, laser4, wall_2, wall_3, wall_4, wall_5, wall_6, wall_8, wall_9, wall_10, teleporter1, teleporter2, platform1, platform2, button, buttonp, button1, buttonp1, buttonp2, death, squares_4, squares_5, squares_6);

		//////////BUILDER COLLISION///////////////////

		Builder_collision8(Builder, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, squares_1, squares_2, squares_3, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, laser, laser1, laser2, laser3, laser4, wall_2, wall_3, wall_4, wall_5, wall_6, wall_8, wall_9, wall_10, platform1, platform2, button, buttonp, button1, buttonp1, buttonp2, death, squares_4, squares_5, squares_6);

		//////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision8(Astronaut, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, squares_1, squares_2, squares_3, squares_7, squares_8,squares_9, squares_10, squares_11, squares_12, laser, laser1, laser2, laser3, laser4, wall_2, wall_3,wall_4, wall_5, wall_6, wall_8, wall_9, wall_10, platform1, platform2, button, buttonp, button1, buttonp1, button2, buttonp2, death, death_ceiling, squares_4, squares_5, squares_6);

		///////////////////////////////////////////////////////////////////

		timer1++;
		timer2++;


		if (clock3.getElapsedTime().asSeconds() > 1) {

			player_collision(window, Thief, Scientist, Builder, Astronaut, top1, top2, top3, top4, left1, left2, left3, left4, right1, right2, right3, right4, down1, down2, down3, down4);

		}
		
		players_movment(window, Thief, Scientist, Builder, Astronaut, clock, left_wall, right_wall);









		////CAMERA MOVEMENT
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
		view.setCenter(midx, 920);
		view.setSize(1920 / 1.125, 1080 / 1.125);


		screenratio = 1.125 / 1.125;

		//////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,920);
		sel = paused.pressed();

		//////////////////////////////////////////////////

		Tdeath.setPosition(midx - 853, 440);
		Sdeath.setPosition(midx - 853, 440);
		Bdeath.setPosition(midx - 853, 440);
		Adeath.setPosition(midx - 853, 440);

		//death
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
		///////////////// pause menu


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
		////////////////////////////////////





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
		if (easy||fp) {
			window.draw(Hint1);
		}
		window.draw(wall_10);
		window.draw(groundtex);
		window.draw(groundtex2);
		window.draw(groundtex3);
		window.draw(groundtex4);
		window.draw(groundtex5);
		window.draw(groundtex6);
		window.draw(groundtex7);
		window.draw(groundtex8);
		window.draw(groundtex9);
		window.draw(groundtex10);
		window.draw(wall_1);
		window.draw(wall_2);
		window.draw(wall_3);
		window.draw(wall_5);
		window.draw(wall_6);
		window.draw(wall_7);
		window.draw(wall_9);
		if (hard) {
			window.draw(wall_4);
			window.draw(wall_8);
		}
		if (medium) {
			window.draw(wall_8);
		}
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
		window.draw(button);
		window.draw(buttonp);
		window.draw(button1);
		window.draw(buttonp1);
		window.draw(button2);
		window.draw(buttonp2);
		window.draw(laser);
		window.draw(laser1);
		window.draw(laser2);
		window.draw(laser3);
		window.draw(laser4);
		window.draw(platform1);
		window.draw(platform2);
		window.draw(teleporter1);
		window.draw(teleporter2);
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
			ls.setPosition(midx, 920);
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
