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




void Level5(RenderWindow& window, int& pagenum) {

	

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
	ground.loadFromFile("..//Pico/ground.jpg");
	Sprite groundtex1(ground);
	groundtex1.setTexture(ground);
	groundtex1.setPosition(0, 900);
	groundtex1.setScale(1.5, 4);


	Sprite groundtex2(ground);
	groundtex2.setTexture(ground);
	groundtex2.setPosition(680, 900);
	groundtex2.setScale(1.8, 4);

	Sprite groundtex3(ground); // for respawing players if they fall for celling
	groundtex3.setTexture(ground);
	groundtex3.setPosition(-1500, 1700);
	groundtex3.setScale(50, 0.7);

	Sprite groundtex4(ground);
	groundtex4.setTexture(ground);
	groundtex4.setPosition(2050, 900);
	groundtex4.setScale(3.5, 4);

	Sprite groundtex6(ground); // After the floating grounds
	groundtex6.setTexture(ground);
	groundtex6.setPosition(4550, 900);
	groundtex6.setScale(4, 5.69);

	Sprite groundtex7(ground); //ground above the first moving wall and contains button
	groundtex7.setTexture(ground);
	groundtex7.setPosition(4750, 500);
	groundtex7.setScale(1.5, 3);

	Sprite groundtex8(ground); // Contains Laser and Telepoter
	groundtex8.setTexture(ground);
	groundtex8.setPosition(6171, 1112.5);
	groundtex8.setScale(1.682, 3);

	Sprite groundtex9(ground); // Contains moving wall2
	groundtex9.setTexture(ground);
	groundtex9.setPosition(6275, 900);
	groundtex9.setScale(1.4, 1);

	//the room having the other teleporter and button to open the moving wall
	Sprite groundtex10(ground); // ground above moving wall2
	groundtex10.setTexture(ground);
	groundtex10.setPosition(6250, -90);
	groundtex10.setScale(1.481, 10);


	Sprite groundtex12(ground);
	groundtex12.setTexture(ground);
	groundtex12.setPosition(6800, 900);
	groundtex12.setScale(0.6, 5.69);

	Sprite groundtex13(ground);
	groundtex13.setTexture(ground);
	groundtex13.setPosition(7090, 900);
	groundtex13.setScale(1.2, 5.69);

	Sprite groundtex15(ground); //after fake wall 4
	groundtex15.setTexture(ground);
	groundtex15.setPosition(7530, 900);
	groundtex15.setScale(1.605, 5.69);

	Sprite groundtex16(ground); // contains the door
	groundtex16.setTexture(ground);
	groundtex16.setPosition(7768, 750);
	groundtex16.setScale(1, 2.45);


	////////////////////////////////


	Sprite celling1(ground); //celling for the special ability of the astronaut
	celling1.setTexture(ground);
	celling1.setPosition(1300, 500);
	celling1.setScale(2, 1);

	Sprite celling2(ground); //celling for the special ability of the astronaut
	celling2.setTexture(ground);
	celling2.setPosition(4550, 200);
	celling2.setScale(2.008, 1);

	////////////////////////////////
	Sprite Bridge(ground);
	Bridge.setTexture(ground);
	Bridge.setPosition(2100, 940);
	Bridge.setScale(2.5, 1);


	////////////////////////////////

	Texture buttontext;
	buttontext.loadFromFile("..//Pico/button.png");
	Texture buttonpress;
	buttonpress.loadFromFile("..//Pico/buttonpressed.png");

	Sprite button1(buttontext);
	button1.setTexture(buttontext);
	button1.setPosition(2400, 872);
	button1.setScale(0.14313, 0.1228);
	Sprite buttonp1(buttonpress);
	buttonp1.setScale(0.114504, 0.09824);
	buttonp1.setPosition(2410, 890);

	Sprite button2(buttontext);
	button2.setTexture(buttontext);
	button2.setPosition(2600, 872);
	button2.setScale(0.14313, 0.1228);
	Sprite buttonp2(buttonpress);
	buttonp2.setScale(0.114504, 0.09824);
	buttonp2.setPosition(2610, 890);

	Sprite button3(buttontext);
	button3.setTexture(buttontext);
	button3.setPosition(2800, 872);
	button3.setScale(0.14313, 0.1228);
	Sprite buttonp3(buttonpress);
	buttonp3.setScale(0, 0);

	Sprite button4(buttontext);
	button4.setTexture(buttontext);
	button4.setPosition(3000, 872);
	button4.setScale(0.14313, 0.1228);
	Sprite buttonp4(buttonpress);
	buttonp4.setScale(0.114504, 0.09824);
	buttonp4.setPosition(3010, 890);


	Sprite button5(buttontext);
	button5.setTexture(buttontext);
	button5.setPosition(5200, 873);
	button5.setScale(0.14313, 0.1228);
	Sprite buttonp5(buttonpress);
	buttonp5.setScale(0, 0);


	Sprite button6(buttontext);
	button6.setTexture(buttontext);
	button6.setPosition(5200, 473); //473
	button6.setScale(0.14313, 0.1228);
	Sprite buttonp6(buttonpress);
	buttonp6.setScale(0, 0);


	Sprite button7(buttontext);
	button7.setTexture(buttontext);
	button7.setPosition(6560, 1080);
	button7.setScale(0.14313, 0.1228);
	Sprite buttonp7(buttonpress);
	buttonp7.setScale(0, 0);


	Sprite button8(buttontext);
	button8.setTexture(buttontext);
	button8.setPosition(7100, 870);
	button8.setScale(0.14313, 0.1228);
	Sprite buttonp8(buttonpress);
	buttonp8.setScale(0, 0);


	////////////////////////////////////////////

	Texture squaretex;
	squaretex.loadFromFile("..//Pico/squares.png");
	Sprite floating_square(squaretex);
	floating_square.setTexture(squaretex);
	floating_square.setPosition(6210, 1005);
	floating_square.setScale(0.5, 0.5);

	Sprite floating_square1(squaretex);
	floating_square1.setTexture(squaretex);
	floating_square1.setPosition(3500, 880);
	floating_square1.setScale(0.5, 0.5);

	Sprite floating_square2(squaretex);
	floating_square2.setTexture(squaretex);
	floating_square2.setPosition(3630, 780);
	floating_square2.setScale(0.5, 0.5);

	Sprite floating_square3(squaretex);
	floating_square3.setTexture(squaretex);
	floating_square3.setPosition(3630, 1000);
	floating_square3.setScale(0.5, 0.5);

	Sprite floating_square4(squaretex);
	floating_square4.setTexture(squaretex);
	floating_square4.setPosition(3750, 780);
	floating_square4.setScale(0.5, 0.5);

	Sprite floating_square5(squaretex);
	floating_square5.setTexture(squaretex);
	floating_square5.setPosition(3830, 1000);
	floating_square5.setScale(0.5, 0.5);

	Sprite floating_square6(squaretex);
	floating_square6.setTexture(squaretex);
	floating_square6.setPosition(3930, 900);
	floating_square6.setScale(0.5, 0.5);


	Sprite floating_square7(squaretex);
	floating_square7.setTexture(squaretex);
	floating_square7.setPosition(4030, 820);
	floating_square7.setScale(0.5, 0.5);

	Sprite floating_square8(squaretex);
	floating_square8.setTexture(squaretex);
	floating_square8.setPosition(4130, 960);
	floating_square8.setScale(0.5, 0.5);


	Sprite floating_square9(squaretex);
	floating_square9.setTexture(squaretex);
	floating_square9.setPosition(4350, 960);
	floating_square9.setScale(0.5, 0.5);

	Sprite floating_square10(squaretex);
	floating_square10.setTexture(squaretex);
	floating_square10.setPosition(4430, 880);
	floating_square10.setScale(0.5, 0.5);

	Sprite floating_square11(squaretex);
	floating_square11.setTexture(squaretex);
	floating_square11.setPosition(4230, 880);
	floating_square11.setScale(0.5, 0.5);


	Sprite floating_square12(squaretex);
	floating_square12.setTexture(squaretex);
	floating_square12.setPosition(4230, 1000);
	floating_square12.setScale(0.5, 0.5);


	////////////////////////////////////////////////////////////
	Texture walltex;
	walltex.loadFromFile("..//Pico/wall.jpg");

	Texture wall;
	wall.loadFromFile("..//Pico/bigwall.png");
	Sprite wall1(wall);
	wall1.setTexture(wall);
	wall1.setPosition(-1143, -5);
	wall1.setScale(2, 3);

	Sprite wall2(walltex);
	wall2.setTexture(walltex);
	wall2.setPosition(5301, 250);
	wall2.setScale(0.6, 0.88);

	Sprite wall7(walltex);
	wall7.setTexture(walltex);
	wall7.setPosition(8097, -100);
	wall7.setScale(10, 6);

	////////////////////////////////////////////////

	Sprite fake_wall1(walltex); //fake wall
	fake_wall1.setTexture(walltex);
	fake_wall1.setPosition(588, 900);
	fake_wall1.setScale(1.44, 1.08);

	Sprite fake_wall2(walltex); //fake wall
	fake_wall2.setTexture(walltex);
	fake_wall2.setPosition(6120, 1113);
	fake_wall2.setScale(0.8, 0.81);

	Sprite fake_wall3(walltex);
	fake_wall3.setTexture(walltex);
	fake_wall3.setPosition(7035, 900);
	fake_wall3.setScale(1, 1.535);

	Sprite fake_wall4(walltex);
	fake_wall4.setTexture(walltex);
	fake_wall4.setPosition(7468, 900);
	fake_wall4.setScale(1, 1.535);

	/////////////////////////////

	const int num_lasers = 5;
	RectangleShape laser1[num_lasers];
	for (int i = 0; i < num_lasers; i++) {
		laser1[i].setSize(Vector2f(3, 157.5));
		laser1[i].setPosition(5050 + i * 20, 739);
		laser1[i].setFillColor(Color::Red);
		laser1[i].setOutlineColor(Color::Red);
		laser1[i].setOutlineThickness(3);

	}

	RectangleShape laser2[num_lasers];
	for (int i = 0; i < num_lasers; i++) {
		laser2[i].setSize(Vector2f(3, 129));
		laser2[i].setPosition(6350 + i * 20, 982);
		laser2[i].setFillColor(Color::Red);
		laser2[i].setOutlineColor(Color::Red);
		laser2[i].setOutlineThickness(3);
	}

	/////////////////////////////
	Texture teleport;
	teleport.loadFromFile("..//Pico/teleporter1.png");
	Sprite teleporter1(teleport);
	teleporter1.setTexture(teleport);
	teleporter1.setPosition(6700, 1027);
	teleporter1.setScale(0.17, 0.18);

	Sprite teleporter2(teleport);
	teleporter2.setTexture(teleport);
	teleporter2.setPosition(6870, 815);    
	teleporter2.setScale(0.17, 0.18);

	////////////////////////////

	Sprite movingwall1(walltex);
	movingwall1.setTexture(walltex);
	movingwall1.setPosition(4950, 660);
	movingwall1.setScale(0.8, 0.9);

	Sprite movingwall2(walltex);
	movingwall2.setTexture(walltex);
	movingwall2.setPosition(6460, 670);
	movingwall2.setScale(1, 0.8);

	/////////////////////////////

	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(6440, 1047);
	key.setScale(0.19, 0.19);

	Texture blocktex;
	blocktex.loadFromFile("..//Pico/obstacles.jpg");
	Sprite block(blocktex);
	block.setTexture(blocktex);
	block.setPosition(7292, 809);
	block.setScale(1.2, 1);

	Texture door1;
	door1.loadFromFile("../Pico/closed.png");
	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(7950, 625);
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
	hint1.loadFromFile("../Assets/Texture/level5 1.png");//adding ground texture
	Sprite Hint1(hint1);
	Hint1.setTexture(hint1);
	Hint1.setPosition(2485, 500);
	Hint1.setScale(1, 1);


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

	left_wall = 125;

	Clock clock;
	Clock clock3;

	while (window.isOpen()) {

		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(125, 100);
			Scientist.start(200, 100);
			Builder.start(275, 100);
			Astronaut.start(350, 100);
		}

		//Buttons
		if (button_fakeispressed1) {
			buttonp1.setTexture(buttonpress);
			buttonp1.setPosition(2400, 888);
			buttonp1.setScale(0.1431, 0.13475);
			button1.setScale(0, 0);

		}

		if (button_fakeispressed2) {
			buttonp2.setTexture(buttonpress);
			buttonp2.setPosition(2600, 888);
			buttonp2.setScale(0.1431, 0.13475);
			button2.setScale(0, 0);
		}

		if (button_ispressedforground) {
			buttonp3.setTexture(buttonpress);
			buttonp3.setPosition(2800, 888);
			buttonp3.setScale(0.1431, 0.13475);
			if (!(Bridge.getGlobalBounds().intersects(groundtex2.getGlobalBounds()))) {
				if (pause == false)
				Bridge.move(-0.6, 0);
			}
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_fakeispressed3) {
			buttonp4.setTexture(buttonpress);
			buttonp4.setPosition(3000, 888);
			buttonp4.setScale(0.1431, 0.13475);
			button4.setScale(0, 0);
		}


		if (button_ispressed) {
			buttonp5.setTexture(buttonpress);
			buttonp5.setPosition(5200, 888);
			buttonp5.setScale(0.1431, 0.13475);
			for (int i = 0; i < 5; i++) {
				laser1[i].setScale(0, 0);
			}
			if (playsound == 2)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforwall) {
			buttonp6.setTexture(buttonpress);
			buttonp6.setPosition(5200, 488);
			buttonp6.setScale(0.1431, 0.13475);
			if (!(movingwall1.getGlobalBounds().intersects(celling2.getGlobalBounds()))) {
				if (pause == false)
				movingwall1.move(0, -0.4);
			}
			if (playsound == 1)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}


		if (button_ispressed2) {
			buttonp7.setTexture(buttonpress);
			buttonp7.setPosition(6560, 1095);
			buttonp7.setScale(0.1431, 0.13475);
			for (int i = 0; i < 5; i++) {
				laser2[i].setScale(0, 0);
			}
			if (playsound == 3)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforwall2) {
			buttonp8.setTexture(buttonpress);
			buttonp8.setPosition(7100, 885);
			buttonp8.setScale(0.1431, 0.13475);
			if (pause == false)
			movingwall2.move(0, -0.4);
			if (playsound == 4)
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
			ofstream outputFile("progress.txt");

			

			if (!freeplay) {
				if (!drawls)
					loading1.restart();
				drawls = true;
				admin_powers = false;

				progress = 5;
				outputFile << 5 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 6;
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

		Thief_collision5(Thief, groundtex1, groundtex2, groundtex3, groundtex4, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex15, groundtex16, Bridge, button1, button2, button3, button4, button5, button6, button7, button8, buttonp1, buttonp2, buttonp3, buttonp4, buttonp5, buttonp6, buttonp7, buttonp8, floating_square, floating_square1, floating_square2, floating_square3, floating_square4, floating_square5, floating_square6, floating_square7, floating_square8, floating_square9, floating_square10, floating_square11, floating_square12, wall1, wall2, wall7, laser1, laser2, teleporter1, teleporter2, movingwall1, movingwall2, block, celling1, celling2, death, death_ceiling,  fake_wall1,  fake_wall2,  fake_wall3,  fake_wall4);

		//////////SCIENTIST COLLISION ///////////////////

		Scientist_collision5(Scientist, groundtex1, groundtex2, groundtex3, groundtex4, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex15, groundtex16, Bridge, button1, button2, button3, button4, button5, button6, button7, button8, buttonp1, buttonp2, buttonp3, buttonp4, buttonp5, buttonp6, buttonp7, buttonp8, floating_square, floating_square1, floating_square2, floating_square3, floating_square4, floating_square5, floating_square6, floating_square7, floating_square8, floating_square9, floating_square10, floating_square11, floating_square12, wall1, wall2, wall7, laser1, laser2, teleporter1, teleporter2, movingwall1, movingwall2, block, celling1, celling2, death, death_ceiling,  fake_wall1, fake_wall2, fake_wall3, fake_wall4);

		//////////BUILDER COLLISION///////////////////

		Builder_collision5(Builder, groundtex1, groundtex2, groundtex3, groundtex4, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex15, groundtex16, Bridge, button1, button2, button3, button4, button5, button6, button7, button8, buttonp1, buttonp2, buttonp3, buttonp4, buttonp5, buttonp6, buttonp7, buttonp8, floating_square, floating_square1, floating_square2, floating_square3, floating_square4, floating_square5, floating_square6, floating_square7, floating_square8, floating_square9, floating_square10, floating_square11, floating_square12, wall1, wall2, wall7, laser1, laser2, teleporter1, teleporter2, movingwall1, movingwall2, block, celling1, celling2, death, death_ceiling, fake_wall1, fake_wall2, fake_wall3, fake_wall4);

		//////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision5(Astronaut, groundtex1, groundtex2, groundtex3, groundtex4, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex12, groundtex13, groundtex15, groundtex16, Bridge, button1, button2, button3, button4, button5, button6, button7, button8, buttonp1, buttonp2, buttonp3, buttonp4, buttonp5, buttonp6, buttonp7, buttonp8, floating_square, floating_square1, floating_square2, floating_square3, floating_square4, floating_square5, floating_square6, floating_square7, floating_square8, floating_square9, floating_square10, floating_square11, floating_square12, wall1, wall2, wall7, laser1, laser2, teleporter1, teleporter2, movingwall1, movingwall2, block, celling1, celling2, death, death_ceiling, fake_wall1, fake_wall2, fake_wall3, fake_wall4);

		///////////////////////////////////////////////////////////////////
		

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
				view.move(0, -3);

			}
			if (Keyboard::isKeyPressed(Keyboard::Down))
			{
				view.move(0, 3);

			}
		}
		int midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x + Astronaut.pico.getPosition().x*2) / 4;
		view.setCenter(midx, 600);
		view.setSize(1920/ 1.125, 1080/ 1.125);

		screenratio = 1.125 / 1.125;

		//////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,600);
		sel = paused.pressed();

		//////////////////////////////////////////////////

		Tdeath.setPosition(midx - 853, 120);
		Sdeath.setPosition(midx - 853, 120);
		Bdeath.setPosition(midx - 853, 120);
		Adeath.setPosition(midx - 853, 120);

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
		if(easy||fp) {
			window.draw(Hint1);
		}
		window.draw(death_ceiling);
		window.draw(groundtex1);
		window.draw(groundtex2);
		window.draw(groundtex3);
		window.draw(groundtex4);
		window.draw(groundtex6);
		window.draw(groundtex7);
		window.draw(groundtex8);
		window.draw(groundtex9);
		window.draw(groundtex10);
		window.draw(groundtex12);
		window.draw(groundtex13);
		window.draw(groundtex15);
		window.draw(groundtex16);
		if(medium||hard){
			window.draw(fake_wall1);
			window.draw(fake_wall2);
			window.draw(fake_wall3);
			window.draw(fake_wall4);
		}
		window.draw(wall1);
		window.draw(wall2);
		window.draw(wall7);
		window.draw(celling1);
		window.draw(celling2);
		window.draw(Bridge);
		window.draw(floating_square);
		window.draw(floating_square1);
		window.draw(floating_square2);
		window.draw(floating_square3);
		window.draw(floating_square4);
		window.draw(floating_square5);
		window.draw(floating_square6);
		window.draw(floating_square7);
		window.draw(floating_square8);
		window.draw(floating_square9);
		window.draw(floating_square10);
		window.draw(floating_square11);
		window.draw(floating_square12);
		window.draw(movingwall1);
		window.draw(movingwall2);
		for (int i = 0; i < num_lasers; i++) 
		{
			window.draw(laser1[i]);
		}
		for (int i = 0; i < num_lasers; i++) 
		{
			window.draw(laser2[i]);
		}
		window.draw(teleporter1);
		window.draw(teleporter2);
		window.draw(block);
		window.draw(door);
		window.draw(buttonp1);
		window.draw(button1);
		window.draw(buttonp2);
		window.draw(button2);
		window.draw(buttonp3);
		window.draw(button3);
		window.draw(buttonp4);
		window.draw(button4);
		window.draw(button5);
		window.draw(buttonp5);
		window.draw(button6);
		window.draw(buttonp6);
		window.draw(button7);
		window.draw(buttonp7);
		window.draw(button8);
		window.draw(buttonp8);
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