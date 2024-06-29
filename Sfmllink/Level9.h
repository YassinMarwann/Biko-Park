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



void Level9(RenderWindow& window, int& pagenum){


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

	///

	Texture ground; // 1st bottom ground
	ground.loadFromFile("..//Pico/ground.jpg");//adding ground texture
	Sprite groundtex(ground);
	groundtex.setTexture(ground);
	groundtex.setPosition(0, 670);
	groundtex.setScale(4.7, 3.5);

	Sprite groundtex13(ground);
	groundtex13.setTexture(ground);
	groundtex13.setPosition(0, 890);
	groundtex13.setScale(4.7, 5.5);

	Sprite groundtex2(ground); // 1st ceiling
	groundtex2.setTexture(ground);
	groundtex2.setPosition(-10, 60);
	groundtex2.setScale(4.778, 0.9);

	Sprite groundtex3(ground); // ground under the key
	groundtex3.setTexture(ground);
	groundtex3.setPosition(810, 390);
	groundtex3.setScale(0.6, 0.9);


	Sprite groundtex4(ground); // ground under the laser
	groundtex4.setTexture(ground);
	groundtex4.setPosition(1807, 450);
	groundtex4.setScale(0.6, 0.5);

	Sprite groundtex5(ground); // ground above the laser
	groundtex5.setTexture(ground);
	groundtex5.setPosition(1807, 257);
	groundtex5.setScale(3.7, 0.5);

	Sprite groundtex6(ground); // ground under the button
	groundtex6.setTexture(ground);
	groundtex6.setPosition(2060, 603.5);
	groundtex6.setScale(0.5, 0.5);

	Sprite groundtex7(ground); // ground under the 2 squares
	groundtex7.setTexture(ground);
	groundtex7.setPosition(2250, 450);
	groundtex7.setScale(1.1, 0.5);

	Sprite groundtex8(ground); // ground under the 2nd button
	groundtex8.setTexture(ground);
	groundtex8.setPosition(2680, 603.5);
	groundtex8.setScale(0.68, 0.5);

	Sprite groundtex9(ground); // ground after the button (under the square)
	groundtex9.setTexture(ground);
	groundtex9.setPosition(2970, 450);
	groundtex9.setScale(1.05, 0.5);

	Sprite groundtex10(ground); // ground under the door
	groundtex10.setTexture(ground);
	groundtex10.setPosition(3350, 250);
	groundtex10.setScale(1.05, 0.5);

	Sprite groundtex11(ground); // ground above the door
	groundtex11.setTexture(ground);
	groundtex11.setPosition(3229, 35);
	groundtex11.setScale(1.384, 0.5);

	Sprite groundtex12(ground); // ground under the upper transporter
	groundtex12.setTexture(ground);
	groundtex12.setPosition(1060, 280);
	groundtex12.setScale(1.3, 0.5);



	///

	Texture wall; // 1st left beginning wall
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setTexture(wall);
	wall_1.setPosition(0, 120);
	wall_1.setScale(0.6, 1);

	Sprite wall_2(wall); // moving wall     
	wall_2.setTexture(wall);
	wall_2.setPosition(1000, 520);
	wall_2.setScale(0.1, 0.5);

	Sprite wall_3(wall); // 3rd wall (above the bottom one)
	wall_3.setTexture(wall);
	wall_3.setPosition(1000, 80);
	wall_3.setScale(0.1, 0.7);


	Sprite wall_4(wall); // wall under the laser
	wall_4.setTexture(wall);
	wall_4.setPosition(1807, 450);
	wall_4.setScale(0.1, 0.7737);

	Sprite wall_5(wall); // left wall from the button
	wall_5.setTexture(wall);
	wall_5.setPosition(2040, 450);
	wall_5.setScale(0.05, 0.3);

	Sprite wall_6(wall); // right wall from the button
	wall_6.setTexture(wall);
	wall_6.setPosition(2250, 450);
	wall_6.setScale(0.05, 0.3);

	Sprite wall_7(wall); // left wall from the 2nd button
	wall_7.setTexture(wall);
	wall_7.setPosition(2680, 450);
	wall_7.setScale(0.05, 0.3);

	Sprite wall_8(wall); // right wall from the 2nd button
	wall_8.setTexture(wall);
	wall_8.setPosition(2940, 450);
	wall_8.setScale(0.05, 0.3);

	Sprite wall_9(wall); // the wall before the door (the below one)
	wall_9.setTexture(wall);
	wall_9.setPosition(3350, 260);
	wall_9.setScale(0.05, 0.3);

	Sprite wall_10(wall); // the wall before the door (the parallel one)
	wall_10.setTexture(wall);
	wall_10.setPosition(3229, 45);
	wall_10.setScale(0.05, 0.35);

	Sprite wall_11(wall); // wall after the door
	wall_11.setTexture(wall);
	wall_11.setPosition(3740, 45);
	wall_11.setScale(0.05, 0.38);

	Sprite wall_12(wall); // wall after the upper teleporter and button
	wall_12.setTexture(wall);
	wall_12.setPosition(1550, 95);
	wall_12.setScale(0.1, 0.35);

	Sprite wall_13(wall); // 2nd wall after the upper teleporter and button
	wall_13.setTexture(wall);
	wall_13.setPosition(1805, 65);
	wall_13.setScale(0.1, 0.36);

	Sprite wall_14(wall); // moving wall trap
	wall_14.setTexture(wall);
	wall_14.setPosition(1200, -75);
	wall_14.setScale(0.1, 0.3);




	Sprite wall_15(wall); // the upper wall
	wall_15.setTexture(wall);
	wall_15.setPosition(0, -240);
	wall_15.setScale(5.1, 0.5);

	Sprite wall_16(wall); // the wall under the door
	wall_16.setTexture(wall);
	wall_16.setPosition(3350, 287);
	wall_16.setScale(2, 0.5);

	Sprite wall_17(wall); // the wall above the door
	wall_17.setTexture(wall);
	wall_17.setPosition(3150, -285);
	wall_17.setScale(2, 0.5);

	Sprite wall_18(wall); // the wall after the door
	wall_18.setTexture(wall);
	wall_18.setPosition(3700, -100);
	wall_18.setScale(3, 3.5);

	Sprite wall_19(wall); 
	wall_19.setTexture(wall);
	wall_19.setPosition(2960, 460);
	wall_19.setScale(2, 0.5);

	Sprite wall_20(wall);
	wall_20.setTexture(wall);
	wall_20.setPosition(2280, 460);
	wall_20.setScale(0.64, 0.7);

	Sprite wall_21(wall);
	wall_21.setTexture(wall);
	wall_21.setPosition(1870, 460);
	wall_21.setScale(0.27, 0.7);

	Sprite wall_22(wall);
	wall_22.setTexture(wall);
	wall_22.setPosition(1846, 642);
	wall_22.setScale(3.8, 0.7);

	Sprite wall_23(wall); // the first wall
	wall_23.setTexture(wall);
	wall_23.setPosition(-610, -200);
	wall_23.setScale(1, 2);

	Sprite wall_24(wall); // the upper wall
	wall_24.setTexture(wall);
	wall_24.setPosition(1868, -63);
	wall_24.setScale(2.16, 0.5);

	///

	Texture teleport;
	teleport.loadFromFile("..//Pico/teleporter1.png");
	Sprite teleporter1(teleport); // 1st teleporter
	teleporter1.setTexture(teleport);
	teleporter1.setPosition(870, 585);
	teleporter1.setScale(0.18, 0.18);

	Sprite teleporter2(teleport); // 2nd teleporter
	teleporter2.setTexture(teleport);
	teleporter2.setPosition(1100, 195);
	teleporter2.setScale(0.18, 0.18);

	///

	Texture squares;      //adding squares to jump on it
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares); // 1st square
	squares_1.setTexture(squares);
	squares_1.setPosition(700, 440);
	squares_1.setScale(0.5, 0.5);

	Sprite squares_2(squares);  // 3 squares
	squares_2.setTexture(squares);
	squares_2.setPosition(1300, 580);
	squares_2.setScale(0.5, 0.5);

	Sprite squares_3(squares);  // 3 squares
	squares_3.setTexture(squares);
	squares_3.setPosition(1480, 490);
	squares_3.setScale(0.5, 0.5);

	Sprite squares_4(squares);  // 3 squares
	squares_4.setTexture(squares);
	squares_4.setPosition(1680, 460);
	squares_4.setScale(0.5, 0.5);

	Sprite squares_5(squares);  // for bulider
	squares_5.setTexture(squares);
	squares_5.setPosition(2480, 400);
	squares_5.setScale(0.5, 0.5);

	Sprite squares_6(squares);  // 2 squares above each other
	squares_6.setTexture(squares);
	squares_6.setPosition(2480, 295);
	squares_6.setScale(0.5, 0.5);

	Sprite squares_7(squares);  // 1 square
	squares_7.setTexture(squares);
	squares_7.setPosition(3120, 295);
	squares_7.setScale(0.5, 0.5);

	///

	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(880, 320);
	key.setScale(0.2, 0.2);

	///

	Texture buttpress; //adding button to move the wall of the first wall
	buttpress.loadFromFile("../Pico/buttonpressed.png");


	Texture butt; //adding button to move the wall
	butt.loadFromFile("../Pico/button.png");
	Sprite button1(butt); // 1st button
	button1.setTexture(butt);
	button1.setPosition(2125, 570);
	button1.setScale(0.14313, 0.1228);
	Sprite buttonp1(buttpress);
	buttonp1.setScale(0, 0);

	Sprite button2(butt); // 2nd button
	button2.setTexture(butt);
	button2.setPosition(2790, 570);
	button2.setScale(0.14313, 0.1228);
	Sprite buttonp2(buttpress);
	buttonp2.setScale(0, 0);

	Sprite button3(butt); // button after the second teleporter (the 2nd one)
	button3.setTexture(butt);
	button3.setPosition(1380, 245);
	button3.setScale(0.14313, 0.1228);
	Sprite buttonp3(buttpress);
	buttonp3.setScale(0, 0);

	///

	Texture door1;
	door1.loadFromFile("../Pico/closed.png");
	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(3600, 155);
	door.setScale(0.2, 0.2);


	Texture door2;
	door2.loadFromFile("../Pico/open.png");

	///

	RectangleShape laser1;
	laser1.setSize(Vector2f(0.5, 613));
	laser1.setPosition(997, 200);
	laser1.setRotation(90);
	laser1.setFillColor(Color::Red);
	laser1.setOutlineColor(Color::Red);
	laser1.setOutlineThickness(3);

	const int num_lasers = 5;
	RectangleShape laser2[num_lasers];
	for (int i = 0; i < num_lasers; i++) {
		laser2[i].setSize(Vector2f(1.5, 165));
		laser2[i].setPosition(1850 + i * 20, 285);
		laser2[i].setFillColor(Color::Red);
		laser2[i].setOutlineColor(Color::Red);
		laser2[i].setOutlineThickness(3);

	}


	RectangleShape laser3;
	laser3.setSize(Vector2f(0.5, 172));
	laser3.setPosition(2247, 500);
	laser3.setRotation(90);
	laser3.setFillColor(Color::Red);
	laser3.setOutlineColor(Color::Red);
	laser3.setOutlineThickness(3);

	RectangleShape laser4;
	laser4.setSize(Vector2f(0.5, 600));
	laser4.setPosition(3120, 325);
	laser4.setRotation(90);
	laser4.setFillColor(Color::Red);
	laser4.setOutlineColor(Color::Red);
	laser4.setOutlineThickness(3);

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

	///DEATH SCREEN

	Texture thiefdeath;
	thiefdeath.loadFromFile("../Assets/Texture/deadthief.png");
	Sprite Tdeath(thiefdeath);
	Tdeath.setTexture(thiefdeath);
	Tdeath.setScale(1 / 1.375, 1 / 1.375);

	Texture scientistdeath;
	scientistdeath.loadFromFile("../Assets/Texture/deadscience.png");
	Sprite Sdeath(scientistdeath);
	Sdeath.setTexture(scientistdeath);
	Sdeath.setScale(1 / 1.375, 1 / 1.375);

	Texture builderdeath;
	builderdeath.loadFromFile("../Assets/Texture/deadbuilder.png");
	Sprite Bdeath(builderdeath);
	Bdeath.setTexture(builderdeath);
	Bdeath.setScale(1 / 1.375, 1 / 1.375);

	Texture astrodeath;
	astrodeath.loadFromFile("../Assets/Texture/deadastro.png");
	Sprite Adeath(astrodeath);
	Adeath.setTexture(astrodeath);
	Adeath.setScale(1 / 1.375, 1 / 1.375);

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
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	left_wall = 382;

	Clock clock;
	Clock clock3;


	while (window.isOpen()) {
		int midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x + Astronaut.pico.getPosition().x) / 4;

		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(385, 250);
			Scientist.start(445, 250);
			Builder.start(505, 250);
			Astronaut.start(565, 250);
		}

		///////BUTTONS


		if (button_ispressedforwall) {
			buttonp3.setTexture(buttpress);
			buttonp3.setPosition(1380, 265);
			buttonp3.setScale(0.1431, 0.13475);
			if (pause == false)
			wall_2.move(0, 0.4);
			if (!(wall_14.getGlobalBounds().intersects(groundtex12.getGlobalBounds()))) {
				if (pause == false)
				wall_14.move(0, 2.5);
			}
			if (wall_14.getGlobalBounds().intersects(groundtex12.getGlobalBounds()))
				midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Astronaut.pico.getPosition().x) / 3;
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressed) {
			buttonp1.setTexture(buttpress);
			buttonp1.setPosition(2125, 590);
			buttonp1.setScale(0.1431, 0.13475);
			for (int i = 0; i < num_lasers; i++) {
				laser2[i].setScale(0, 0);
			}
			midx = (Builder.pico.getPosition().x + Astronaut.pico.getPosition().x) / 2;
			if (playsound == 1)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}

		}

		if (button_ispressedcamera1) {
			buttonp2.setTexture(buttpress);
			buttonp2.setPosition(2790, 590);
			buttonp2.setScale(0.1431, 0.13475);
			midx = Astronaut.pico.getPosition().x;
			if (playsound == 2)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}

		}


		if (button_ispressedcamera2) {
			buttonp2.setTexture(buttpress);
			buttonp2.setPosition(2790, 590);
			buttonp2.setScale(0.1431, 0.13475);
			midx = Builder.pico.getPosition().x;
			if (playsound == 2)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}

		}

		/// death sounds

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


		///Ability
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

		// abilities sounds

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

		/////Key
		if (Key(window, Thief, Scientist, Builder, Astronaut, key, door, door2, pagenum, admin))
		{
			

			if (!freeplay) {
				if (!drawls)
					loading1.restart();
				drawls = true;
				admin_powers = false;

				ofstream outputFile("progress.txt");

				progress = 9;
				outputFile << 9 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 10;
				Reset();
				return;
			}
			
		}

		///////// door sound

		if (dooropen) {
			if (doorsound == 0) {
				unlock.play();
				for (int i = 0; unlock.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				doorsound++;
			}
		}

		
		////////THIEF COLLISION///////////////////

		Thief_collision9(Thief, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, groundtex12, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, laser1, laser2, laser3, laser4, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, wall_13, button1, buttonp1, death);

		////////SCIENTIST COLLISION ///////////////////

		Scientist_collision9(Scientist, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, groundtex12, teleporter1, teleporter2, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, laser1, laser2, laser3, laser4, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, wall_13, wall_14, button3, buttonp3, death);

		////////BUILDER COLLISION///////////////////

		Builder_collision9(Builder, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, groundtex12, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, laser1, laser2, laser3, laser4, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, wall_13, button2, buttonp2, death);

		////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision9(Astronaut, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, groundtex12, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, laser1, laser2, laser3, laser4, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, wall_13, button2, buttonp2, death, death_ceiling);

		/////////////////////////////////////////////////////////////////

		timer1++;
		timer2++;




		players_movment(window, Thief, Scientist, Builder, Astronaut, clock, left_wall, right_wall);

		player_collision(window, Thief, Scientist, Builder, Astronaut, top1, top2, top3, top4, left1, left2, left3, left4, right1, right2, right3, right4, down1, down2, down3, down4);







		//////////CAMERA MOVEMENT
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
		view.setCenter(midx, 400);
		view.setSize(1920 / 1.375, 1080 / 1.375);
		screenratio = 1.375 / 1.125;

		////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,400);
		sel = paused.pressed();

		////////////////////////////////////////////////

		Tdeath.setPosition(midx - 698, 10);
		Sdeath.setPosition(midx - 698, 10);
		Bdeath.setPosition(midx - 698, 10);
		Adeath.setPosition(midx - 698, 10);

		////death
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
		////////admin powers
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


		/////////EVENT HAS TO BE ABOVE DRAW AFTER EVERYTHING
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


		window.setView(view);


		window.clear(Color(250, 200, 152)); //adding background color 

		////////DRAWING EVERYTHING
		window.draw(wall_1);
		window.draw(wall_2);
		window.draw(wall_3);
		window.draw(wall_4);
		window.draw(wall_5);
		window.draw(wall_6);
		window.draw(wall_7);
		window.draw(wall_8);
		window.draw(wall_9);
		window.draw(wall_10);
		window.draw(wall_11);
		window.draw(wall_12);
		window.draw(wall_13);
		window.draw(wall_14);
		window.draw(wall_15);
		window.draw(wall_16);
		window.draw(wall_17);
		window.draw(wall_18);
		window.draw(wall_19);
		window.draw(wall_20);
		window.draw(wall_21);
		window.draw(wall_22);
		window.draw(wall_23);
		window.draw(wall_24);
		window.draw(laser1);
		for (int i = 0; i < num_lasers; i++) {
			window.draw(laser2[i]);
		}
		window.draw(laser3);
		window.draw(laser4);
		window.draw(button1);
		window.draw(buttonp1);
		window.draw(button2);
		window.draw(buttonp2);
		window.draw(button3);
		window.draw(buttonp3);
		window.draw(teleporter1);
		window.draw(teleporter2);
		window.draw(door);
		window.draw(squares_1);
		window.draw(squares_2);
		window.draw(squares_3);
		window.draw(squares_4);
		window.draw(squares_5);
		window.draw(squares_6);
		window.draw(squares_7);
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
		window.draw(groundtex11);
		window.draw(groundtex12);
		window.draw(groundtex13);
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
			if (ls.getScale().x < 1 / 1.375) {
				ls.setScale(ls.getScale().x + 0.02, ls.getScale().x + 0.02);
			}
			ls.setPosition(midx, 400);
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