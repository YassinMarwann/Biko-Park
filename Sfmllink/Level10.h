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
#include "Reset.h"
#include "Boxes collision.h"
#include "credits.h"





void Level10(RenderWindow& window, int& pagenum){
	

	View view = window.getDefaultView();
	View menu = window.getDefaultView();

	//SOUNDS

	Music buttonsound;
	buttonsound.openFromFile("../Assets/Sounds/button.mp3");

	Music mask;
	mask.openFromFile("../Assets/Sounds/mask.mp3");

	Music helmet;
	helmet.openFromFile("../Assets/Sounds/helmet.mp3");

	Music lazer;
	lazer.openFromFile("../Assets/Sounds/lasar.mp3");

	Music fall;
	fall.openFromFile("../Assets/Sounds/fall.mp3");\

	Music stomp;
	stomp.openFromFile("../Assets/Sounds/stomp.mp3");

	Music potion;
	potion.openFromFile("../Assets/Sounds/splash.mp3");

	Music decay;
	decay.openFromFile("../Assets/Sounds/snakebite.mp3");


	//MAP TEXTURES AND POSITIONS
	Texture groundtex;
	groundtex.loadFromFile("..//Pico/ground.jpg");//adding ground texture
	Sprite ground(groundtex);
	ground.setPosition(0, 900);
	ground.setScale(2.544529262, 1);

	Sprite death_floor1(ground);
	death_floor1.setTexture(groundtex);
	death_floor1.setPosition(-1000, 1400);
	death_floor1.setScale(100, 1);

	Sprite death_floor2(ground);
	death_floor2.setTexture(groundtex);
	death_floor2.setPosition(-1000, -50);
	death_floor2.setScale(100, 1);

	RectangleShape border;
	border.setSize(Vector2f(1900, 1400));
	border.setOutlineThickness(1000);
	border.setPosition(-450, 0);
	border.setOutlineColor(Color(255, 143, 73, 255));
	border.setFillColor(Color::Transparent);


	Sprite ground2(groundtex);
	ground2.setPosition(1450, 1200);
	ground2.setScale(25.4452926, 1);

	Font font;
	font.loadFromFile("../Assets/fonts/joystixMonospace.otf");

	Texture keys;
	keys.loadFromFile("../Pico/keys.png");
	Sprite key(keys);
	key.setTexture(keys);
	key.setPosition(-500, -750);
	key.setScale(0.2, 0.2);


	Texture door2;
	door2.loadFromFile("../Pico/open.png");
	Sprite door(door2);
	door.setPosition(-800, -1250.25);
	door.setScale(0.25, 0.25);


	/////////////////////////////////////////////////////////// Biko Bark 

	Text wave_1;
	wave_1.setString("WAVE 1");
	wave_1.setFont(font);
	wave_1.setCharacterSize(100);
	wave_1.setFillColor(Color(255, 0, 0));
	wave_1.setPosition(500 - wave_1.getGlobalBounds().width / 2, 400);

	RectangleShape laser1(Vector2f(7, 900));
	laser1.setOutlineColor(Color::Transparent);
	laser1.setFillColor(Color::Transparent);
	laser1.setPosition(-1000, -1000);

	RectangleShape laser2(Vector2f(7, 900));
	laser2.setOutlineColor(Color::Transparent);
	laser2.setFillColor(Color::Transparent);
	laser2.setPosition(-1000, -1000);

	RectangleShape laser3(Vector2f(1900, 7));
	laser3.setOutlineColor(Color::Transparent);
	laser3.setFillColor(Color::Transparent);
	laser2.setPosition(-1000, -1000);

	RectangleShape laser4(Vector2f(7, 1041));
	laser4.setOutlineColor(Color::Transparent);
	laser4.setFillColor(Color::Transparent);
	laser4.setRotation(30);
	laser4.setPosition(-1000, -1000);

	RectangleShape laser5(Vector2f(7, 1041));
	laser5.setOutlineColor(Color::Transparent);
	laser5.setFillColor(Color::Transparent);
	laser5.setRotation(330);
	laser5.setPosition(-1000, -1000);

	
	//////////////////////////////////
	Text wave_2;
	wave_2.setString("WAVE 2");
	wave_2.setFont(font);
	wave_2.setCharacterSize(100);
	wave_2.setFillColor(Color(255, 0, 0));
	wave_2.setPosition(500 - wave_2.getGlobalBounds().width / 2, 400);

	Texture poisonsheet;
	poisonsheet.loadFromFile("../Assets/Texture/poisonsheet.png");
	Texture poison;
	poison.loadFromFile("../Assets/Texture/poison.png");

	Sprite potion1;
	potion1.setTexture(poison);
	potion1.setPosition(-2000, -2000);
	potion1.setScale(0.5, 0.5);

	Sprite potion2;
	potion2.setTexture(poison);
	potion2.setPosition(-2000, -2000);
	potion2.setScale(0.5, 0.5);

	Sprite potion3;
	potion3.setTexture(poison);
	potion3.setPosition(-2000, -2000);
	potion3.setScale(0.5, 0.5);

	Sprite potion4;
	potion4.setTexture(poison);
	potion4.setPosition(-2000, -2000);
	potion4.setScale(0.5, 0.5);

	Sprite potion5;
	potion5.setTexture(poison);
	potion5.setPosition(-2000, -2000);
	potion5.setScale(0.5, 0.5);

	Sprite potion6;
	potion6.setTexture(poison);
	potion6.setPosition(-2000, -2000);
	potion6.setScale(0.5, 0.5);

	Sprite potion7;
	potion7.setTexture(poison);
	potion7.setPosition(-2000, -2000);
	potion7.setScale(0.5, 0.5);

	Sprite potion72;
	potion72.setTexture(poison);
	potion72.setPosition(-2000, -2000);
	potion72.setScale(0.5, 0.5);

	Sprite potion8;
	potion8.setTexture(poison);
	potion8.setPosition(-2000, -2000);
	potion8.setScale(0.5, 0.5);

	Sprite potion9;
	potion9.setTexture(poison);
	potion9.setPosition(-2000, -2000);
	potion9.setScale(0.5, 0.5);

	Sprite potion10;
	potion10.setTexture(poison);
	potion10.setPosition(-2000, -2000);
	potion10.setScale(0.5, 0.5);

	Sprite potion11;
	potion11.setTexture(poison);
	potion11.setPosition(-2000, -2000);
	potion11.setScale(0.5, 0.5);

	Sprite potion12;
	potion12.setTexture(poison);
	potion12.setPosition(-2000, -2000);
	potion12.setScale(0.5, 0.5);

	Sprite potion13;
	potion13.setTexture(poison);
	potion13.setPosition(-2000, -2000);
	potion13.setScale(0.5, 0.5);

	Sprite potion14;
	potion14.setTexture(poison);
	potion14.setPosition(-2000, -2000);
	potion14.setScale(0.5, 0.5);

	Sprite potion15;
	potion15.setTexture(poison);
	potion15.setPosition(-2000, -2000);
	potion15.setScale(0.5, 0.5);

	Sprite potion16;
	potion16.setTexture(poison);
	potion16.setPosition(-2000, -2000);
	potion16.setScale(0.5, 0.5);

	Sprite potion17;
	potion17.setTexture(poison);
	potion17.setPosition(-2000, -2000);
	potion17.setScale(0.5, 0.5);

	Sprite potion18;
	potion18.setTexture(poison);
	potion18.setPosition(-2000, -2000);
	potion18.setScale(0.5, 0.5);

	Sprite potion19;
	potion19.setTexture(poison);
	potion19.setPosition(-2000, -2000);
	potion19.setScale(0.5, 0.5);

	Sprite potion20;
	potion20.setTexture(poison);
	potion20.setPosition(-2000, -2000);
	potion20.setScale(0.5, 0.5);

	Sprite potion21;
	potion21.setTexture(poison);
	potion21.setPosition(-2000, -2000);
	potion21.setScale(0.5, 0.5);

	Sprite potion22;
	potion22.setTexture(poison);
	potion22.setPosition(-2000, -2000);
	potion22.setScale(0.5, 0.5);

	Sprite potion23;
	potion23.setTexture(poison);
	potion23.setPosition(-2000, -2000);
	potion23.setScale(0.5, 0.5);

	Sprite potion24;
	potion24.setOrigin(56.5, 56.5);
	potion24.setTexture(poison);
	potion24.setPosition(50, -100);
	potion24.setScale(0.5, 0.5);

	Sprite potion25;
	potion25.setOrigin(56.5, 56.5);
	potion25.setTexture(poison);
	potion25.setPosition(150, -100);
	potion25.setScale(0.5, 0.5);

	Sprite potion26;
	potion26.setOrigin(56.5, 56.5);
	potion26.setTexture(poison);
	potion26.setPosition(250, -100);
	potion26.setScale(0.5, 0.5);

	Sprite potion27;
	potion27.setOrigin(56.5, 56.5);
	potion27.setTexture(poison);
	potion27.setPosition(350, -100);
	potion27.setScale(0.5, 0.5);

	Sprite potion28;
	potion28.setOrigin(56.5, 56.5);
	potion28.setTexture(poison);
	potion28.setPosition(450, -100);
	potion28.setScale(0.5, 0.5);

	Sprite potion29;
	potion29.setOrigin(56.5, 56.5);
	potion29.setTexture(poison);
	potion29.setPosition(550 , -100);
	potion29.setScale(0.5, 0.5);

	Sprite potion30;
	potion30.setOrigin(56.5, 56.5);
	potion30.setTexture(poison);
	potion30.setPosition(650, -100);
	potion30.setScale(0.5, 0.5);

	Sprite potion31;
	potion31.setOrigin(56.5, 56.5);
	potion31.setTexture(poison);
	potion31.setPosition(750, -100);
	potion31.setScale(0.5, 0.5);

	Sprite potion32;
	potion32.setOrigin(56.5, 56.5);
	potion32.setTexture(poison);
	potion32.setPosition(850, -100);
	potion32.setScale(0.5, 0.5);

	Sprite potion33;
	potion33.setOrigin(56.5, 56.5);
	potion33.setTexture(poison);
	potion33.setPosition(950, -100);
	potion33.setScale(0.5, 0.5);

	Sprite splash1;
	splash1.setTexture(poisonsheet);
	splash1.setPosition(-2000, -2000);
	splash1.setScale(1, 1);

	Sprite splash2;
	splash2.setTexture(poisonsheet);
	splash2.setPosition(-2000, -2000);
	splash2.setScale(1, 1);

	Sprite splash3;
	splash3.setTexture(poisonsheet);
	splash3.setPosition(-2000, -2000);
	splash3.setScale(1, 1);

	Sprite splash4;
	splash4.setTexture(poisonsheet);
	splash4.setPosition(-2000, -2000);
	splash4.setScale(1, 1);

	Sprite splash5;
	splash5.setTexture(poisonsheet);
	splash5.setPosition(-2000, -2000);
	splash5.setScale(1, 1);

	Sprite splash6;
	splash6.setTexture(poisonsheet);
	splash6.setPosition(-2000, -2000);
	splash6.setScale(1, 1);

	Sprite splash7;
	splash7.setTexture(poisonsheet);
	splash7.setPosition(-2000, -2000);
	splash7.setScale(1, 1);

	Sprite splash72;
	splash72.setTexture(poisonsheet);
	splash72.setPosition(-2000, -2000);
	splash72.setScale(1, 1);

	Sprite splash8;
	splash8.setTexture(poisonsheet);
	splash8.setPosition(-2000, -2000);
	splash8.setScale(1, 1);

	Sprite splash9;
	splash9.setTexture(poisonsheet);
	splash9.setPosition(-2000, -2000);
	splash9.setScale(1, 1);

	Sprite splash10;
	splash10.setTexture(poisonsheet);
	splash10.setPosition(-2000, -2000);
	splash10.setScale(1, 1);

	Sprite splash11;
	splash11.setTexture(poisonsheet);
	splash11.setPosition(-2000, -2000);
	splash11.setScale(1, 1);

	Sprite splash12;
	splash12.setTexture(poisonsheet);
	splash12.setPosition(-2000, -2000);
	splash12.setScale(1, 1);

	Sprite splash13;
	splash13.setTexture(poisonsheet);
	splash13.setPosition(-2000, -2000);
	splash13.setScale(1, 1);

	Sprite splash14;
	splash14.setTexture(poisonsheet);
	splash14.setPosition(-2000, -2000);
	splash14.setScale(1, 1);

	Sprite splash15;
	splash15.setTexture(poisonsheet);
	splash15.setPosition(-2000, -2000);
	splash15.setScale(1, 1);

	Sprite splash16;
	splash16.setTexture(poisonsheet);
	splash16.setPosition(-2000, -2000);
	splash16.setScale(1, 1);

	Sprite splash17;
	splash17.setTexture(poisonsheet);
	splash17.setPosition(-2000, -2000);
	splash17.setScale(1, 1);

	Sprite splash18;
	splash18.setTexture(poisonsheet);
	splash18.setPosition(-2000, -2000);
	splash18.setScale(1, 1);

	Sprite splash19;
	splash19.setTexture(poisonsheet);
	splash19.setPosition(-2000, -2000);
	splash19.setScale(1, 1);

	Sprite splash20;
	splash20.setTexture(poisonsheet);
	splash20.setPosition(-2000, -2000);
	splash20.setScale(1, 1);

	Sprite splash21;
	splash21.setTexture(poisonsheet);
	splash21.setPosition(-2000, -2000);
	splash21.setScale(1, 1);

	Sprite splash22;
	splash22.setTexture(poisonsheet);
	splash22.setPosition(-2000, -2000);
	splash22.setScale(1, 1);

	Sprite splash23;
	splash23.setTexture(poisonsheet);
	splash23.setPosition(-2000, -2000);
	splash23.setScale(1, 1);


	/////////////////////////////////

	Text wave_3;
	wave_3.setString("WAVE 3");
	wave_3.setFont(font);
	wave_3.setCharacterSize(100);
	wave_3.setFillColor(Color(255, 0, 0));
	wave_3.setPosition(500 - wave_3.getGlobalBounds().width / 2, 400);


	RectangleShape box1(Vector2f(100, 150));
	box1.setFillColor(Color(255, 143, 73, 255));
	box1.setPosition(700, -150);

	RectangleShape box2(Vector2f(100, 150));
	box2.setFillColor(Color(255, 143, 73, 255));
	box2.setPosition(700, -150);

	RectangleShape box3(Vector2f(100, 150));
	box3.setFillColor(Color(255, 143, 73, 255));
	box3.setPosition(300, -150);

	RectangleShape box4(Vector2f(100, 150));
	box4.setFillColor(Color(255, 143, 73, 255));
	box4.setPosition(0, -150);

	RectangleShape box5(Vector2f(100, 150));
	box5.setFillColor(Color(255, 143, 73, 255));
	box5.setPosition(400, -150);

	RectangleShape box6(Vector2f(100, 150));
	box6.setFillColor(Color(255, 143, 73, 255));
	box6.setPosition(100, -150);

	RectangleShape box7(Vector2f(100, 150));
	box7.setFillColor(Color(255, 143, 73, 255));
	box7.setPosition(500, -150);

	RectangleShape box8(Vector2f(100, 150));
	box8.setFillColor(Color(255, 143, 73, 255));
	box8.setPosition(200, -150);

	RectangleShape box9(Vector2f(100, 150));
	box9.setFillColor(Color(255, 143, 73, 255));
	box9.setPosition(500, -150);

	RectangleShape box10(Vector2f(100, 150));
	box10.setFillColor(Color(255, 143, 73, 255));
	box10.setPosition(800, -150);

	RectangleShape box11(Vector2f(100, 150));
	box11.setFillColor(Color(255, 143, 73, 255));
	box11.setPosition(900, -150);

	RectangleShape box12(Vector2f(100, 150));
	box12.setFillColor(Color(255, 143, 73, 255));
	box12.setPosition(600, -150);


	////////////////////////
	Text wave_4;
	wave_4.setString("WAVE 4");
	wave_4.setFont(font);
	wave_4.setCharacterSize(100);
	wave_4.setFillColor(Color(255, 0, 0));
	wave_4.setPosition(500 - wave_4.getGlobalBounds().width/2, 400);




	Sprite ground3(groundtex);
	ground3.setPosition(1700, 800 + 100);
	ground3.setScale(1.5, 2.5);

	Sprite ceiling1(groundtex);
	ceiling1.setPosition(1700, 100 + 100);
	ceiling1.setScale(1.5, 2.5);


	Sprite ground4(groundtex);
	ground4.setPosition(2500, 800 + 100);
	ground4.setScale(1.5, 2.5);

	Sprite ceiling2(groundtex);
	ceiling2.setPosition(2500, 100 + 100);
	ceiling2.setScale(1.5, 2.5);


	Sprite ground5(groundtex);
	ground5.setPosition(5800, 800 + 100);
	ground5.setScale(1.7, 2);

	Sprite ceiling3(groundtex);
	ceiling3.setPosition(6300, 100 + 100);
	ceiling3.setScale(1.8, 2);


	Sprite ground6(groundtex);
	ground6.setPosition(5995, 830 + 100);
	ground6.setScale(1.2, 1);


	Sprite ground7(groundtex);
	ground7.setPosition(6900, 800 + 100);
	ground7.setScale(1.7, 2);


	Sprite ground8(groundtex);
	ground8.setPosition(7900, 550 + 100);
	ground8.setScale(3.5, 1);


	Sprite ground9(groundtex);
	ground9.setPosition(7900, 800 + 100);
	ground9.setScale(3.5, 1);


	Sprite ground10(groundtex);
	ground10.setPosition(10050, 550 + 100);
	ground10.setScale(1.5, 2.5);

	Sprite ground11(groundtex);
	ground11.setPosition(10750, 550 + 100);
	ground11.setScale(1.2, 2.5);

	Sprite ground12(groundtex);
	ground12.setPosition(12050, 570 + 100);
	ground12.setScale(2.5, 2.5);


	Texture wall;
	wall.loadFromFile("../Pico/bigwall.png");
	Sprite wall_1(wall);
	wall_1.setPosition(1500, 100);
	wall_1.setScale(0.35, 0.4);


	Sprite wall_2(wall);
	wall_2.setPosition(2280, 800 + 100);
	wall_2.setScale(0.35, 0.308);


	Sprite wall_3(wall);
	wall_3.setPosition(2280, 200);
	wall_3.setScale(0.35, 0.308);


	Sprite wall_4(wall);
	wall_4.setPosition(9212, 620 + 100);
	wall_4.setScale(0.1, 0.4);


	Sprite wall_5(wall);
	wall_5.setPosition(10600, 550 + 100);
	wall_5.setScale(0.3, 0.3070);


	Sprite wall_6(wall);
	wall_6.setPosition(12842, 0 + 100);
	wall_6.setScale(0.3, 1);

	Texture squares;
	squares.loadFromFile("../Pico/squares.png");
	Sprite squares_1(squares);
	squares_1.setPosition(3200, 720 + 100);
	squares_1.setScale(0.5, 0.5);

	Sprite squares_2(squares);
	squares_2.setPosition(3320, 620 + 100);
	squares_2.setScale(0.5, 0.5);

	Sprite squares_3(squares);
	squares_3.setPosition(3430, 720 + 100);
	squares_3.setScale(0.5, 0.5);

	Sprite squares_4(squares);
	squares_4.setPosition(3570, 720 + 100);
	squares_4.setScale(0.5, 0.5);

	Sprite squares_5(squares);
	squares_5.setPosition(3670, 620 + 100);
	squares_5.setScale(0.5, 0.5);

	Sprite squares_6(squares);
	squares_6.setPosition(3830, 720 + 100);
	squares_6.setScale(0.5, 0.5);

	Sprite squares_7(squares);
	squares_7.setPosition(3960, 720 + 100);
	squares_7.setScale(0.5, 0.5);

	Sprite squares_8(squares);
	squares_8.setPosition(4070, 720 + 100);
	squares_8.setScale(0.5, 0.5);

	Sprite squares_9(squares);
	squares_9.setPosition(4170, 820 + 100);
	squares_9.setScale(0.5, 0.5);

	Sprite squares_10(squares);
	squares_10.setPosition(4200, 650 + 100);
	squares_10.setScale(0.5, 0.5);

	Sprite squares_11(squares);
	squares_11.setPosition(4330, 820 + 100);
	squares_11.setScale(0.5, 0.5);


	Sprite squares_12(squares);
	squares_12.setPosition(4330, 670 + 100);
	squares_12.setScale(0.5, 0.5);

	Sprite squares_13(squares);
	squares_13.setPosition(4470, 720 + 100);
	squares_13.setScale(0.5, 0.5);

	Sprite squares_14(squares);
	squares_14.setPosition(4670, 720 + 100);
	squares_14.setScale(0.5, 0.5);

	Sprite squares_15(squares);
	squares_15.setPosition(4870, 720 + 100);
	squares_15.setScale(0.5, 0.5);

	Sprite squares_16(squares);
	squares_16.setPosition(5070, 720 + 100);
	squares_16.setScale(0.5, 0.5);

	Sprite squares_17(squares);
	squares_17.setPosition(5270, 720 + 100);
	squares_17.setScale(0.5, 0.5);

	Sprite squares_18(squares);
	squares_18.setPosition(5360, 720 + 100);
	squares_18.setScale(0.5, 0.5);

	Sprite squares_19(squares);
	squares_19.setPosition(5430, 840 + 100);
	squares_19.setScale(0.5, 0.5);

	Sprite squares_20(squares);
	squares_20.setPosition(5430, 620 + 100);
	squares_20.setScale(0.5, 0.5);

	Sprite squares_21(squares);
	squares_21.setPosition(5600, 720 + 100);
	squares_21.setScale(0.5, 0.5);


	Sprite squares_22(squares);
	squares_22.setPosition(7650, 720 + 100);
	squares_22.setScale(0.5, 0.5);


	Sprite squares_23(squares);
	squares_23.setPosition(7800, 820 + 100);
	squares_23.setScale(0.5, 0.5);


	Sprite squares_24(squares);
	squares_24.setPosition(7800, 620 + 100);
	squares_24.setScale(0.5, 0.5);

	Sprite squares_25(squares);
	squares_25.setPosition(9400, 570 + 100);
	squares_25.setScale(0.5, 0.5);

	Sprite squares_26(squares);
	squares_26.setPosition(9600, 570 + 100);
	squares_26.setScale(0.5, 0.5);

	Sprite squares_27(squares);
	squares_27.setPosition(9740, 570 + 100);
	squares_27.setScale(0.5, 0.5);

	Sprite squares_28(squares);
	squares_28.setPosition(9850, 570 + 100);
	squares_28.setScale(0.5, 0.5);

	Sprite squares_29(squares);
	squares_29.setPosition(11350, 570 + 100);
	squares_29.setScale(0.5, 0.5);

	Sprite squares_30(squares);
	squares_30.setPosition(11520, 620 + 100);
	squares_30.setScale(0.5, 0.5);

	Sprite squares_31(squares);
	squares_31.setPosition(11630, 540 + 100);
	squares_31.setScale(0.5, 0.5);

	Sprite squares_32(squares);
	squares_32.setPosition(11630, 690 + 100);
	squares_32.setScale(0.5, 0.5);

	Sprite squares_33(squares);
	squares_33.setPosition(11720, 620 + 100);
	squares_33.setScale(0.5, 0.5);

	Sprite squares_34(squares);
	squares_34.setPosition(11820, 620 + 100);
	squares_34.setScale(0.5, 0.5);

	Sprite squares_35(squares);
	squares_35.setPosition(11920, 620 + 100);
	squares_35.setScale(0.5, 0.5);


	Texture butt;
	butt.loadFromFile("../Pico/button.png");
	Sprite button(butt);
	button.setPosition(7170, 768 + 100);
	button.setScale(0.14313, 0.1228);

	Texture buttpress;
	buttpress.loadFromFile("../Pico/buttonpressed.png");
	Sprite buttonp(buttpress);
	buttonp.setScale(0, 0);



	Sprite button2(butt);
	button2.setPosition(10660, 520 + 100);
	button2.setScale(0.14313, 0.1228);


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

	Sprite death(groundtex);
	death.setPosition(-2000, 2000);
	death.setScale(200, 1);


	Sprite death_ceiling(groundtex);
	death_ceiling.setPosition(-2000, -500);
	death_ceiling.setScale(200, 2);

	RectangleShape death_box(Vector2f(300, 100));
	death_box.setPosition(1025, 50);
	death_box.setOutlineColor(Color(250, 0, 0));
	death_box.setOutlineThickness(5);
	death_box.setFillColor(Color::Transparent);

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//DEATH SCREEN

	Texture alldeath;
	alldeath.loadFromFile("../Assets/Texture/deadall.png");
	Sprite Alldeath(alldeath);
	Alldeath.setTexture(alldeath);
	Alldeath.setScale(1 / 0.80, 1 / 0.80);
	Alldeath.setPosition(-700, 25);

	Texture Admin;
	Admin.loadFromFile("../Assets/Texture/admin.png");

	Sprite admin;
	admin.setTexture(Admin);
	admin.setOrigin(65, 85);
	admin.setScale(0.5, 0.5);
	admin.setPosition(-2000, -2000);

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	left_wall = -451;
	right_wall = 1415;



	Clock clock;
	Clock clock3;
	Clock clock4;
	Clock wave1;
	Clock wave2;
	Clock wave3;
	Clock wave4;
	Clock waves;

	int  currentframe = 0;
	float increaseInterval = 0.18f; // Interval for increasing the variable (in seconds)
	float time = 0;
	int oldframe[24] = { 0 };

	while (window.isOpen()) {

		if (clock3.getElapsedTime().asSeconds() < 0.1)
		{
			Thief.start(160, 100);
			Scientist.start(360, 100);
			Builder.start(560, 100);
			Astronaut.start(760, 100);

		}


		float deltaTime = clock4.restart().asSeconds();
		time += deltaTime;

		// Check if it's time to increase the variable
		if (time >= increaseInterval) {
			currentframe++; // Increase the variable

			time = 0; // Reset the elapsed time
		}


		if (button_ispressedforground) {
			buttonp.setTexture(buttpress);
			buttonp.setPosition(7170, 783 + 100);
			buttonp.setScale(0.1431, 0.13475);
			if (ground6.getGlobalBounds().intersects(ground7.getGlobalBounds())) {}
			else if (pause == false) {
				ground6.move(0.5, 0);
			}
			if (playsound == 0)
			{
				buttonsound.play();
				for (int i = 0; buttonsound.getStatus() == sf::Sound::Playing && i < 2; i++) {}
				playsound++;
			}
		}

		bool fall2 = true;
		bool fall3 = true;
		bool fall4 = true;
		bool fall5 = true;
		bool fall6 = true;
		bool fall7 = true;
		bool fall8 = true;
		bool fall9 = true;
		bool fall10 = true;
		bool fall11 = true;
		bool fall12 = true;



		Time reset = waves.getElapsedTime();



		//////death
		if (reset.asSeconds() > 60 && reset.asSeconds() < 60.5) {
			for (int i = 0; i < 4; i++) {
				dead[i] = 0;
				Thief.start(160, 100);
				Scientist.start(360, 100);
				Builder.start(560, 100);
				Astronaut.start(760, 100);
				soundreset();
			}
		}
		if (reset.asSeconds() > 120 && reset.asSeconds() < 120.1) {
			for (int i = 0; i < 4; i++) {
				dead[i] = 0;
				Thief.start(160, 100);
				Scientist.start(360, 100);
				Builder.start(560, 100);
				Astronaut.start(760, 100);
				soundreset();
			}
		}
		if (reset.asSeconds() > 180 && reset.asSeconds() < 180.1) {
			for (int i = 0; i < 4; i++) {
				dead[i] = 0;
				Thief.start(160, 100);
				Scientist.start(360, 100);
				Builder.start(560, 100);
				Astronaut.start(760, 100);

				box1.setPosition(7000, -150);
				box2.setPosition(7000, -150);
				box3.setPosition(3000, -150);
				box4.setPosition(2000, -150);
				box5.setPosition(4000, -150);
				box6.setPosition(2000, -150);
				box7.setPosition(5000, -150);
				box8.setPosition(2000, -150);
				box9.setPosition(5000, -150);
				box10.setPosition(8000, -150);
				box11.setPosition(9000, -150);
				box12.setPosition(6000, -150);
				soundreset();
			}
		}
		if (ground12.getPosition().x < -450 && ground12.getPosition().x > -455) {
			for (int i = 0; i < 4; i++) {
				dead[i] = 0;
				Thief.start(0, 100);
				Scientist.start(75, 100);
				Builder.start(150, 100);
				Astronaut.start(225, 100);
				soundreset();
			}
		}
		if (reset.asSeconds() < 1) {
			for (int i = 0; i < 4; i++) {
				dead[i] = 0;
			}
			soundreset();
		}

		if (dead[0] == 1) {
			Thief.move_y = 0;
			Thief.onground = true;
			Thief.start(1050, 100);
		}
		if (dead[1] == 1) {
			Scientist.move_y = 0;
			Scientist.onground = true;
			Scientist.start(1125, 100);
		}
		if (dead[2] == 1) {
			Builder.move_y = 0;
			Builder.onground = true;
			Builder.start(1200, 100);
		}
		if (dead[3] == 1) {
			helmeton = false;
			Astronaut.move_y = 0;
			Astronaut.onground = true;
			Astronaut.start(1275, 100);
		}

		if (dead[0] == 1 && dead[1] == 1 && dead[2] == 1 && dead[3] == 1 && admin_powers == false) {

			deathscreen = true;
			pause = true;

		}
		////////////////////////////////////////////////////////////////////////

		//////////////wave1
		Time t;
		if (pause == false)
			t = wave1.getElapsedTime();

		if (t.asSeconds() < 60) {
			wave2.restart();
		}

		if (t.asSeconds() < 5 && t.asSeconds() > 4&& pause == false) {
			laser_on = false;
			laser1.setPosition(0, 0);
			laser1.setFillColor(Color(255, 0, 0, 128));
			laser2.setPosition(993, 0);
			laser2.setFillColor(Color(255, 0, 0, 128));

		}
		else if (t.asSeconds() < 9 && t.asSeconds() > 5 && pause == false) {
			laser_on = true;
			laser1.setFillColor(Color(255, 0, 0, 255));
			laser2.setFillColor(Color(255, 0, 0, 255));


			if (laser1.getPosition().x < 400 && pause == false) {
				laser1.setPosition(laser1.getPosition().x + 0.75, 0);
				laser2.setPosition(laser2.getPosition().x - 0.75, 0);
			}
			else {
				laser1.setPosition(laser1.getPosition().x, 0);
				laser2.setPosition(laser2.getPosition().x, 0);

			}

		}
		else if (t.asSeconds() < 10 && t.asSeconds() > 9 && pause == false) {
			laser_on = false;
			laser1.setFillColor(Color(255, 0, 0, 0));
			laser2.setFillColor(Color(255, 0, 0, 0));
			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);
			laser5.setPosition(-1000, -1000);

		}


		if (t.asSeconds() < 11 && t.asSeconds() > 10 && pause == false) {

			laser1.setPosition(400, 0);
			laser1.setFillColor(Color(255, 0, 0, 128));
			laser2.setPosition(593, 0);
			laser2.setFillColor(Color(255, 0, 0, 128));
			laser3.setPosition(-450, 800);
			laser3.setFillColor(Color(255, 0, 0, 128));

		}
		else if (t.asSeconds() < 15 && t.asSeconds() > 11 && pause == false) {
			laser_on = true;
			laser1.setFillColor(Color(255, 0, 0, 255));
			laser2.setFillColor(Color(255, 0, 0, 255));
			laser3.setFillColor(Color(255, 0, 0, 255));


			if (laser1.getPosition().x > 0 && pause == false) {
				laser1.setPosition(laser1.getPosition().x - 0.75, 0);
				laser2.setPosition(laser2.getPosition().x + 0.75, 0);
			}
			else {
				laser1.setPosition(laser1.getPosition().x, 0);
				laser2.setPosition(laser2.getPosition().x, 0);

			}

		}
		else if (t.asSeconds() < 16 && t.asSeconds() > 15 && pause == false) {
			laser_on = false;
			laser1.setFillColor(Color(255, 0, 0, 0));
			laser2.setFillColor(Color(255, 0, 0, 0));
			laser3.setFillColor(Color(255, 0, 0, 0));
			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);
			laser5.setPosition(-1000, -1000);

		}


		if (t.asSeconds() < 17 && t.asSeconds() > 16 && pause == false) {
			laser1.setPosition(250, 0);
			laser1.setFillColor(Color(255, 0, 0, 128));
			laser2.setPosition(743, 0);
			laser2.setFillColor(Color(255, 0, 0, 128));
			laser3.setPosition(-450, 600);
			laser3.setFillColor(Color(255, 0, 0, 128));

		}
		else if (t.asSeconds() < 21 && t.asSeconds() > 17 && pause == false) {
			laser_on = true;
			laser1.setFillColor(Color(255, 0, 0, 255));
			laser2.setFillColor(Color(255, 0, 0, 255));
			laser3.setFillColor(Color(255, 0, 0, 255));


			if (laser1.getPosition().x > 0 && pause == false) {
				laser1.setPosition(laser1.getPosition().x - 0.75, 0);
			}
			if (laser2.getPosition().x > 243 && pause == false) {
				laser2.setPosition(laser2.getPosition().x - 1.5, 0);
			}
			if (laser3.getPosition().y < 800 && pause == false) {
				laser3.setPosition(-450, laser3.getPosition().y + 0.75);
			}
			else {
				laser1.setPosition(laser1.getPosition().x, 0);
				laser2.setPosition(laser2.getPosition().x, 0);
				laser3.setPosition(-450, laser3.getPosition().y);
			}

		}
		else if (t.asSeconds() < 22 && t.asSeconds() > 21 && pause == false) {
			laser_on = false;
			laser1.setFillColor(Color(255, 0, 0, 0));
			laser2.setFillColor(Color(255, 0, 0, 0));
			laser3.setFillColor(Color(255, 0, 0, 0));
			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);
			laser5.setPosition(-1000, -1000);

		}


		if (t.asSeconds() < 23 && t.asSeconds() > 22 && pause == false) {
			laser1.setPosition(250, 0);
			laser1.setFillColor(Color(255, 0, 0, 128));
			laser2.setPosition(743, 0);
			laser2.setFillColor(Color(255, 0, 0, 128));
			laser3.setPosition(-450, 600);
			laser3.setFillColor(Color(255, 0, 0, 128));

		}
		else if (t.asSeconds() < 27 && t.asSeconds() > 23 && pause == false) {
			laser_on = true;
			laser1.setFillColor(Color(255, 0, 0, 255));
			laser2.setFillColor(Color(255, 0, 0, 255));
			laser3.setFillColor(Color(255, 0, 0, 255));


			if (laser1.getPosition().x < 750 && pause == false) {
				laser1.setPosition(laser1.getPosition().x + 1.5, 0);
			}
			if (laser2.getPosition().x < 993 && pause == false) {
				laser2.setPosition(laser2.getPosition().x + 0.75, 0);
			}
			if (laser3.getPosition().y < 800 && pause == false) {
				laser3.setPosition(-450, laser3.getPosition().y + 0.75);
			}
			else {
				laser1.setPosition(laser1.getPosition().x, 0);
				laser2.setPosition(laser2.getPosition().x, 0);
				laser3.setPosition(-450, laser3.getPosition().y);
			}

		}
		else if (t.asSeconds() < 28 && t.asSeconds() > 27 && pause == false) {
			laser_on = false;
			laser1.setFillColor(Color(255, 0, 0, 0));
			laser2.setFillColor(Color(255, 0, 0, 0));
			laser3.setFillColor(Color(255, 0, 0, 0));
			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);
			laser5.setPosition(-1000, -1000);

		}



		if (t.asSeconds() < 29 && t.asSeconds() > 28 && pause == false) {
			laser4.setPosition(519.6152423, 0);
			laser4.setFillColor(Color(77, 8, 67, 128));
			laser5.setPosition(473.3847577, 0);
			laser5.setFillColor(Color(77, 8, 67, 128));

		}
		else if (t.asSeconds() < 37 && t.asSeconds() > 29 && pause == false) {
			laser_on = true;
			kills_thief = true;
			diagonal_laser_on1 = true;
			diagonal_laser_on2 = true;
			laser4.setFillColor(Color(77, 8, 67, 255));
			laser5.setFillColor(Color(77, 8, 67, 255));



			if (laser4.getPosition().x < 919.6152423 && pause == false) {
				laser4.setPosition(laser4.getPosition().x + 0.5, 0);
				laser5.setPosition(laser5.getPosition().x - 0.5, 0);
			}
			else {
				laser4.setPosition(laser4.getPosition().x, 0);
				laser5.setPosition(laser5.getPosition().x, 0);
			}
		}

		else if (t.asSeconds() < 38 && t.asSeconds() > 37 && pause == false) {
			laser_on = false;
			diagonal_laser_on1 = false;
			diagonal_laser_on2 = false;
			kills_thief = false;
			laser4.setFillColor(Color(255, 0, 0, 0));
			laser5.setFillColor(Color(255, 0, 0, 0));

			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);
			laser5.setPosition(-1000, -1000);

		}


		if (t.asSeconds() < 38.5 && t.asSeconds() > 38 && pause == false) {
			laser4.setPosition(-450, 0);

		}
		else if (t.asSeconds() < 44.5 && t.asSeconds() > 38.5 && pause == false) {
			laser_on = true;
			kills_thief = true;
			diagonal_laser_on1 = true;
			laser4.setFillColor(Color(77, 8, 67, 255));

			if (laser4.getPosition().x < 1319.6152423 + 50 && pause == false) {
				laser4.setPosition(laser4.getPosition().x + 1.5, 0);
			}
			else {
				laser4.setPosition(laser4.getPosition().x, 0);
			}
		}
		else if (t.asSeconds() < 45 && t.asSeconds() > 44.5 && pause == false) {
			laser_on = false;
			kills_thief = false;
			diagonal_laser_on1 = false;
			laser4.setFillColor(Color(255, 0, 0, 0));
			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);


		}


		if (t.asSeconds() < 44 && t.asSeconds() > 43.5 && pause == false) {
			laser5.setPosition(1442, 0);

		}
		else if (t.asSeconds() < 49 && t.asSeconds() > 44 && pause == false) {
			laser_on = true;
			kills_thief = true;
			diagonal_laser_on2 = true;
			laser5.setFillColor(Color(77, 8, 67, 255));

			if (laser5.getPosition().x > 473.3847577 - 800 && pause == false) {
				laser5.setPosition(laser5.getPosition().x - 1.5, 0);
			}
			else {
				laser5.setPosition(laser5.getPosition().x, 0);
			}
		}
		else if (t.asSeconds() < 49.5 && t.asSeconds() > 49 && pause == false) {
			laser_on = false;
			kills_thief = false;
			diagonal_laser_on2 = false;
			laser5.setFillColor(Color(255, 0, 0, 0));
			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);
			laser5.setPosition(-1000, -1000);

		}

		if (t.asSeconds() < 50 && t.asSeconds() > 49.5 && pause == false) {
			laser1.setPosition(993, 0);

			laser2.setPosition(0, 0);

			laser3.setPosition(-450, 800);
			laser3.setFillColor(Color(77, 8, 67, 128));

		}
		else if (t.asSeconds() < 50.5 && t.asSeconds() > 50 && pause == false) {
			laser_on = true;
			kills_thief = true;
			laser3.setFillColor(Color(77, 8, 67, 255));


		}
		else if (t.asSeconds() < 51 && t.asSeconds() > 50.5 && pause == false) {
			laser_on = false;
			laser1.setFillColor(Color(77, 8, 67, 128));
			laser2.setFillColor(Color(77, 8, 67, 128));
		}
		else if (t.asSeconds() < 55 && t.asSeconds() > 51 && pause == false) {
			laser_on = true;
			kills_thief = true;
			laser2.setFillColor(Color(77, 8, 67));

			if (laser2.getPosition().x < 800 && pause == false) {
				laser2.setPosition(laser2.getPosition().x + 1.25, 0);
			}
			else {
				laser2.setPosition(laser2.getPosition().x , 0);

			}
		}
		else if (t.asSeconds() < 58 && t.asSeconds() > 54 && pause == false) {
			laser_on = true;
			laser1.setFillColor(Color(77, 8, 67));
			laser2.setScale(0, 0);
			if (laser1.getPosition().x > 200 && pause == false) {
				laser1.setPosition(laser1.getPosition().x - 1.25, 0);
			}
			else {
				laser1.setPosition(laser1.getPosition().x, 0);
			}

		}
		if (t.asSeconds() < 58.5 && t.asSeconds() > 58 && pause == false) {
			laser_on = false;
			laser1.setFillColor(Color(255, 0, 0, 0));
			laser2.setFillColor(Color(255, 0, 0, 0));
			laser3.setFillColor(Color(255, 0, 0, 0));
			laser1.setPosition(-1000, -1000);
			laser2.setPosition(-1000, -1000);
			laser3.setPosition(-1000, -1000);
			laser4.setPosition(-1000, -1000);
			laser5.setPosition(-1000, -1000);
		}

		
		//////// wave 2
		Time t2;
		if (pause == false)
			t2 = wave2.getElapsedTime();

		if (t2.asSeconds() < 60) {
			wave3.restart();
		}
		
		////////potions spawning
		if (t2.asSeconds() > 1.5 && t2.asSeconds() < 1.6) {
			potion1.setPosition(500, -100);
		}

		if (t2.asSeconds() > 3.5 && t2.asSeconds() < 3.6) {
			potion2.setPosition(250, -100);
		}

		if (t2.asSeconds() > 6.5 && t2.asSeconds() < 6.6) {
			potion3.setPosition(750, -100);
		}

		if (t2.asSeconds() > 9.5 && t2.asSeconds() < 9.6) {
			potion4.setPosition(950, -100);
		}

		if (t2.asSeconds() > 12.5 && t2.asSeconds() < 12.6) {
			potion5.setPosition(350, -100);
		}

		if (t2.asSeconds() > 15.5 && t2.asSeconds() < 15.6) {
			potion6.setPosition(50, -100);
		}

		if (t2.asSeconds() > 18.5 && t2.asSeconds() < 18.6) {
			potion7.setPosition(825, -100);
		}

		if (t2.asSeconds() > 21.5 && t2.asSeconds() < 21.6) {
			potion72.setPosition(550, -100);
		}

		if (t2.asSeconds() > 22.5 && t2.asSeconds() < 22.6) {
			potion8.setPosition(450, -100);
		}

		if (t2.asSeconds() > 23.5 && t2.asSeconds() < 23.6) {
			potion9.setPosition(350, -100);
		}

		if (t2.asSeconds() > 24.5 && t2.asSeconds() < 24.6) {
			potion10.setPosition(250, -100);
		}

		if (t2.asSeconds() > 25.5 && t2.asSeconds() < 25.6) {
			potion11.setPosition(150, -100);
		}

		if (t2.asSeconds() > 26.5 && t2.asSeconds() < 26.6) {
			potion12.setPosition(50, -100);
		}

		if (t2.asSeconds() > 29.5 && t2.asSeconds() < 29.6) {
			potion13.setPosition(650, -100);
		}

		if (t2.asSeconds() > 32.5 && t2.asSeconds() < 32.6) {
			potion14.setPosition(950, -100);
		}

		if (t2.asSeconds() > 33.5 && t2.asSeconds() < 33.6) {
			potion15.setPosition(850, -100);
		}

		if (t2.asSeconds() > 34.5 && t2.asSeconds() < 34.6) {
			potion16.setPosition(750, -100);
		}

		if (t2.asSeconds() > 35.5 && t2.asSeconds() < 35.6) {
			potion17.setPosition(650, -100);
		}

		if (t2.asSeconds() > 36.5 && t2.asSeconds() < 36.6) {
			potion18.setPosition(550, -100);
		}

		if (t2.asSeconds() > 37.5 && t2.asSeconds() < 37.6) {
			potion19.setPosition(450, -100);
		}

		if (t2.asSeconds() > 38.5 && t2.asSeconds() < 38.6) {
			potion20.setPosition(350, -100);
		}

		if (t2.asSeconds() > 39.5 && t2.asSeconds() < 39.6) {
			potion21.setPosition(250, -100);
		}

		if (t2.asSeconds() > 41.5 && t2.asSeconds() < 41.6) {
			potion22.setPosition(150, -100);
		}

		if (t2.asSeconds() > 45.5 && t2.asSeconds() < 45.6) {
			potion23.setPosition(50, -100);
		}

		if (t2.asSeconds() > 46.5 && t2.asSeconds() < 46.6) {
			potion72.setPosition(450, -100);
			oldframe[7] = 1;
			potion72.setColor(Color::White);
		}

		if (t2.asSeconds() > 47.5 && t2.asSeconds() < 47.6) {
			potion8.setPosition(550, -100);
			oldframe[8] = 1;
			potion8.setColor(Color::White);
		}

		if (t2.asSeconds() > 48.5 && t2.asSeconds() < 48.6) {
			potion9.setPosition(650, -100);
			oldframe[9] = 1;
			potion9.setColor(Color::White);
		}

		if (t2.asSeconds() > 49.5 && t2.asSeconds() < 49.6) {
			potion10.setPosition(750, -100);
			oldframe[10] = 1;
			potion10.setColor(Color::White);
		}

		if (t2.asSeconds() > 50.5 && t2.asSeconds() < 50.6) {
			potion11.setPosition(850, -100);
			oldframe[11] = 1;
			potion11.setColor(Color::White);
		}

		if (t2.asSeconds() > 51.5 && t2.asSeconds() < 51.6) {
			potion12.setPosition(950, -100);
			oldframe[12] = 1;
			potion12.setColor(Color::White);
		}
		if (t2.asSeconds() > 57.6) {

			if (pause == false) {
				potion24.move(0, 3);
				potion25.move(0, 3);
				potion26.move(0, 3);
				potion27.move(0, 3);
				potion28.move(0, 3);
				potion29.move(0, 3);
				potion30.move(0, 3);
				potion31.move(0, 3);
				potion32.move(0, 3);
				potion33.move(0, 3);
			}
			potion24.setRotation(rotation);
			potion25.setRotation(rotation);
			potion26.setRotation(rotation);
			potion27.setRotation(rotation);
			potion28.setRotation(rotation);
			potion29.setRotation(rotation);
			potion30.setRotation(rotation);
			potion31.setRotation(rotation);
			potion32.setRotation(rotation);
			potion33.setRotation(rotation);
		}
		
		
		//////potions logic
		if (pause == false)
		rotation += 3;

		if (potion1.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[0] == 0) {
				oldframe[0] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion1.setColor(Color::Transparent);
			splash1.setPosition(450, 878);
			splash1.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[0]) * 48.47), 100, 45));
			if (currentframe - oldframe[0] > 35) {
				splash1.setPosition(-2000, -2000);
			}
		}
		else {
			potion1.setOrigin(56.5, 56.5);
			potion1.setRotation(rotation);
			if (pause == false)
			potion1.move(0, 3);
		}
		
		if (potion2.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[1]==0) {
				oldframe[1] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion2.setColor(Color::Transparent);
			splash2.setPosition(200, 878);
			splash2.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[1]) * 48.47), 100, 45));
			if (currentframe - oldframe[1] > 35) {
				splash2.setPosition(-2000, -2000);
			}
		}
		else {
			potion2.setOrigin(56.5, 56.5);
			potion2.setRotation(rotation);
			if (pause == false)
			potion2.move(0, 3);
		}

		if (potion3.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[2] == 0) {
				oldframe[2] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion3.setColor(Color::Transparent);
			splash3.setPosition(700, 878);
			splash3.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[2]) * 48.47), 100, 45));
			if (currentframe - oldframe[2] > 35) {
				splash3.setPosition(-2000, -2000);
			}
		}
		else {
			potion3.setOrigin(56.5, 56.5);
			potion3.setRotation(rotation);
			if (pause == false)
			potion3.move(0, 3);
		}
		
		if (potion4.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[3] == 0) {
				oldframe[3] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion4.setColor(Color::Transparent);
			splash4.setPosition(900, 878);
			splash4.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[3]) * 48.47), 100, 45));
			if (currentframe - oldframe[3] > 35) {
				splash4.setPosition(-2000, -2000);
			}
		}
		else {
			potion4.setOrigin(56.5, 56.5);
			potion4.setRotation(rotation);
			if (pause == false)
			potion4.move(0, 3);

		}

		if (potion5.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[4] == 0) {
				oldframe[4] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion5.setColor(Color::Transparent);
			splash5.setPosition(300, 878);
			splash5.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[4]) * 48.47), 100, 45));
			if (currentframe - oldframe[4] > 35) {
				splash5.setPosition(-2000, -2000);
			}
		}
		else {
			potion5.setOrigin(56.5, 56.5);
			potion5.setRotation(rotation);
			if (pause == false)
			potion5.move(0, 3);
		}

		if (potion6.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[5] == 0) {
				oldframe[5] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion6.setColor(Color::Transparent);
			splash6.setPosition(0, 878);
			splash6.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[5]) * 48.47), 100, 45));
			if (currentframe - oldframe[5] > 35) {
				splash6.setPosition(-2000, -2000);
			}
		}
		else {
			potion6.setOrigin(56.5, 56.5);
			potion6.setRotation(rotation);
			if (pause == false)
			potion6.move(0, 3);
		}
		if (potion7.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[6] == 0) {
				oldframe[6] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion7.setColor(Color::Transparent);
			splash7.setPosition(775, 878);
			splash7.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[6]) * 48.47), 100, 45));
			if (currentframe - oldframe[6] > 35) {
				splash7.setPosition(-2000, -2000);
			}
		}
		else {
			potion7.setOrigin(56.5, 56.5);
			potion7.setRotation(rotation);
			if (pause == false)
			potion7.move(0, 3);
		}

		if (potion72.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[7] == 0) {
				oldframe[7] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash72.setPosition(500, 878);
			}
			else if (oldframe[7] == 1) {
				oldframe[7] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash72.setPosition(400, 878);
			}
			potion72.setColor(Color::Transparent);
			splash72.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[7]) * 48.47), 100, 45));
			if (currentframe - oldframe[7] > 35) {
				splash72.setPosition(-2000, -2000);
			}
		}
		else {
			potion72.setOrigin(56.5, 56.5);
			potion72.setRotation(rotation);
			if (pause == false)
			potion72.move(0, 3);
		}

		if (potion8.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[8] == 0) {
				oldframe[8] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash8.setPosition(400, 878);
			}
			else if (oldframe[8] == 1) {
				oldframe[8] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash8.setPosition(500, 878);
			}
			potion8.setColor(Color::Transparent);
			splash8.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[8]) * 48.47), 100, 45));
			if (currentframe - oldframe[8] > 35) {
				splash8.setPosition(-2000, -2000);
			}
		}
		else {
			potion8.setOrigin(56.5, 56.5);
			potion8.setRotation(rotation);
			if (pause == false)
			potion8.move(0, 3);
		}

		if (potion9.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[9] == 0) {
				oldframe[9] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash9.setPosition(300, 878);
			}
			else if (oldframe[9] == 1) {
				oldframe[9] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash9.setPosition(600, 878);
			}
			potion9.setColor(Color::Transparent);
			splash9.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[9]) * 48.47), 100, 45));
			if (currentframe - oldframe[9] > 35) {
				splash9.setPosition(-2000, -2000);
			}
		}
		else {
			potion9.setOrigin(56.5, 56.5);
			potion9.setRotation(rotation);
			if (pause == false)
			potion9.move(0, 3);

		}

		if (potion10.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[10] == 0) {
				oldframe[10] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash10.setPosition(200, 878);
			}
			else if (oldframe[10] == 1) {
				oldframe[10] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash10.setPosition(700, 878);
			}
			potion10.setColor(Color::Transparent);
			splash10.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[10]) * 48.47), 100, 45));
			if (currentframe - oldframe[10] > 35) {
				splash10.setPosition(-2000, -2000);
			}
		}
		else {
			potion10.setOrigin(56.5, 56.5);
			potion10.setRotation(rotation);
			if (pause == false)
			potion10.move(0, 3);
		}

		if (potion11.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[11] == 0) {
				oldframe[11] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash11.setPosition(100, 878);
			}
			else if (oldframe[11] == 1) {
				oldframe[11] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash11.setPosition(800, 878);
			}
			potion11.setColor(Color::Transparent);
			splash11.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[11]) * 48.47), 100, 45));
			if (currentframe - oldframe[11] > 35) {
				splash11.setPosition(-2000, -2000);
			}
		}
		else {
			potion11.setOrigin(56.5, 56.5);
			potion11.setRotation(rotation);
			if (pause == false)
			potion11.move(0, 3);
		}
		if (potion12.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[12] == 0) {
				oldframe[12] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				splash12.setPosition(0, 878);
			}
			else if (oldframe[12] == 1) {
				splash12.setPosition(900, 878);
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				oldframe[12] = currentframe;
				
			}
			potion12.setColor(Color::Transparent);
			splash12.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[12]) * 48.47), 100, 45));
			if (currentframe - oldframe[12] > 35) {
				splash12.setPosition(-2000, -2000);
			}
		}
		else {
			potion12.setOrigin(56.5, 56.5);
			potion12.setRotation(rotation);
			if (pause == false)
			potion12.move(0, 3);
		}
		if (potion13.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[13] == 0) {
				oldframe[13] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion13.setColor(Color::Transparent);
			splash13.setPosition(600, 878);
			splash13.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[13]) * 48.47), 100, 45));
			if (currentframe - oldframe[13] > 35) {
				splash13.setPosition(-2000, -2000);
			}
		}
		else {
			potion13.setOrigin(56.5, 56.5);
			potion13.setRotation(rotation);
			if (pause == false)
			potion13.move(0, 3);
		}
		if (potion14.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[14] == 0) {
				oldframe[14] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion14.setColor(Color::Transparent);
			splash14.setPosition(900, 878);
			splash14.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[14]) * 48.47), 100, 45));
			if (currentframe - oldframe[14] > 35) {
				splash14.setPosition(-2000, -2000);
			}
		}
		else {
			potion14.setOrigin(56.5, 56.5);
			potion14.setRotation(rotation);
			if (pause == false)
			potion14.move(0, 3);

		}

		if (potion15.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[15] == 0) {
				oldframe[15] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion15.setColor(Color::Transparent);
			splash15.setPosition(800, 878);
			splash15.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[15]) * 48.47), 100, 45));
			if (currentframe - oldframe[15] > 35) {
				splash15.setPosition(-2000, -2000);
			}
		}
		else {
			potion15.setOrigin(56.5, 56.5);
			potion15.setRotation(rotation);
			if (pause == false)
			potion15.move(0, 3);
		}

		if (potion16.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[16] == 0) {
				oldframe[16] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion16.setColor(Color::Transparent);
			splash16.setPosition(700, 878);
			splash16.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[16]) * 48.47), 100, 45));
			if (currentframe - oldframe[16] > 35) {
				splash16.setPosition(-2000, -2000);
			}
		}
		else {
			potion16.setOrigin(56.5, 56.5);
			potion16.setRotation(rotation);
			if (pause == false)
			potion16.move(0, 3);
		}
		if (potion17.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[17] == 0) {
				oldframe[17] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion17.setColor(Color::Transparent);
			splash17.setPosition(600, 878);
			splash17.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[17]) * 48.47), 100, 45));
			if (currentframe - oldframe[17] > 35) {
				splash17.setPosition(-2000, -2000);
			}
		}
		else {
			potion17.setOrigin(56.5, 56.5);
			potion17.setRotation(rotation);
			if (pause == false)
			potion17.move(0, 3);
		}

		if (potion18.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[18] == 0) {
				oldframe[18] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion18.setColor(Color::Transparent);
			splash18.setPosition(500, 878);
			splash18.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[18]) * 48.47), 100, 45));
			if (currentframe - oldframe[18] > 35) {
				splash18.setPosition(-2000, -2000);
			}
		}
		else {
			potion18.setOrigin(56.5, 56.5);
			potion18.setRotation(rotation);
			if (pause == false)
			potion18.move(0, 3);
		}

		if (potion19.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[19] == 0) {
				oldframe[19] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion19.setColor(Color::Transparent);
			splash19.setPosition(400, 878);
			splash19.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[19]) * 48.47), 100, 45));
			if (currentframe - oldframe[19] > 35) {
				splash19.setPosition(-2000, -2000);
			}
		}
		else {
			potion19.setOrigin(56.5, 56.5);
			potion19.setRotation(rotation);
			if (pause == false)
			potion19.move(0, 3);

		}

		if (potion20.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[20] == 0) {
				oldframe[20] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion20.setColor(Color::Transparent);
			splash20.setPosition(300, 878);
			splash20.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[20]) * 48.47), 100, 45));
			if (currentframe - oldframe[20] > 35) {
				splash20.setPosition(-2000, -2000);
			}
		}
		else {
			potion20.setOrigin(56.5, 56.5);
			potion20.setRotation(rotation);
			if (pause == false)
			potion20.move(0, 3);
		}

		if (potion21.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[21] == 0) {
				oldframe[21] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion21.setColor(Color::Transparent);
			splash21.setPosition(200, 878);
			splash21.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[21]) * 48.47), 100, 45));
			if (currentframe - oldframe[21] > 35) {
				splash21.setPosition(-2000, -2000);
			}
		}
		else {
			potion21.setOrigin(56.5, 56.5);
			potion21.setRotation(rotation);
			if (pause == false)
			potion21.move(0, 3);
		}
		if (potion22.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[22] == 0) {
				oldframe[22] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion22.setColor(Color::Transparent);
			splash22.setPosition(100, 878);
			splash22.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[22]) * 48.47), 100, 45));
			
			if (currentframe - oldframe[22] > 35) {
				splash22.setPosition(-2000, -2000);
			}
		}
		else {
			potion22.setOrigin(56.5, 56.5);
			potion22.setRotation(rotation);
			if (pause == false)
			potion22.move(0, 3);
		}
		if (potion23.getGlobalBounds().intersects(ground.getGlobalBounds())) {
			if (oldframe[23] == 0) {
				oldframe[23] = currentframe;
				potion.play();
				for (int i = 0; potion.getStatus() == sf::Sound::Playing && i < 7; i++) {}
			}
			potion23.setColor(Color::Transparent);
			splash23.setPosition(0, 878);
			splash23.setTextureRect(IntRect(0, 5 + (int((currentframe)-oldframe[23]) * 48.47), 100, 45));
			
			if (currentframe - oldframe[23] > 35) {
				splash23.setPosition(-2000, -2000);
			}
		}
		else {
			potion23.setOrigin(56.5, 56.5);
			potion23.setRotation(rotation);
			if (pause == false)
			potion23.move(0, 3);
		}

		////////////////// wave 3


		boxes_collision(box1, box2, box3, box4, box5, box6, box7, box8, box9, box10, box11, box12, fall2, fall3, fall4, fall5, fall6, fall7, fall8, fall9, fall10, fall11, fall12);


		Time t3;
		if (pause == false)
			t3 = wave3.getElapsedTime();

		if (t3.asSeconds() < 60) {
			wave4.restart();
		}


		if (t3.asSeconds() > 0.5) {
			if (!box1.getGlobalBounds().intersects(ground.getGlobalBounds()) && pause == false) {
				box1.move(0, 1.815);
			}
		}


		if (t3.asSeconds() > 5) {
			if (!box2.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall2 == true && pause == false) {
				box2.move(0, 1.815);
			}

		}


		if (t3.asSeconds() > 10) {
			if (!box3.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall3 == true && pause == false) {
				box3.move(0, 1.815);
			}
		}

		if (t3.asSeconds() > 15) {
			if (!box4.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall4 == true && pause == false) {
				box4.move(0, 1.815);
			}
		}

		if (t3.asSeconds() > 20) {
			if (!box5.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall5 == true && pause == false) {
				box5.move(0, 1.815);
			}
		}


		if (t3.asSeconds() > 25) {
			if (!box6.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall6 == true && pause == false) {
				box6.move(0, 1.815);
			}
		}


		if (t3.asSeconds() > 30) {
			if (!box7.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall7 == true && pause == false) {
				box7.move(0, 1.815);
			}
		}

		if (t3.asSeconds() > 35) {
			if (!box8.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall8 == true && pause == false) {
				box8.move(0, 1.815);
			}
		}

		if (t3.asSeconds() > 40) {
			if (!box9.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall9 == true && pause == false) {
				box9.move(0, 1.815);
			}
		}

		if (t3.asSeconds() > 45) {
			if (!box10.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall10 == true && pause == false) {
				box10.move(0, 1.815);
			}
		}

		if (t3.asSeconds() > 50) {
			if (!box11.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall11 == true && pause == false) {
				box11.move(0, 1.815);
			}
		}

		if (t3.asSeconds() > 55) {
			if (!box12.getGlobalBounds().intersects(ground.getGlobalBounds()) && fall12 == true && pause == false) {
				box12.move(0, 1.815);
			}
		}

		/////////////wave 4
		Time t4;

		if (pause == false) {
			t4 = wave4.getElapsedTime();
		}


		if (t4.asSeconds() > 1) {
			box1.setPosition(7000, -150);
			box2.setPosition(7000, -150);
			box3.setPosition(3000, -150);
			box4.setPosition(2000, -150);
			box5.setPosition(4000, -150);
			box6.setPosition(2000, -150);
			box7.setPosition(5000, -150);
			box8.setPosition(2000, -150);
			box9.setPosition(5000, -150);
			box10.setPosition(8000, -150);
			box11.setPosition(9000, -150);
			box12.setPosition(6000, -150);
			if (pause == false)
			{
				ground3.move(-0.6, 0);
				ceiling1.move(-0.6, 0);
				ground4.move(-0.6, 0);
				ceiling2.move(-0.6, 0);
				ground5.move(-0.6, 0);
				ceiling3.move(-0.6, 0);
				ground6.move(-0.6, 0);
				ground7.move(-0.6, 0);
				ground8.move(-0.6, 0);
				ground9.move(-0.6, 0);
				ground10.move(-0.6, 0);
				ground11.move(-0.6, 0);
				ground12.move(-0.6, 0);
				wall_2.move(-0.6, 0);
				wall_3.move(-0.6, 0);
				wall_4.move(-0.6, 0);
				wall_5.move(-0.6, 0);
				squares_1.move(-0.6, 0);
				squares_2.move(-0.6, 0);
				squares_3.move(-0.6, 0);
				squares_4.move(-0.6, 0);
				squares_5.move(-0.6, 0);
				squares_6.move(-0.6, 0);
				squares_7.move(-0.6, 0);
				squares_8.move(-0.6, 0);
				squares_9.move(-0.6, 0);
				squares_10.move(-0.6, 0);
				squares_11.move(-0.6, 0);
				squares_12.move(-0.6, 0);
				squares_13.move(-0.6, 0);
				squares_14.move(-0.6, 0);
				squares_15.move(-0.6, 0);
				squares_16.move(-0.6, 0);
				squares_17.move(-0.6, 0);
				squares_18.move(-0.6, 0);
				squares_19.move(-0.6, 0);
				squares_20.move(-0.6, 0);
				squares_21.move(-0.6, 0);
				squares_22.move(-0.6, 0);
				squares_23.move(-0.6, 0);
				squares_24.move(-0.6, 0);
				squares_25.move(-0.6, 0);
				squares_26.move(-0.6, 0);
				squares_27.move(-0.6, 0);
				squares_28.move(-0.6, 0);
				squares_29.move(-0.6, 0);
				squares_30.move(-0.6, 0);
				squares_31.move(-0.6, 0);
				squares_32.move(-0.6, 0);
				squares_33.move(-0.6, 0);
				squares_34.move(-0.6, 0);
				squares_35.move(-0.6, 0);
				button.move(-0.6, 0);
				buttonp.move(-0.6, 0);
				button2.move(-0.6, 0);
			}


		}

		if (t4.asSeconds() > 5 && ground12.getPosition().x > -450) {
			if (pause == false)
				ground.move(-0.6, 0);
		}

		if (ground12.getPosition().x < -450 && ground12.getPosition().x > -460) {
			ground.setPosition(0, 900);
			key.setPosition(500, 750);
			door.setPosition(800, 955 -180);
		}
		
	
		

		/////////////////////////////////////////////////

		if (Thief.rect.left<left_wall || Thief.rect.left > right_wall) {
			dead[0] = 1;
		}
		if (Scientist.rect.left<left_wall || Thief.rect.left > right_wall) {
			dead[1] = 1;
		}
		if (Builder.rect.left<left_wall || Thief.rect.left > right_wall) {
			dead[2] = 1;
		}
		if (Astronaut.rect.left<left_wall || Thief.rect.left > right_wall) {
			dead[3] = 1;
		}
		///////////////////// THIEF DEATH SOUND

		if (Tfell) {
			if (Tdeathsound == 0) {
				fall.play();
				for (int i = 0; fall.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Tdeathsound = 1;
			}
		}

		if (Tburn) {
			if (Tdeathsound == 0) {
				lazer.play();
				for (int i = 0; lazer.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Tdeathsound = 1;
			}
		}

		if (Tstomped) {
			if (Tdeathsound == 0) {
				stomp.play();
				for (int i = 0; stomp.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Tdeathsound = 1;
			}
		}

		if (Tpoisoned) {
			if (Tdeathsound == 0) {
				decay.play();
				for (int i = 0; decay.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Tdeathsound = 1;
			}
		}

		///////////////////// SCIENTIST DEATH SOUND

		if (Sfell) {
			if (Sdeathsound == 0) {
				fall.play();
				for (int i = 0; fall.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Sdeathsound = 1;
			}
		}

		if (Sburn) {
			if (Sdeathsound == 0) {
				lazer.play();
				for (int i = 0; lazer.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Sdeathsound = 1;
			}
		}

		if (Sstomped) {
			if (Sdeathsound == 0) {
				stomp.play();
				for (int i = 0; stomp.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Sdeathsound = 1;
			}
		}

		if (Spoisoned) {
			if (Sdeathsound == 0) {
				decay.play();
				for (int i = 0; decay.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Sdeathsound = 1;
			}
		}

		///////////////////// BUILDER DEATH SOUND

		if (Bfell) {
			if (Bdeathsound == 0) {
				fall.play();
				for (int i = 0; fall.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Bdeathsound = 1;
			}
		}

		if (Bburn) {
			if (Bdeathsound == 0) {
				lazer.play();
				for (int i = 0; lazer.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Bdeathsound = 1;
			}
		}

		if (Bstomped) {
			if (Bdeathsound == 0) {
				stomp.play();
				for (int i = 0; stomp.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Bdeathsound = 1;
			}
		}

		if (Bpoisoned) {
			if (Bdeathsound == 0) {
				decay.play();
				for (int i = 0; decay.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Bdeathsound = 1;
			}
		}

		///////////////////// ASTRO DEATH SOUND

		if (Afell) {
			if (Adeathsound == 0) {
				fall.play();
				for (int i = 0; fall.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Adeathsound = 1;
			}
		}

		if (Aburn) {
			if (Adeathsound == 0) {
				lazer.play();
				for (int i = 0; lazer.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Adeathsound = 1;
			}
		}

		if (Astomped) {
			if (Adeathsound == 0) {
				stomp.play();
				for (int i = 0; stomp.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Adeathsound = 1;
			}
		}

		if (Apoisoned) {
			if (Adeathsound == 0) {
				decay.play();
				for (int i = 0; decay.getStatus() == sf::Sound::Playing && i < 7; i++) {}
				Adeathsound = 1;
			}
		}

		/////abilities

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

		///////

		isunlocked = true;

		if (Key(window, Thief, Scientist, Builder, Astronaut, key, door, door2, pagenum, admin))
		{
			
			
			if (!freeplay) {
				ofstream outputFile("progress.txt");

				progress = 10;
				outputFile << 10 << endl << difficult << endl;
				outputFile.close();
				credits(window, pagenum);
			}
			else {
				credits(window, pagenum);
			}
			Reset();
			return;
		}

		if (whoisTouching != 0) {
			Reset();
			break;
		}

	

		
		//////////THIEF COLLISION///////////////////

		Thief_collision10(Thief, ground, ground3, ground4, ground5, ground6, ground7, ground8, ground9, ground10, ground11, ground12, laser1, laser2, laser3, laser4, laser5, box1, box2, box3, box4, box5, box6, box7, box8, box9, box10, box11, box12, death_floor1, death_floor2, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21, squares_22, squares_23, squares_24, squares_25, squares_26, squares_27, squares_28, squares_29, squares_30, squares_31, squares_32, squares_33, squares_34, squares_35, button, buttonp, splash1, splash2, splash3, splash4, splash5, splash6, splash7, splash8, splash9, splash10, splash11, splash12, splash13, splash14, splash15, splash16, splash17, splash18, splash19, splash20, splash21, splash22, splash23);

		//////////SCIENTIST COLLISION ///////////////////

		Scientist_collision10(Scientist, ground, ground3, ground4, ground5, ground6, ground7, ground8, ground9, ground10, ground11, ground12, laser1, laser2, laser3, laser4, laser5, box1, box2, box3, box4, box5, box6, box7, box8, box9, box10, box11, box12, death_floor1, death_floor2, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21, squares_22, squares_23, squares_24, squares_25, squares_26, squares_27, squares_28, squares_29, squares_30, squares_31, squares_32, squares_33, squares_34, squares_35, button, buttonp, splash1, splash2, splash3, splash4, splash5, splash6, splash7, splash8, splash9, splash10, splash11, splash12, splash13, splash14, splash15, splash16, splash17, splash18, splash19, splash20, splash21, splash22, splash23);

		//////////BUILDER COLLISION///////////////////

		Builder_collision10(Builder, ground, ground3, ground4, ground5, ground6, ground7, ground8, ground9, ground10, ground11, ground12, laser1, laser2, laser3, laser4, laser5, box1, box2, box3, box4, box5, box6, box7, box8, box9, box10, box11, box12, death_floor1, death_floor2, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21, squares_22, squares_23, squares_24, squares_25, squares_26, squares_27, squares_28, squares_29, squares_30, squares_31, squares_32, squares_33, squares_34, squares_35, button, buttonp, splash1, splash2, splash3, splash4, splash5, splash6, splash7, splash8, splash9, splash10, splash11, splash12, splash13, splash14, splash15, splash16, splash17, splash18, splash19, splash20, splash21, splash22, splash23);

		//////////ASTRONAUT COLLISION///////////////////

		Astronaut_collision10(Astronaut, ceiling1, ceiling2, ceiling3, ground, ground3, ground4, ground5, ground6, ground7, ground8, ground9, ground10, ground11, ground12, laser1, laser2, laser3, laser4, laser5, box1, box2, box3, box4, box5, box6, box7, box8, box9, box10, box11, box12, death_floor1, death_floor2, wall_1, wall_2, wall_3, wall_4, wall_5, wall_6, squares_1, squares_2, squares_3, squares_4, squares_5, squares_6, squares_7, squares_8, squares_9, squares_10, squares_11, squares_12, squares_13, squares_14, squares_15, squares_16, squares_17, squares_18, squares_19, squares_20, squares_21, squares_22, squares_23, squares_24, squares_25, squares_26, squares_27, squares_28, squares_29, squares_30, squares_31, squares_32, squares_33, squares_34, squares_35, button, buttonp, splash1, splash2, splash3, splash4, splash5, splash6, splash7, splash8, splash9, splash10, splash11, splash12, splash13, splash14, splash15, splash16, splash17, splash18, splash19, splash20, splash21, splash22, splash23);

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
		int midx = 500;
		view.setCenter(500, 700);
		view.setSize(1920 / 0.8, 1080 / 0.8);
		
		screenratio = 0.8 / 1.125;

		//////////////////////////////////////////
		Paused paused(screenratio, sel, 500, pagenum, deathscreen, i, 700);
		sel = paused.pressed();

		//////////////////////////////////////////////////
		///////////////// pause menu

		if (pause == true) {

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
		window.draw(ground2);
		window.draw(ground);
		window.draw(key);
		window.draw(door);


		////////////wave1
		window.draw(laser1);
		window.draw(laser2);
		window.draw(laser3);
		window.draw(laser4);
		window.draw(laser5);


		////////////wave 2
		window.draw(potion1);
		window.draw(potion2);
		window.draw(potion3);
		window.draw(potion4);
		window.draw(potion5);
		window.draw(potion6);
		window.draw(potion7);
		window.draw(potion72);
		window.draw(potion8);
		window.draw(potion9);
		window.draw(potion10);
		window.draw(potion11);
		window.draw(potion12);
		window.draw(potion13);
		window.draw(potion14);
		window.draw(potion15);
		window.draw(potion16);
		window.draw(potion17);
		window.draw(potion18);
		window.draw(potion19);
		window.draw(potion20);
		window.draw(potion21);
		window.draw(potion22);
		window.draw(potion23);
		if (potion24.getPosition().y < 800) {
			window.draw(potion24);
			window.draw(potion25);
			window.draw(potion26);
			window.draw(potion27);
			window.draw(potion28);
			window.draw(potion29);
			window.draw(potion30);
			window.draw(potion31);
			window.draw(potion32);
			window.draw(potion33);
		}
		window.draw(splash1);
		window.draw(splash2);
		window.draw(splash3);
		window.draw(splash4);
		window.draw(splash5);
		window.draw(splash6);
		window.draw(splash7);
		window.draw(splash72);
		window.draw(splash8);
		window.draw(splash9);
		window.draw(splash10);
		window.draw(splash11);
		window.draw(splash12);
		window.draw(splash13);
		window.draw(splash14);
		window.draw(splash15);
		window.draw(splash16);
		window.draw(splash17);
		window.draw(splash18);
		window.draw(splash19);
		window.draw(splash20);
		window.draw(splash21);
		window.draw(splash22);
		window.draw(splash23);
		
		////////////wave3
		window.draw(box1);
		window.draw(box2);
		window.draw(box3);
		window.draw(box4);
		window.draw(box5);
		window.draw(box6);
		window.draw(box7);
		window.draw(box8);
		window.draw(box9);
		window.draw(box10);
		window.draw(box11);
		window.draw(box12);

		////////////wave 4 
		window.draw(ground3);
		window.draw(ceiling1);
		window.draw(ground4);
		window.draw(ceiling2);
		window.draw(ground5);
		window.draw(ceiling3);
		window.draw(ground6);
		window.draw(ground7);
		window.draw(ground8);
		window.draw(ground9);
		window.draw(ground10);
		window.draw(ground11);
		window.draw(ground12);
		window.draw(wall_4);
		window.draw(wall_6);
		if (medium || hard) {
			window.draw(wall_1);
			window.draw(wall_2);
			window.draw(wall_3);
			window.draw(wall_5);
			window.draw(button2);
		}
		window.draw(squares_1);
		window.draw(squares_2);
		window.draw(squares_3);
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
		window.draw(squares_18);
		window.draw(squares_19);
		window.draw(squares_20);
		window.draw(squares_21);
		window.draw(squares_22);
		window.draw(squares_23);
		window.draw(squares_24);
		window.draw(squares_25);
		window.draw(squares_26);
		window.draw(squares_27);
		window.draw(squares_28);
		window.draw(squares_29);
		window.draw(squares_30);
		window.draw(squares_31);
		window.draw(squares_32);
		window.draw(squares_33);
		window.draw(squares_34);
		window.draw(squares_35);
		window.draw(button);
		window.draw(buttonp);
	
		
		
		//////////////
		window.draw(Thief.pico);
		window.draw(Scientist.pico);
		window.draw(Builder.pico);
		window.draw(Astronaut.pico);
		window.draw(death_box);
		window.draw(border);
		window.draw(admin);
		if (t.asSeconds() < 4 && t.asSeconds() > 2) {
			window.draw(wave_1);
		}
		if (t2.asSeconds() < 4 && t2.asSeconds() > 2) {
			window.draw(wave_2);
		}
		if (t3.asSeconds() < 4 && t3.asSeconds() > 2) {
			window.draw(wave_3);
		}
		if (t4.asSeconds() < 4 && t4.asSeconds() > 2) {
			window.draw(wave_4);
		}
		if (pause == true) {

			window.draw(pausescreen);
			if (deathscreen) {
				window.draw(Alldeath);	
			}
			paused.draw(window);

		}


		window.display();



	}

}