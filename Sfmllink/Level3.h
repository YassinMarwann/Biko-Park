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




void Level3(RenderWindow& window, int& pagenum) {



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

	Music lazer;
	lazer.openFromFile("../Assets/Sounds/lasar.mp3");

	Music fall;
	fall.openFromFile("../Assets/Sounds/fall.mp3");
	

	//MAP TEXTURES AND POSITIONS


	//SETTING THE MAIN Map TEXTURE
	Texture ground;
	ground.loadFromFile("../Pico/ground.jpg");

	//Button Textures
	Texture butt;
	butt.loadFromFile("../Pico/button.png");

	Texture buttpress;
	buttpress.loadFromFile("../Pico/buttonpressed.png");



	////////////////////////////////////////////////          SECTION 1           ///////////////////////////////////////////////////////

	Sprite groundtex(ground);
	groundtex.setPosition(0, 900);
	groundtex.setScale(5, 3.5);


	
	Sprite groundtex2(ground);
	groundtex2.setPosition(0, 900);
	groundtex2.setScale(1, -30);

	
	Sprite groundtex3(ground);
	groundtex3.setPosition(1800, -250);
	groundtex3.setScale(4, 3.5);

	
	Sprite groundtex4(ground);
	groundtex4.setPosition(1965, 300);
	groundtex4.setScale(3.1, 1);

	
	Sprite groundtex5(ground);
	groundtex5.setPosition(4400, -19);
	groundtex5.setScale(0.15, 4);


	Sprite movingwall1(ground);
	movingwall1.setPosition(1769, 1800);
	movingwall1.setScale(0.5, -8.5);


	Sprite groundtex6(ground);
	groundtex6.setPosition(3065, 26);
	groundtex6.setScale(0.3, 3.48);


	//////////////////////// Button1 ----------> Raises the wall 
	Sprite button1(butt);
	button1.setPosition(2100, 270);
	button1.setScale(0.14313, 0.1228);

	Sprite buttonp1(buttpress);
	buttonp1.setPosition(2100, 290);
	buttonp1.setScale(0, 0);
	

	//////////   Lasers ///////////

	RectangleShape laser1(Vector2f(3, 270));
	laser1.setPosition(2303, 29);
	laser1.setFillColor(Color::Red);
	laser1.setOutlineColor(Color::Red);
	laser1.setOutlineThickness(3);


	RectangleShape laser2(Vector2f(3, 270));
	laser2.setPosition(2350, 29);
	laser2.setFillColor(Color::Red);
	laser2.setOutlineColor(Color::Red);
	laser2.setOutlineThickness(3);

	RectangleShape laser3(Vector2f(3, 270));
	laser3.setPosition(2400, 29);
	laser3.setFillColor(Color::Red);
	laser3.setOutlineColor(Color::Red);
	laser3.setOutlineThickness(3);

	RectangleShape laser4(Vector2f(3, 270));
	laser4.setPosition(2447, 29);
	laser4.setFillColor(Color::Red);
	laser4.setOutlineColor(Color::Red);
	laser4.setOutlineThickness(3);


	//////////////////////// Button2 ----------> Drops the lasers 
	Sprite button2(butt);
	button2.setPosition(2600, 270);
	button2.setScale(0.14313, 0.1228);

	Sprite buttonp2(buttpress);
	buttonp2.setPosition(2600, 290);
	buttonp2.setScale(0, 0);
	
	////////////////// KEY /////////////////////

	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(2830, 200);
	key.setScale(0.19, 0.19);

	////////////////////////////////////////////////          SECTION 2           ///////////////////////////////////////////////////////

	
	Sprite groundtex7(ground);
	groundtex7.setPosition(3400, 900);
	groundtex7.setScale(2, 3.5);

	Sprite groundtex8(ground);
	groundtex8.setPosition(3900, 70);
	groundtex8.setScale(0.8, 0.6);

	Sprite groundtex9(ground);
	groundtex9.setPosition(4050, 250);
	groundtex9.setScale(1, 0.6);

	Sprite groundtex10(ground);
	groundtex10.setPosition(4100, 400);
	groundtex10.setScale(2, 0.6);

	//Gound 3 MOVING GROUND 
	Sprite movingwall2(ground);
	movingwall2.setPosition(3400, 940);
	movingwall2.setScale(2, 2);

	//Gound 3 (Main ground going to Section3)
	Sprite groundtex12(ground);
	groundtex12.setPosition(4800, 900);
	groundtex12.setScale(5, 3.5);



	////////////////////////////////////////////   SQUARES   ///////////////////////////////////////


	Texture squares;
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares1(squares);
	squares1.setTexture(squares);
	squares1.setPosition(4600, 450);
	squares1.setScale(1.2, 1.2);



	////////////////////////////////////////////   BUTTONS   ///////////////////////////////////////


	//////////////////////// Button3 ----------> DROPS THE BOX 
	Sprite button3(butt);
	button3.setPosition(4300, 225);
	button3.setScale(0.14313, 0.1228);

	Sprite buttonp3(buttpress);
	buttonp3.setPosition(4300, 240);
	buttonp3.setScale(0, 0);
	


	//////////////////////// Button4 ----------> Moves The Last Platform in Section 2 
	Sprite button4(butt);
	button4.setPosition(5000, 870);
	button4.setScale(0.14313, 0.1228);

	Sprite buttonp4(buttpress);
	buttonp4.setPosition(5000, 885);
	buttonp4.setScale(0, 0);

	////////////////////////////////////////////////          SECTION 3           ///////////////////////////////////////////////////////

	// LARGE WALL
	Sprite groundtex13(ground);
	groundtex13.setPosition(5500, 950);
	groundtex13.setScale(3.2, -3.7);

	//most right part
	Sprite groundtex14(ground);
	groundtex14.setPosition(6700, 1150);
	groundtex14.setScale(1, -30);

	//PLATFORM that moves 
	Sprite movingwall3(ground);
	movingwall3.setPosition(5310, 1000); //1000
	movingwall3.setScale(0.5, 3.7);

	//invisible Wall
	Sprite groundtex15(ground);
	groundtex15.setColor(sf::Color(255, 255, 255, 0));
	groundtex15.setPosition(5380, 579.5);
	groundtex15.setScale(0.25, 1);

	//////////   Lasers ///////////

	RectangleShape laser5(Vector2f(3, 695));
	laser5.setPosition(5800, -40);
	laser5.setFillColor(Color::Red);
	laser5.setOutlineColor(Color::Red);
	laser5.setOutlineThickness(3);

	RectangleShape laser6(Vector2f(3, 695));
	laser6.setPosition(5850, -40);
	laser6.setFillColor(Color::Red);
	laser6.setOutlineColor(Color::Red);
	laser6.setOutlineThickness(3);

	RectangleShape laser7(Vector2f(3, 695));
	laser7.setPosition(5900, -40);
	laser7.setFillColor(Color::Red);
	laser7.setOutlineColor(Color::Red);
	laser7.setOutlineThickness(3);

	RectangleShape laser8(Vector2f(3, 695));
	laser8.setPosition(5950, -40);
	laser8.setFillColor(Color::Red);
	laser8.setOutlineColor(Color::Red);
	laser8.setOutlineThickness(3);



	////////////////////////////////////////////   BUTTONS   ///////////////////////////////////////

	//////////////////////// Button5 ----------> Raises The Platform
	Sprite button5(butt);
	button5.setPosition(6075, 627);
	button5.setScale(0.14313, 0.1228);

	Sprite buttonp5(buttpress);
	buttonp5.setPosition(6075, 642);
	buttonp5.setScale(0, 0);
	

	//////////////////////// Button6 ----------> Opens the Laser 
	Sprite button6(butt);
	button6.setPosition(6175, 627);
	button6.setScale(0.14313, 0.1228);

	Sprite buttonp6(buttpress);
	buttonp6.setPosition(6175, 642);
	buttonp6.setScale(0, 0);
	



	////////////////////////////////////////////   DOOR   ///////////////////////////////////////

	// DOOR TEXTURES
	Texture door1;
	door1.loadFromFile("../Pico/closed.png");

	Texture door2;
	door2.loadFromFile("../Pico/open.png");

	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(6450, 533);
	door.setScale(0.25, 0.25);

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
	hint1.loadFromFile("../Assets/Texture/level3 1.png");//adding ground texture
	Sprite Hint1(hint1);
	Hint1.setTexture(hint1);
	Hint1.setPosition(1763, 800);
	Hint1.setScale(0.5, 0.5);

	Texture hint2;
	hint2.loadFromFile("../Assets/Texture/level3 2.png");//adding ground texture
	Sprite Hint2(hint2);
	Hint2.setTexture(hint2);
	Hint2.setPosition(5500, 500);
	Hint2.setScale(0.7, 0.7);

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
	Tdeath.setScale(1 , 1 );

	Texture scientistdeath;
	scientistdeath.loadFromFile("../Assets/Texture/deadscience.png");
	Sprite Sdeath(scientistdeath);
	Sdeath.setTexture(scientistdeath);
	Sdeath.setScale(1 , 1 );

	Texture builderdeath;
	builderdeath.loadFromFile("../Assets/Texture/deadbuilder.png");
	Sprite Bdeath(builderdeath);
	Bdeath.setTexture(builderdeath);
	Bdeath.setScale(1 , 1 );

	Texture astrodeath;
	astrodeath.loadFromFile("../Assets/Texture/deadastro.png");
	Sprite Adeath(astrodeath);
	Adeath.setTexture(astrodeath);
	Adeath.setScale(1 , 1 );

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
	left_wall = 393;


	Clock clock;
	Clock clock3;



	while (window.isOpen()) {

		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(395, 100);
			Scientist.start(470, 100);
			Builder.start(545, 100);
			Astronaut.start(620, 100);
		}

		//Buttons

		if (button_ispressed) {
			buttonp1.setTexture(buttpress);
			buttonp1.setScale(0.1431, 0.13475);

			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
			
			if (!movingwall1.getGlobalBounds().intersects(groundtex4.getGlobalBounds()))
			{
				if (pause == false)
					movingwall1.move(0, -0.5);
			}

		}


		if (button_ispressed2) {
			buttonp2.setScale(0.14313, 0.1228);
			button2.setScale(0, 0);

			laser1.setScale(0, 0);
			laser2.setScale(0, 0);
			laser3.setScale(0, 0);
			laser4.setScale(0, 0);

			if (playsound == 1)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}


		if (button_ispressed3) {
			buttonp3.setScale(0.14313, 0.1228);
			button3.setScale(0, 0);
			squares1.move(0, 0.5);

			if (playsound == 2)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}


		if (button_ispressed4) {
			buttonp4.setTexture(buttpress);
			buttonp4.setScale(0.1431, 0.13475);
			
			if (!movingwall2.getGlobalBounds().intersects(groundtex12.getGlobalBounds()))
			{
				if (pause == false)
					movingwall2.move(0.5, 0);
			}

			if (playsound == 3)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}

		}


		if (button_ispressed5) {
			buttonp5.setTexture(buttpress);
			buttonp5.setScale(0.1431, 0.13475);
			
			if (!movingwall3.getGlobalBounds().intersects(groundtex15.getGlobalBounds()))
			{
				if (pause == false)
					movingwall3.move(0, -0.5);
			}

			if (playsound == 4)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}

		}


		if (button_ispressed6) {
			buttonp6.setScale(0.14313, 0.1228);
			button6.setScale(0, 0);

			laser5.setScale(0, 0);
			laser6.setScale(0, 0);
			laser7.setScale(0, 0);
			laser8.setScale(0, 0);

			if (playsound == 5)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}


		// gravity of the wall if the builder moves it 
		if (!groundtex6.getGlobalBounds().intersects(groundtex4.getGlobalBounds()))
		{
			if (pause == false)
				groundtex6.move(0, 0.5);
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

		//Key
		if (Key(window, Thief, Scientist, Builder, Astronaut, key, door, door2, pagenum, admin))
		{
			

			if (!freeplay) {
				if (!drawls)
					loading1.restart();
				drawls = true;
				admin_powers = false;

				ofstream outputFile("progress.txt");

				progress = 3;
				outputFile << 3 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 4;
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

		Thief_collision3(Thief, laser1, laser2, laser3, laser4, laser5, laser6, laser7, laser8, squares1, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex14, groundtex15, movingwall1, movingwall2, movingwall3, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5, button6, buttonp6, death);

		//////////SCIENTIST COLLISION ///////////////////

		Scientist_collision3(Scientist, laser1, laser2, laser3, laser4, laser5, laser6, laser7, laser8, squares1, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex14, groundtex15, movingwall1, movingwall2, movingwall3, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5, button6, buttonp6, death);

		//////////BUILDER COLLISION///////////////////

		Builder_collision3(Builder, laser1, laser2, laser3, laser4, laser5, laser6, laser7, laser8, squares1, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex14, groundtex15, movingwall1, movingwall2, movingwall3, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5, button6, buttonp6, death);

		//////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision3(Astronaut, laser1, laser2, laser3, laser4, laser5, laser6, laser7, laser8, squares1, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex14, groundtex15, movingwall1, movingwall2, movingwall3, button1, buttonp1, button2, buttonp2, button3, buttonp3, button4, buttonp4, button5, buttonp5, button6, buttonp6, death, death_ceiling);

		///////////////////////////////////////////////////////////////////

		timer1++;
		timer2++;



		players_movment(window, Thief, Scientist, Builder, Astronaut, clock, left_wall, right_wall);

		player_collision(window, Thief, Scientist, Builder, Astronaut, top1, top2, top3, top4, left1, left2, left3, left4, right1, right2, right3, right4, down1, down2, down3, down4);




		////CAMERA MOVEMENT
		{
			if (Keyboard::isKeyPressed(Keyboard::Left))
			{
				view.move(-6, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Right))
			{
				view.move(6, 0);

			}
			if (Keyboard::isKeyPressed(Keyboard::Up))
			{
				view.move(0, -6);

			}
			if (Keyboard::isKeyPressed(Keyboard::Down))
			{
				view.move(0, 6);

			}
		}

		int midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x + Astronaut.pico.getPosition().x) / 4;
		view.setCenter(midx, 525);
		view.setSize(1920 / 1, 1080 / 1);

		screenratio = 1 / 1.125;

		//////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,525);
		sel = paused.pressed();

		//////////////////////////////////////////////////

		Tdeath.setPosition(midx - 960, -20);
		Sdeath.setPosition(midx - 960, -20);
		Bdeath.setPosition(midx - 960, -20);
		Adeath.setPosition(midx - 960, -20);

		//death
		Text you_died;
		Font font;
		font.loadFromFile("../Assets/fonts/joystixMonospace.otf");

		if (dead[0] == 1 || dead[1] == 1 || dead[2] == 1 || dead[3] == 1) {

			deathscreen = true;
			pause = true;

		}

		if (deathscreen)
		{
			if ((Keyboard::isKeyPressed(Keyboard::Left)) || (Keyboard::isKeyPressed(Keyboard::Up)) || dPadX1 == 100 || dPadY1 == 100 || dPadX0 == 100 || dPadY0 == 100) {
				if (timer2 > 10)
					sel--;
				if (sel == 0)
				{
					sel = 2;
				}
				timer2 = 0;
			}
			if ((Keyboard::isKeyPressed(Keyboard::Right)) || (Keyboard::isKeyPressed(Keyboard::Down)) || dPadX1 == -100 || dPadY1 == -100 || dPadX0 == -100 || dPadY0 == -100) {
				if (timer2 > 10)
					sel++;
				if (sel == 3)
				{
					sel = 1;
				}
				timer2 = 0;
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter) || Joystick::isButtonPressed(0, 1) || Joystick::isButtonPressed(1, 1)) {
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


		if (pause == true)
		{
			if ((Keyboard::isKeyPressed(Keyboard::Left)) || (Keyboard::isKeyPressed(Keyboard::Up)) || dPadX1 == 100 || dPadY1 == 100 || dPadX0 == 100 || dPadY0 == 100) {
				if (timer2 > 10)
					sel--;
				if (sel == -1)
				{
					sel = 2;
				}
				timer2 = 0;
			}
			if ((Keyboard::isKeyPressed(Keyboard::Right)) || (Keyboard::isKeyPressed(Keyboard::Down)) || dPadX1 == -100 || dPadY1 == -100 || dPadX0 == -100 || dPadY0 == -100) {
				if (timer2 > 10)
					sel++;
				if (sel == 3)
				{
					sel = 0;
				}
				timer2 = 0;
			}
			if (Keyboard::isKeyPressed(Keyboard::Enter) || Joystick::isButtonPressed(0, 1) || Joystick::isButtonPressed(1, 1)) {
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
			window.draw(Hint2);
		}
		
		window.draw(groundtex);
		window.draw(groundtex2);
		window.draw(groundtex3);
		window.draw(groundtex4);
		window.draw(groundtex5);
		window.draw(movingwall1);
		window.draw(groundtex6);
		window.draw(groundtex7);
		window.draw(groundtex8);
		window.draw(groundtex9);
		window.draw(groundtex10);
		window.draw(movingwall2);
		window.draw(groundtex12);
		window.draw(groundtex13);
		window.draw(groundtex14);
		window.draw(groundtex15);
		window.draw(movingwall3);
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
		window.draw(button6);
		window.draw(buttonp6);
		window.draw(laser1);
		window.draw(laser2);
		window.draw(laser3);
		window.draw(laser4);
		window.draw(laser5);
		window.draw(laser6);
		window.draw(laser7);
		window.draw(laser8);
		window.draw(squares1);
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
			if (ls.getScale().x < 1 / 1) {
				ls.setScale(ls.getScale().x + 0.02, ls.getScale().x + 0.02);
			}
			ls.setPosition(midx, 525);
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

