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


void Level7(RenderWindow& window, int& pagenum){



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
	Texture wall;
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setTexture(wall);
	wall_1.setPosition(-1200, -105);
	wall_1.setScale(2, 2);


	Sprite wall_2(wall);
	wall_2.setTexture(wall);
	wall_2.setPosition(-600, 0);
	wall_2.setScale(0.2, 1.5);


	Sprite wall_3(wall);
	wall_3.setTexture(wall);
	wall_3.setPosition(600, 100);
	wall_3.setScale(0.3, 1);


	Sprite wall_4(wall);
	wall_4.setTexture(wall);
	wall_4.setPosition(660, 580);
	wall_4.setScale(0.1, 0.5);


	Sprite wall_5(wall);
	wall_5.setTexture(wall);
	wall_5.setPosition(2500, 100);
	wall_5.setScale(0.3, 1);


	Sprite wall_6(wall);
	wall_6.setTexture(wall);
	wall_6.setPosition(2560, 580);
	wall_6.setScale(0.1, 0.5);


	Sprite wall_7(wall);
	wall_7.setTexture(wall);
	wall_7.setPosition(1760, 695);
	wall_7.setScale(0.1, 0.12);



	Sprite wall_8(wall);
	wall_8.setTexture(wall);
	wall_8.setPosition(1760, 110);
	wall_8.setScale(0.1, 0.3);

	Sprite wall_9(wall);
	wall_9.setTexture(wall);
	wall_9.setPosition(3000, 110);
	wall_9.setScale(0.1, 0.3);


	Sprite wall_10(wall);
	wall_10.setTexture(wall);
	wall_10.setPosition(3800, 620);
	wall_10.setScale(0.3, 0.6);


	Sprite wall_11(wall);
	wall_11.setTexture(wall);
	wall_11.setPosition(4699.5, 662);
	wall_11.setScale(0.3, 0.8);

	Sprite wall_12(wall);
	wall_12.setTexture(wall);
	wall_12.setPosition(6100, -25);
	wall_12.setScale(1, 2);

	Texture ground;
	ground.loadFromFile("..//Pico/ground.jpg");//adding ground texture
	Sprite groundtex(ground);
	groundtex.setPosition(0, 900);
	groundtex.setScale(12.0009, 3.5);

	Sprite groundtex2(ground);
	groundtex2.setPosition(0, 0);
	groundtex2.setScale(16, 1.5);


	Sprite groundtex3(ground);
	groundtex3.setPosition(1600, 650);
	groundtex3.setScale(1.5, 1);

	Sprite groundtex4(ground);
	groundtex4.setPosition(2185, 660);
	groundtex4.setScale(0.85, 0.8);

	Sprite groundtex5(ground);
	groundtex5.setPosition(1400, 300);
	groundtex5.setScale(2, 1);

	Sprite groundtex6(ground);
	groundtex6.setPosition(2185, 310);
	groundtex6.setScale(0.85, 0.8);


	Sprite groundtex7(ground);
	groundtex7.setPosition(2690, 300);
	groundtex7.setScale(0.95, 0.8);

	Sprite groundtex8(ground);
	groundtex8.setPosition(3800, 600);
	groundtex8.setScale(2.773, 1);


	Sprite groundtex9(ground);
	groundtex9.setPosition(5500, 600);
	groundtex9.setScale(2, 8);

	Sprite groundtex10(ground);
	groundtex10.setPosition(5500, 610);
	groundtex10.setScale(1.6, 0.8);


	Texture squares;     
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares);
	squares_1.setTexture(squares);
	squares_1.setPosition(1760, 825);
	squares_1.setScale(0.7, 0.7);


	Sprite squares_2(squares);
	squares_2.setTexture(squares);
	squares_2.setPosition(3500, 800);
	squares_2.setScale(0.5, 0.5);


	Sprite squares_3(squares);
	squares_3.setTexture(squares);
	squares_3.setPosition(3600, 710);
	squares_3.setScale(0.5, 0.5);


	Sprite squares_4(squares);
	squares_4.setTexture(squares);
	squares_4.setPosition(3700, 640);
	squares_4.setScale(0.5, 0.5);



	RectangleShape laser(Vector2f(3, 300));
	laser.setPosition(1740, 355);
	laser.setFillColor(Color::Red);
	laser.setOutlineColor(Color::Red);
	laser.setOutlineThickness(3);


	RectangleShape laser1(Vector2f(3, 300));
	laser1.setPosition(1800, 355);
	laser1.setFillColor(Color::Red);
	laser1.setOutlineColor(Color::Red);
	laser1.setOutlineThickness(3);

	RectangleShape laser2(Vector2f(3, 300));
	laser2.setPosition(1860, 355);
	laser2.setFillColor(Color::Red);
	laser2.setOutlineColor(Color::Red);
	laser2.setOutlineThickness(3);

	RectangleShape laser3(Vector2f(3, 601));
	laser3.setPosition(3830, 100);
	laser3.setFillColor(Color::Red);
	laser3.setOutlineColor(Color::Red);
	laser3.setOutlineThickness(3);

	RectangleShape laser4(Vector2f(3, 601));
	laser4.setPosition(3890, 100);
	laser4.setFillColor(Color::Red);
	laser4.setOutlineColor(Color::Red);
	laser4.setOutlineThickness(3);

	RectangleShape laser5(Vector2f(3, 601));
	laser5.setPosition(3950, 100);
	laser5.setFillColor(Color::Red);
	laser5.setOutlineColor(Color::Red);
	laser5.setOutlineThickness(3);

	Texture butt;
	butt.loadFromFile("../Pico/button.png");
	Texture buttpress;
	buttpress.loadFromFile("../Pico/buttonpressed.png");

	Sprite button(butt);
	button.setPosition(550, 870);
	button.setScale(0.14313, 0.1228);
	Sprite buttonp(buttpress);
	buttonp.setScale(0, 0);

	Sprite button1(butt);
	button1.setPosition(2000, 620);
	button1.setScale(0.14313, 0.1228);
	Sprite buttonp1(buttpress);
	buttonp1.setScale(0, 0);


	Sprite button2(butt);
	button2.setPosition(2000, 270);
	button2.setScale(0.14313, 0.1228);
	Sprite buttonp2(buttpress);
	buttonp2.setScale(0, 0);


	Sprite button3(butt);
	button3.setPosition(2900, 270);
	button3.setScale(0.14313, 0.1228);
	Sprite buttonp3(buttpress);
	buttonp3.setScale(0, 0);


	Sprite button4(butt);
	button4.setPosition(4200, 570);
	button4.setScale(0.14313, 0.1228);
	Sprite buttonp4(buttpress);
	buttonp4.setScale(0, 0);

	Sprite button5(butt);
	button5.setPosition(5700, 570);
	button5.setScale(0.14313, 0.1228);
	Sprite buttonp5(buttpress);
	buttonp5.setScale(0, 0);




	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(4450, 750);
	key.setScale(0.2, 0.2);


	Texture door1;
	door1.loadFromFile("../Pico/closed.png");
	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(5950, 475);
	door.setScale(0.25, 0.25);

	Texture door2;
	door2.loadFromFile("../Pico/open.png");

	Texture teleport;
	teleport.loadFromFile("../Pico/teleporter1.png");



	Sprite teleporter1(teleport);
	teleporter1.setPosition(2770, 815);
	teleporter1.setScale(0.17, 0.18);

	Sprite teleporter2(teleport);
	teleporter2.setPosition(2770, 215);
	teleporter2.setScale(-0.17, 0.18);



	Sprite teleporter3(teleport);
	teleporter3.setPosition(4500, 515);
	teleporter3.setScale(0.17, 0.18);

	Sprite teleporter4(teleport);
	teleporter4.setPosition(4100, 815);
	teleporter4.setScale(-0.17, 0.18);


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

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	left_wall = 70;


	Clock clock;
	Clock clock3;



	while (window.isOpen()) {

		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(70, 100);
			Scientist.start(145, 100);
			Builder.start(220, 100);
			Astronaut.start(295, 100);
		}


		if (button_ispressed) {
			buttonp4.setTexture(buttpress);
			buttonp4.setPosition(4200, 590);
			buttonp4.setScale(0.1431, 0.13475);
			laser3.setScale(0, 0);
			laser4.setScale(0, 0);
			laser5.setScale(0, 0);
			if (playsound == 4)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforwall) {
			buttonp.setTexture(buttpress);
			buttonp.setPosition(550, 890);
			buttonp.setScale(0.1431, 0.13475);
			if (pause == false) {
				wall_4.move(0, -0.5);
				if (easy) {
					wall_2.move(0.6, 0);
				}
				if (medium) {
					wall_2.move(0.65, 0);
				}
				if (hard) {
					wall_2.move(0.7, 0);
				}
			}
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}


		if (button_ispressedforwall2) {
			buttonp1.setTexture(buttpress);
			buttonp1.setPosition(2000, 640);
			buttonp1.setScale(0.1431, 0.13475);
			if (pause == false) {
				wall_8.move(0, -0.5);
			}
			if (playsound == 1)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}



		if (button_ispressedforwall3) {
			buttonp2.setTexture(buttpress);
			buttonp2.setPosition(2000, 290);
			buttonp2.setScale(0.1431, 0.13475);
			if (pause == false) {
				wall_6.move(0, -0.5);
			}
			if (playsound == 2)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforground) {
			buttonp3.setTexture(buttpress);
			buttonp3.setPosition(2900, 290);
			buttonp3.setScale(0.1431, 0.13475);
			if(!groundtex4.getGlobalBounds().intersects(wall_7.getGlobalBounds()))
			{
				if (pause == false)  
					groundtex4.move(-0.5, 0); 
			}

			if (!groundtex6.getGlobalBounds().intersects(laser.getGlobalBounds())) 
			{
				if (pause == false)  
					groundtex6.move(-0.5, 0); 
			}
			if (playsound == 3)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforground2) {
			buttonp5.setTexture(buttpress);
			buttonp5.setPosition(5700, 590);
			buttonp5.setScale(0.1431, 0.13475);
			if(!groundtex10.getGlobalBounds().intersects(wall_11.getGlobalBounds()))
			{
				if (pause == false) 
					groundtex10.move(-0.5, 0);
			}
			if (playsound == 5)
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

		//// abilities sounds

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

				progress = 7;
				outputFile << 7 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 8;
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

		if(!admin_powers)
		{
			if (wall_2.getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {
				dead[0] = true;
			}
			if (wall_2.getGlobalBounds().intersects(Scientist.pico.getGlobalBounds())) {
				dead[1] = true;
			}
			if (wall_2.getGlobalBounds().intersects(Builder.pico.getGlobalBounds())) {
				dead[2] = true;
			}
			if (wall_2.getGlobalBounds().intersects(Astronaut.pico.getGlobalBounds())) {
				dead[3] = true;
			}
		}
		


		//THIEF COLLISIONS
		Thief_collision7(Thief, laser, laser2, laser3, laser5, squares_1, squares_2, squares_3, squares_4, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, button, buttonp, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5,death);
	    
		//SCIENTIST COLLISIONS
		Scientist_collision7(Scientist,teleporter1,teleporter2,teleporter3,teleporter4, laser, laser2, laser3, laser5, squares_1, squares_2, squares_3, squares_4, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, button, buttonp, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5, death);

		//BUILDER COLLISIONS
		Builder_collision7(Builder, laser, laser2, laser3, laser5, squares_1, squares_2, squares_3, squares_4, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, button, buttonp, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5, death);

		//ASTRONAUT COLLISIONS
		Astronaut_collision7(Astronaut, laser, laser2, laser3, laser5, squares_1, squares_2, squares_3, squares_4, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, wall_7, wall_8, wall_9, wall_10, wall_11, wall_12, button, buttonp, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5, death);
		

		timer1++;
		timer2++;


		players_movment(window, Thief, Scientist, Builder, Astronaut, clock, left_wall, right_wall);

		player_collision(window, Thief, Scientist, Builder, Astronaut, top1, top2, top3, top4, left1, left2, left3, left4, right1, right2, right3, right4, down1, down2, down3, down4);







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
		int midx = wall_2.getPosition().x + 1920 / 1.125 / 2 + 175;
		view.setCenter(midx, 500);
		view.setSize(1920 / 1.125, 1080 / 1.125);

		screenratio = 1.125 / 1.125;

		//////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,500);
		sel = paused.pressed();

		//////////////////////////////////////////////////

		Tdeath.setPosition(midx - 853, 20);
		Sdeath.setPosition(midx - 853, 20);
		Bdeath.setPosition(midx - 853, 20);
		Adeath.setPosition(midx - 853, 20);

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
		window.draw(death);
		window.draw(laser);
		window.draw(laser1);
		window.draw(laser2);
		window.draw(laser3);
		window.draw(laser4);
		window.draw(laser5);
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
		window.draw(squares_1);
		window.draw(squares_2);
		window.draw(squares_3);
		window.draw(squares_4);
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
		window.draw(button);
		window.draw(buttonp);
		window.draw(button1);
		window.draw(buttonp1);
		window.draw(button2);
		window.draw(buttonp2);
		window.draw(button3);
		window.draw(buttonp3);
		window.draw(button4);
		window.draw(buttonp4);
		window.draw(button5);
		window.draw(buttonp5);
		window.draw(teleporter1);
		window.draw(teleporter2);
		window.draw(teleporter3);
		window.draw(teleporter4);
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
			ls.setPosition(midx, 500);
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