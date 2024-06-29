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




void Level2(RenderWindow& window, int& pagenum) {



	View view = window.getDefaultView();
	View menu = window.getDefaultView();



	// sounds for all things///
	
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
	ground.loadFromFile("..//Pico/ground.jpg");//adding ground texture
	Sprite groundtex(ground);
	groundtex.setPosition(0, 900);
	groundtex.setScale(13.8888888, 3.5);

	Sprite groundtex2(ground);
	groundtex2.setPosition(-7, 95);
	groundtex2.setScale(14, 1.5);

	Sprite groundtex3(ground);
	groundtex3.setPosition(900, 200);
	groundtex3.setScale(1, 1);

	RectangleShape laser(Vector2f(3, 701));
	laser.setPosition(910, 195);
	laser.setFillColor(Color::Red);
	laser.setOutlineColor(Color::Red);
	laser.setOutlineThickness(3);

	RectangleShape laser1(Vector2f(3, 701));
	laser1.setPosition(950, 195);
	laser1.setFillColor(Color::Red);
	laser1.setOutlineColor(Color::Red);
	laser1.setOutlineThickness(3);


	RectangleShape laser2(Vector2f(3, 701));
	laser2.setPosition(990, 195);
	laser2.setFillColor(Color::Red);
	laser2.setOutlineColor(Color::Red);
	laser2.setOutlineThickness(3);

	RectangleShape laser3(Vector2f(3, 701));
	laser3.setPosition(1050, 195);
	laser3.setFillColor(Color::Red);
	laser3.setOutlineColor(Color::Red);
	laser3.setOutlineThickness(3);

	RectangleShape laser4(Vector2f(3, 701));
	laser4.setPosition(1110, 195);
	laser4.setFillColor(Color::Red);
	laser4.setOutlineColor(Color::Red);
	laser4.setOutlineThickness(3);

	RectangleShape laser5(Vector2f(3, 701));
	laser5.setPosition(1170, 195);
	laser5.setFillColor(Color::Red);
	laser5.setOutlineColor(Color::Red);
	laser5.setOutlineThickness(3);

	RectangleShape laser6(Vector2f(3, 701));
	laser6.setPosition(1230, 195);
	laser6.setFillColor(Color::Red);
	laser6.setOutlineColor(Color::Red);
	laser6.setOutlineThickness(3);

	RectangleShape laser7(Vector2f(3, 701));
	laser7.setPosition(1280, 195);
	laser7.setFillColor(Color::Red);
	laser7.setOutlineColor(Color::Red);
	laser7.setOutlineThickness(3);








	Texture butt;
	butt.loadFromFile("../Pico/button.png");


	Sprite button(butt);
	button.setPosition(1380, 870);
	button.setScale(0.14313, 0.1228);
	Texture buttpress;
	buttpress.loadFromFile("../Pico/buttonpressed.png");
	Sprite buttonp(buttpress);
	buttonp.setScale(0, 0);


	Sprite button1(butt);
	button1.setPosition(2780, 870);
	button1.setScale(0.14313, 0.1228);

	Sprite buttonp1(buttpress);
	buttonp1.setScale(0, 0);

	Texture wall;
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setTexture(wall);
	wall_1.setPosition(2200, 450);
	wall_1.setScale(0.5, 1.2);


	Sprite wall_2(wall);
	wall_2.setTexture(wall);
	wall_2.setPosition(-200 - 970.5, 0);
	wall_2.setScale(2, 1.83);


	Sprite wall_3(wall);
	wall_3.setTexture(wall);
	wall_3.setPosition(3800, 610);
	wall_3.setScale(0.5, 0.8);

	Sprite groundtex4(ground);
	groundtex4.setPosition(3800, 600);
	groundtex4.setScale(4.3125, 1);


	Sprite wall_4(wall);
	wall_4.setTexture(wall);
	wall_4.setPosition(5178, 662);
	wall_4.setScale(0.5, 0.8);



	Texture teleport;
	teleport.loadFromFile("../Pico/teleporter1.png");
	Sprite teleporter1(teleport);
	teleporter1.setPosition(3700, 815);
	teleporter1.setScale(0.17, 0.18);

	Sprite teleporter2(teleport);
	teleporter2.setPosition(4220, 815);
	teleporter2.setScale(-0.17, 0.18);

	Texture mov_wall;
	mov_wall.loadFromFile("../Pico/wall2.png");
	Sprite moving_wall(mov_wall);
	moving_wall.setPosition(5376, 213);
	moving_wall.setScale(1.4, 0.989);

	Texture squares;      //adding squares to jump on it
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares);
	squares_1.setTexture(squares);
	squares_1.setPosition(3500, 800);
	squares_1.setScale(0.5, 0.5);


	Sprite squares_2(squares);
	squares_2.setTexture(squares);
	squares_2.setPosition(3600, 710);
	squares_2.setScale(0.5, 0.5);


	Sprite squares_3(squares);
	squares_3.setTexture(squares);
	squares_3.setPosition(3700, 640);
	squares_3.setScale(0.5, 0.5);


	Sprite squares_4(squares);
	squares_4.setTexture(squares);
	squares_4.setPosition(5675, 600);
	squares_4.setScale(0.5, 0.5);


	Sprite squares_5(squares);
	squares_5.setTexture(squares);
	squares_5.setPosition(5875, 600);
	squares_5.setScale(0.5, 0.5);

	Sprite squares_6(squares);
	squares_6.setTexture(squares);
	squares_6.setPosition(6075, 600);
	squares_6.setScale(0.5, 0.5);

	Sprite squares_7(squares);
	squares_7.setTexture(squares);
	squares_7.setPosition(6275, 600);
	squares_7.setScale(0.5, 0.5);

	Sprite squares_8(squares);
	squares_8.setTexture(squares);
	squares_8.setPosition(6475, 600);
	squares_8.setScale(0.5, 0.5);

	Sprite groundtex5(ground);
	groundtex5.setPosition(6600, 600);
	groundtex5.setScale(7, 10);

	Sprite groundtex6(ground);
	groundtex6.setPosition(5500, 1200);
	groundtex6.setScale(5, 1);

	Sprite wall_5(wall);
	wall_5.setTexture(wall);
	wall_5.setPosition(7750, 76);
	wall_5.setScale(2, 1);


	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(4850, 750);
	key.setScale(0.2, 0.2);


	Texture door1;
	door1.loadFromFile("../Pico/closed.png");
	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(7500, 475);
	door.setScale(0.25, 0.25);

	Texture door2;
	door2.loadFromFile("../Pico/open.png");


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
	hint1.loadFromFile("../Assets/Texture/level2 1.png");//adding ground texture
	Sprite Hint1(hint1);
	Hint1.setTexture(hint1);
	Hint1.setPosition(619, 500);
	Hint1.setScale(0.7, 0.7);

	Texture hint2;
	hint2.loadFromFile("../Assets/Texture/level2 2.png");//adding ground texture
	Sprite Hint2(hint2);
	Hint2.setTexture(hint2);
	Hint2.setPosition(1870, 436);
	Hint2.setScale(0.7, 0.7);

	Texture hint3;
	hint3.loadFromFile("../Assets/Texture/level2 3.png");//adding ground texture
	Sprite Hint3(hint3);
	Hint3.setTexture(hint3);
	Hint3.setPosition(3500, 500);
	Hint3.setScale(0.6, 0.6);

	Texture hint4;
	hint4.loadFromFile("../Assets/Texture/level2 4.png");//adding ground texture
	Sprite Hint4(hint4);
	Hint4.setTexture(hint4);
	Hint4.setPosition(5000, 300);
	Hint4.setScale(0.6, 0.6);

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
		//BUTTONS

		if (button_ispressed) {
			buttonp.setTexture(buttpress);
			buttonp.setPosition(1380, 890);
			buttonp.setScale(0.1431, 0.13475);
			laser.setScale(0, 0);
			laser1.setScale(0, 0);
			laser2.setScale(0, 0);
			laser3.setScale(0, 0);
			laser4.setScale(0, 0);
			laser5.setScale(0, 0);
			laser6.setScale(0, 0);
			laser7.setScale(0, 0);
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0;buttonsound.getStatus() == sf::Sound::Playing && i < 2;i++) {}
				playsound++;
			}
		}

		if (button_ispressedforwall) {
			buttonp1.setTexture(buttpress);
			buttonp1.setPosition(2780, 890);
			buttonp1.setScale(0.1431, 0.13475);

			if (pause == false)
				wall_1.move(0, 2);

			if (playsound == 1) {
				buttonsound.play();
				for (int i = 0;buttonsound.getStatus() == sf::Sound::Playing && i < 7;i++) {}
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


		///// abilities

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

		///////


		if (Key(window, Thief, Scientist, Builder, Astronaut, key, door, door2, pagenum, admin))
		{
			

			if (!freeplay) {
				if (!drawls)
					loading1.restart();
				drawls = true;
				admin_powers = false;

				ofstream outputFile("progress.txt");

				progress = 2;
				outputFile << 2 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 3;
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

		Thief_collision2(Thief, laser, laser1, laser2, laser3, laser4, laser5, laser6, laser7, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, wall_1, wall_2, wall_3, wall_4, wall_5, moving_wall, button, buttonp, buttonp1, button_ispressed, death, death_ceiling);

		//////////SCIENTIST COLLISION ///////////////////

		Scientist_collision2(Scientist, teleporter1, teleporter2, laser, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, wall_1, wall_2, wall_3, wall_4, wall_5, moving_wall, button, buttonp, buttonp1, button_ispressed, death, death_ceiling);

		//////////BUILDER COLLISION///////////////////

		Builder_collision2(Builder, laser, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, wall_1, wall_2, wall_3, wall_4, wall_5, moving_wall, button, buttonp, buttonp1, button_ispressed, death, death_ceiling);

		//////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision2(Astronaut, laser, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, wall_1, wall_2, wall_3, wall_4, wall_5, moving_wall, button, button1, buttonp, buttonp1, button_ispressed, death, death_ceiling);

		///////////////////////////////////////////////////////////////////


		timer1++;
		timer2++;


		players_movment(window, Thief, Scientist, Builder, Astronaut, clock, left_wall, right_wall);

		player_collision(window, Thief, Scientist, Builder, Astronaut, top1, top2, top3, top4, left1, left2, left3, left4, right1, right2, right3, right4, down1, down2, down3, down4);







		//CAMERA MOVEMENT
		{
			if (Keyboard::isKeyPressed(Keyboard::Left))
			{
				view.move(-20, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Right))
			{
				view.move(20, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Up))
			{
				view.move(0, -20);

			}
			if (Keyboard::isKeyPressed(Keyboard::Down))
			{
				view.move(0, 20);

			}
		}
		int midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x + Astronaut.pico.getPosition().x) / 4;
		view.setCenter(midx, 600);
		view.setSize(1920 / 1.25, 1080 / 1.25);
		screenratio = 1.25 / 1.125;

		//////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,600);
		sel = paused.pressed();

		//////////////////////////////////////////////////

		Tdeath.setPosition(midx - 768, 167);
		Sdeath.setPosition(midx - 768, 167);
		Bdeath.setPosition(midx - 768, 167);
		Adeath.setPosition(midx - 768, 167);

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
		if(easy||medium||fp){
			window.draw(Hint1);
			window.draw(Hint2);
			window.draw(Hint3);
			window.draw(Hint4);
		}
		
		window.draw(laser);
		window.draw(laser1);
		window.draw(laser2);
		window.draw(laser3);
		window.draw(laser4);
		window.draw(laser5);
		window.draw(laser6);
		window.draw(laser7);
		window.draw(groundtex);
		window.draw(groundtex2);
		window.draw(groundtex3);
		window.draw(groundtex4);
		window.draw(groundtex5);
		window.draw(squares_1);
		window.draw(squares_2);
		window.draw(squares_3);
		window.draw(squares_4);
		window.draw(squares_5);
		window.draw(squares_6);
		window.draw(squares_7);
		window.draw(squares_8);
		window.draw(button);
		window.draw(buttonp);
		window.draw(button1);
		window.draw(buttonp1);
		window.draw(wall_1);
		window.draw(wall_2);
		window.draw(wall_3);
		window.draw(wall_4);
		window.draw(wall_5);
		window.draw(door);
		window.draw(moving_wall);
		window.draw(teleporter1);
		window.draw(teleporter2);
		window.draw(Thief.pico);
		window.draw(Scientist.pico);
		window.draw(Builder.pico);
		window.draw(Astronaut.pico);
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
			if (ls.getScale().x < 1 / 1.25) {
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
		window.display();

	}

}