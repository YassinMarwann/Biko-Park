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



void Level6(RenderWindow& window, int& pagenum){


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

	/////////

	Texture ground; // 1st bottom ground
	ground.loadFromFile("..//Pico/ground.jpg");//adding ground texture
	Sprite groundtex(ground);
	groundtex.setTexture(ground);
	groundtex.setPosition(0, 600);
	groundtex.setScale(4, 3.5);


	Sprite groundtex2(ground); // bottom ground inside the 1st bottom ground 
	groundtex2.setTexture(ground);
	groundtex2.setPosition(510, 650);
	groundtex2.setScale(2.5, 2);

	Sprite groundtex3(ground); // 1st hanging ceiling
	groundtex3.setTexture(ground);
	groundtex3.setPosition(0, -300);
	groundtex3.setScale(6.5, 3.5);

	Sprite groundtex4(ground); // 2nd ground
	groundtex4.setTexture(ground);
	groundtex4.setPosition(2300, 600);
	groundtex4.setScale(5.7, 3.5);

	Sprite groundtex5(ground); // 2nd hanging ceiling
	groundtex5.setTexture(ground);
	groundtex5.setPosition(3400, 300);
	groundtex5.setScale(1, 0.7);

	Sprite groundtex6(ground); // 3rd ground (after three squares)
	groundtex6.setTexture(ground);
	groundtex6.setPosition(5420, 600);
	groundtex6.setScale(4.53, 3);

	Sprite groundtex7(ground); // 1st ground after two squares
	groundtex7.setTexture(ground);
	groundtex7.setPosition(9050, 600);
	groundtex7.setScale(2.5, 3);

	Sprite groundtex8(ground); // 2nd ground after two squares (last ground)
	groundtex8.setTexture(ground);
	groundtex8.setPosition(11300, 480);
	groundtex8.setScale(3.191, 4.5);

	Sprite groundtex9(ground); // very bottom ground
	groundtex9.setTexture(ground);
	groundtex9.setPosition(0, 1400);
	groundtex9.setScale(30, 2);

	Sprite groundtex10(ground); // the ground after the first upside fake wall
	groundtex10.setTexture(ground);
	groundtex10.setPosition(7360, 600);
	groundtex10.setScale(3.18, 3);

	Sprite groundtex11(ground); // the ground after the second upside fake wall
	groundtex11.setTexture(ground);
	groundtex11.setPosition(10150, 600);
	groundtex11.setScale(3, 3);

	/////////

	Texture wall; // 1st left beginning wall
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setTexture(wall);
	wall_1.setPosition(0, -500);
	wall_1.setScale(0.5, 2.0);


	Sprite wall_3(wall); // 2nd wall after the three squares
	wall_3.setTexture(wall);
	wall_3.setPosition(7980, 220);
	wall_3.setScale(0.19, 0.7);

	Sprite wall_4(wall); // 3rd big wall after the two squares
	wall_4.setTexture(wall);
	wall_4.setPosition(10500, 520);
	wall_4.setScale(0.19, 0.13);


	Sprite wall_6(wall); // last wall
	wall_6.setTexture(wall);
	wall_6.setPosition(12108, -700);
	wall_6.setScale(0.7, 1.9);

	/////////

	Texture walltex;
	walltex.loadFromFile("..//Pico/wall.jpg");
	Sprite fake_wall1(walltex); //fake wall
	fake_wall1.setTexture(walltex);
	fake_wall1.setPosition(7195, 600);
	fake_wall1.setScale(2.66, 1.5);

	Sprite fake_wall2(walltex); //fake wall 
	fake_wall2.setTexture(walltex);
	fake_wall2.setPosition(10000, 600);
	fake_wall2.setScale(2.5, 1.5);

	/////////

	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(11300, 395);
	key.setScale(0.2, 0.2);

	/////////

	Texture door1;
	door1.loadFromFile("../Pico/closed.png");
	Sprite door(door1);
	door.setTexture(door1);
	door.setPosition(11970, 355);
	door.setScale(0.25, 0.25);


	Texture door2;
	door2.loadFromFile("../Pico/open.png");

	/////////3400, 300)

	const int num_lasers = 7;
	RectangleShape laser1[num_lasers];
	for (int i = 0; i < num_lasers; i++) {
		laser1[i].setSize(Vector2f(3, 300));
		laser1[i].setPosition(3450 + i * 50, 350);
		laser1[i].setFillColor(Color::Red);
		laser1[i].setOutlineColor(Color::Red);
		laser1[i].setOutlineThickness(3);

	}

	/////////

	Texture buttpress; //adding button to move the wall of the first wall
	buttpress.loadFromFile("../Pico/buttonpressed.png");


	Texture butt; //adding button to move the wall
	butt.loadFromFile("../Pico/button.png");
	Sprite button(butt);
	button.setTexture(butt);
	button.setPosition(350, 270);
	button.setScale(0.14313, 0.1228);
	button.setRotation(90);
	Sprite buttonp(buttpress);
	buttonp.setScale(0, 0);

	Sprite button2(butt); // 1st button on the first standing wall
	button2.setTexture(butt);
	button2.setPosition(2650, 570);
	button2.setScale(0.14313, 0.1228);
	Sprite buttonp2(buttpress);
	buttonp2.setScale(0, 0);

	Sprite button3(butt); // buttons after the squares
	button3.setTexture(butt);
	button3.setPosition(4300, 570);
	button3.setScale(0.14313, 0.1228);
	Sprite buttonp3(buttpress);
	buttonp3.setScale(0, 0);

	Sprite button4(butt);
	button4.setTexture(butt);
	button4.setPosition(7230, 570);
	button4.setScale(0.14313, 0.1228);
	Sprite buttonp4(buttpress);
	buttonp4.setScale(0, 0);

	Sprite button5(butt);
	button5.setTexture(butt);
	button5.setPosition(9800, 570);
	button5.setScale(0.14313, 0.1228);
	Sprite buttonp5(buttpress);
	buttonp5.setScale(0, 0);

	/////////

	Texture teleport;
	teleport.loadFromFile("..//Pico/teleporter1.png");
	Sprite teleporter1(teleport);
	teleporter1.setTexture(teleport);
	teleporter1.setPosition(8300, 515);
	teleporter1.setScale(0.17, 0.18);

	Sprite teleporter2(teleport);
	teleporter2.setTexture(teleport);
	teleporter2.setPosition(9400, 515);
	teleporter2.setScale(0.17, 0.18);

	/////////

	Texture squares;      //adding squares to jump on it
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares);
	squares_1.setTexture(squares);
	squares_1.setPosition(4700, 600);
	squares_1.setScale(0.5, 0.5);


	Sprite squares_2(squares);
	squares_2.setTexture(squares);
	squares_2.setPosition(4950, 600);
	squares_2.setScale(0.5, 0.5);


	Sprite squares_3(squares);
	squares_3.setTexture(squares);
	squares_3.setPosition(5200, 600);
	squares_3.setScale(0.5, 0.5);

	Sprite squares_4(squares);
	squares_4.setTexture(squares);
	squares_4.setPosition(8700, 600);
	squares_4.setScale(0, 0);

	Sprite squares_5(squares);
	squares_5.setTexture(squares);
	squares_5.setPosition(8900, 600);
	squares_5.setScale(0, 0);



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
	hint1.loadFromFile("../Assets/Texture/level6 1.png");//adding ground texture
	Sprite Hint1(hint1);
	Hint1.setTexture(hint1);
	Hint1.setPosition(500, 200);
	Hint1.setScale(1, 1);

	Texture hint2;
	hint2.loadFromFile("../Assets/Texture/level6 2.png");//adding ground texture
	Sprite Hint2(hint2);
	Hint2.setTexture(hint2);
	Hint2.setPosition(7500, 250);
	Hint2.setScale(0.8, 0.8);

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

	left_wall = 317;


	Clock clock;
	Clock clock3;


	while (window.isOpen()) {


		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(350, 100);
			Scientist.start(415, 100);
			Builder.start(480, 100);
			Astronaut.start(545, 100);

		}


		//BUTTONS

		if (button_ispressed) {
			buttonp3.setTexture(buttpress);
			buttonp3.setPosition(4300, 590);
			buttonp3.setScale(0.1431, 0.13475);
			for (int i = 0; i <= num_lasers; i++) {
				laser1[i].setScale(0, 0);
			}
			if (playsound == 1)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}
		if (button_ispressed2) {
			buttonp5.setTexture(buttpress);
			buttonp5.setPosition(9800, 590);
			buttonp5.setScale(0.1431, 0.13475);
			squares_4.setScale(0.5, 0.5);
			squares_5.setScale(0.5, 0.5);
			if (playsound == 2)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforground) {
			buttonp2.setTexture(buttpress);
			buttonp2.setPosition(2650, 590);
			buttonp2.setScale(0.1431, 0.13475);
			if (!groundtex2.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
				if (pause == false)
					groundtex2.move(0.5, 0);
			}
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		if (button_ispressedforwall) {
			buttonp.setTexture(buttpress);
			buttonp.setPosition(330, 270);
			buttonp.setScale(0.1431, 0.13475);
			buttonp.setRotation(90);
			if (pause == false)
			wall_3.move(0, 0.5);
			if (hiddenbutton == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				hiddenbutton = 1;
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

				progress = 6;
				outputFile << 6 << endl << difficult << endl;
				outputFile.close();
			}
			else {
				pagenum = 7;
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

		Thief_collision6(Thief, squares_1, squares_2, squares_3, squares_4, squares_5, groundtex, groundtex2, groundtex3, groundtex4,  groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, button, button2, button3, button4, button5, buttonp, buttonp2, buttonp3, buttonp4, buttonp5, wall_1, wall_3, wall_4, wall_6, laser1, teleporter1, teleporter2, fake_wall1, fake_wall2, death);

		//////////SCIENTIST COLLISION ///////////////////

		Scientist_collision6(Scientist, squares_1, squares_2, squares_3, squares_4, squares_5, groundtex, groundtex2, groundtex3, groundtex4,  groundtex5,groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, button, button2, button3, button4, button5, buttonp, buttonp2, buttonp3, buttonp4, buttonp5, wall_1, wall_3, wall_4, wall_6, laser1, teleporter1, teleporter2, fake_wall1, fake_wall2, death);

		//////////BUILDER COLLISION///////////////////

		Builder_collision6(Builder, squares_1, squares_2, squares_3, squares_4, squares_5, groundtex, groundtex2, groundtex3, groundtex4,  groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, button, button2, button3, button4, button5, buttonp, buttonp2, buttonp3, buttonp4, buttonp5, wall_1, wall_3, wall_4, wall_6, laser1, teleporter1, teleporter2, fake_wall1, fake_wall2, death);

		//////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision6(Astronaut, squares_1, squares_2, squares_3, squares_4, squares_5, groundtex, groundtex2, groundtex3, groundtex4, groundtex5, groundtex6, groundtex7, groundtex8, groundtex9, groundtex10, groundtex11, button, button2, button3, button4, button5, buttonp, buttonp2, buttonp3, buttonp4, buttonp5, wall_1, wall_3, wall_4, wall_6, laser1, teleporter1, teleporter2, fake_wall1, fake_wall2, death, death_ceiling);

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
				view.move(0, -10);

			}
			if (Keyboard::isKeyPressed(Keyboard::Down))
			{
				view.move(0, 10);

			}
		}
		int midx = (Thief.pico.getPosition().x + Builder.pico.getPosition().x + Scientist.pico.getPosition().x + Astronaut.pico.getPosition().x) / 4;
		view.setCenter(midx, 400);
		view.setSize(1920 / 1.125, 1080 / 1.125);

		screenratio = 1.125 / 1.125;

		//////////////////////////////////////////
		Paused paused(screenratio, sel, midx, pagenum, deathscreen, i,400);
		sel = paused.pressed();

		//////////////////////////////////////////////////

		Tdeath.setPosition(midx - 853, -80);
		Sdeath.setPosition(midx - 853, -80);
		Bdeath.setPosition(midx - 853, -80);
		Adeath.setPosition(midx - 853, -80);

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
		window.draw(Hint1);
		window.draw(Hint2);
		window.draw(groundtex);
		window.draw(wall_1);
		window.draw(wall_3);
		window.draw(wall_4);
		window.draw(wall_6);
		if (hard) {
			window.draw(fake_wall2);
			window.draw(fake_wall1);
			window.draw(button4);
			window.draw(buttonp4);
		}
		if (medium) {
			window.draw(fake_wall1);
			window.draw(button4);
			window.draw(buttonp4);
		}
		for (int i = 0; i < num_lasers; i++) {
			window.draw(laser1[i]);
		}
		window.draw(button2);
		window.draw(buttonp2);
		window.draw(button3);
		window.draw(buttonp3);
		
		window.draw(button5);
		window.draw(buttonp5);
		window.draw(teleporter1);
		window.draw(teleporter2);
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
		window.draw(squares_1);
		window.draw(squares_2);
		window.draw(squares_3);
		window.draw(squares_4);
		window.draw(squares_5);
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
