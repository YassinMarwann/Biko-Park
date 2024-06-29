#pragma once
#include "Initialization.h"






void maps(RenderWindow& window, int& pagenum)
{
	View menu = window.getDefaultView();
	View view = window.getDefaultView();

	// SOUNDS
	Music start;
	start.openFromFile("../Assets/Sounds/starting.mp3");

	Music running;
	running.openFromFile("../Assets/Sounds/running.mp3");
	running.setVolume(20);

	Music levelenter;
	levelenter.openFromFile("../Assets/Sounds/levelenter.mp3");


	//MAP TEXTURES AND POSITIONS
	Texture maptex;
	maptex.loadFromFile("../Assets/Texture/map floor.png");
	Sprite map(maptex);
	Texture mountaintex;
	mountaintex.loadFromFile("../Assets/Texture/map mountain.png");
	Sprite mountain(mountaintex);

	RectangleShape border;
	border.setSize(Vector2f(7075 - 125, 3925 - 125));
	border.setPosition(1325, 800);

	RectangleShape levelbutton[10];
	for (int i = 0; i < 10; i++)
	{
		levelbutton[i].setFillColor(Color::Red);
		levelbutton[i].setSize(Vector2f(50, 50));
		levelbutton[i].setOrigin(25, 25);
	}

	RectangleShape rec[10];
	rec[0].setSize(Vector2f(445, 85));
	rec[0].setPosition(1459, 4940);

	rec[1].setSize(Vector2f(40, 545));
	rec[1].setPosition(7680, 250);

	rec[2].setSize(Vector2f(95, 350));
	rec[2].setPosition(6900, 1624);


	rec[3].setSize(Vector2f(95, 495));
	rec[3].setPosition(8585, 2405);

	rec[4].setSize(Vector2f(85, 400));
	rec[4].setPosition(5990, 3270);

	rec[5].setSize(Vector2f(430, 100));
	rec[5].setPosition(7480, 4970);

	rec[6].setSize(Vector2f(480, 110));
	rec[6].setPosition(6100, 4960);

	rec[7].setSize(Vector2f(85, 460));
	rec[7].setPosition(3350, 3800);

	rec[8].setSize(Vector2f(390, 125));
	rec[8].setPosition(4300, 2700);

	rec[8].setSize(Vector2f(390, 125));
	rec[8].setPosition(4300, 2700);


	Texture Level[10];
	Level[0].loadFromFile("../Assets/Texture/Level 1.png");
	Level[1].loadFromFile("../Assets/Texture/Level 2.png");
	Level[2].loadFromFile("../Assets/Texture/Level 3.png");
	Level[3].loadFromFile("../Assets/Texture/Level 4.png");
	Level[4].loadFromFile("../Assets/Texture/Level 5.png");
	Level[5].loadFromFile("../Assets/Texture/Level 6.png");
	Level[6].loadFromFile("../Assets/Texture/Level 7.png");
	Level[7].loadFromFile("../Assets/Texture/Level 8.png");
	Level[8].loadFromFile("../Assets/Texture/Level 9.png");
	Level[9].loadFromFile("../Assets/Texture/Level 10.png");

	Texture Levellocked[10];
	Levellocked[0].loadFromFile("../Assets/Texture/Level 1.png");
	Levellocked[1].loadFromFile("../Assets/Texture/locked Level 2.png");
	Levellocked[2].loadFromFile("../Assets/Texture/locked Level 3.png");
	Levellocked[3].loadFromFile("../Assets/Texture/locked Level 4.png");
	Levellocked[4].loadFromFile("../Assets/Texture/locked Level 5.png");
	Levellocked[5].loadFromFile("../Assets/Texture/locked Level 6.png");
	Levellocked[6].loadFromFile("../Assets/Texture/locked Level 7.png");
	Levellocked[7].loadFromFile("../Assets/Texture/locked Level 8.png");
	Levellocked[8].loadFromFile("../Assets/Texture/locked Level 9.png");
	Levellocked[9].loadFromFile("../Assets/Texture/locked Level 10.png");

	Sprite level[10];
	for (int i = 0; i < 10; i++)
	{
		level[i].setScale(0, 0);
		level[i].setOrigin(500, 500);
	}

	level[0].setPosition(8000, 1130);
	levelbutton[0].setPosition(7690, 1185);

	level[1].setPosition(7030, 2570);
	levelbutton[1].setPosition(7335, 2435);

	level[2].setPosition(9065, 3300);
	levelbutton[2].setPosition(8740, 3295);

	level[3].setPosition(8395, 5095);
	levelbutton[3].setPosition(8260, 4825);

	level[4].setPosition(6875, 3865);
	levelbutton[4].setPosition(6815, 4150);

	level[5].setPosition(4950, 3845);
	levelbutton[5].setPosition(5210, 3780);

	level[6].setPosition(4450, 1610);
	levelbutton[6].setPosition(4425, 1910);

	level[7].setPosition(3945, 3570);
	levelbutton[7].setPosition(3665, 3445);

	level[8].setPosition(2165, 3730);
	levelbutton[8].setPosition(2320, 3950);

	level[9].setPosition(585, 4480);
	levelbutton[9].setPosition(1015, 4500);

	for (int i = 0; i <= progress; i++)
	{
		level[i].setTexture(Level[i]);
	}
	for (int i = progress + 1; i < 10; i++)
	{
		level[i].setTexture(Levellocked[i]);
	}


	////////////////////////////////////////////   SPRITES   ///////////////////////////////////////
	Texture carsheet;
	carsheet.loadFromFile("../Assets/Texture/car spritesheet.png");



	Sprite car(carsheet);
	car.setPosition(car_x, car_y);
	car.setScale(0.5, 0.5);
	car.setOrigin(250, 250);
	car.setTextureRect(IntRect(0, 1002, 501, 501));

	Texture smokesheet;
	smokesheet.loadFromFile("../Assets/Texture/smoke spritesheet.png");

	Sprite smoke(smokesheet);
	smoke.setPosition(car_x, car_y);
	smoke.setScale(0.5, 0.5);
	smoke.setOrigin(500, 500);
	smoke.setTextureRect(IntRect(0, 2000, 1000, 1000));

	////////////////////////////////////////////// loading screens ////////////////////////////////////////////
	Texture loading;

	loading.loadFromFile("../Assets/Texture/loading spritesheet.png");

	Sprite ls;
	ls.setTexture(loading);
	ls.setOrigin(1456 / 2, 819 / 2);
	ls.setScale(0, 0);
	ls.setTextureRect(IntRect(0, 0, 1456, 819));







	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	float speed = 2.5;

	float root2 = 1.414213562;

	int rand_sec = 3 + rand() % 8;

	bool drawls = false;

	bool move = true;

	int  currentframeforcar = 0;
	int  currentframeforls = 0;

	bool ismoving = false;

	int pagenum_1;


	Clock clock;

	Clock clock1;
	while (window.isOpen()) {

		currentframeforcar = int(clock1.getElapsedTime().asSeconds() * 6) % 6;
		currentframeforls = int(clock1.getElapsedTime().asSeconds() * 13) % 20;
		ismoving = false;


		if (clock1.getElapsedTime().asSeconds() < 0.1) {
			start.play();
			for (int i = 0; start.getStatus() == Sound::Playing && i < 2; i++);
		}


		if (move)
		{
			if (Keyboard::isKeyPressed(Keyboard::Left) && Keyboard::isKeyPressed(Keyboard::Down))
			{
				car.move(-speed / root2, speed / root2);
				car.setTextureRect(IntRect(currentframeforcar * 501, 3507, 501, 501));
				smoke.setTextureRect(IntRect(currentframeforcar * 1000, 7000, 1000, 1000));
				ismoving = true;
			}
			else if (Keyboard::isKeyPressed(Keyboard::Right) && Keyboard::isKeyPressed(Keyboard::Up))
			{
				car.move(speed / root2, -speed / root2);
				car.setTextureRect(IntRect(currentframeforcar * 501, 2004, 501, 501));
				smoke.setTextureRect(IntRect(currentframeforcar * 1000, 4000, 1000, 1000));
				ismoving = true;
			}
			else if (Keyboard::isKeyPressed(Keyboard::Right) && Keyboard::isKeyPressed(Keyboard::Down))
			{
				car.move(speed / root2, speed / root2);
				car.setTextureRect(IntRect(currentframeforcar * 501, 3006, 501, 501));
				smoke.setTextureRect(IntRect(currentframeforcar * 1000, 6000, 1000, 1000));
				ismoving = true;
			}
			else if (Keyboard::isKeyPressed(Keyboard::Left) && Keyboard::isKeyPressed(Keyboard::Up))
			{
				car.move(-speed / root2, -speed / root2);
				car.setTextureRect(IntRect(currentframeforcar * 501, 2505, 501, 501));
				smoke.setTextureRect(IntRect(currentframeforcar * 1000, 5000, 1000, 1000));
				ismoving = true;
			}
			else {
				if (Keyboard::isKeyPressed(Keyboard::Left))
				{
					car.move(-speed, 0);
					car.setTextureRect(IntRect(currentframeforcar * 501, 1503, 501, 501));
					smoke.setTextureRect(IntRect(currentframeforcar * 1000, 3000, 1000, 1000));
					ismoving = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Right))
				{
					car.move(speed, 0);
					car.setTextureRect(IntRect(currentframeforcar * 501, 1002, 501, 501));
					smoke.setTextureRect(IntRect(currentframeforcar * 1000, 2000, 1000, 1000));
					ismoving = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Up))
				{
					car.move(0, -speed);
					car.setTextureRect(IntRect(currentframeforcar * 501, 0, 501, 501));
					smoke.setTextureRect(IntRect(currentframeforcar * 1000, 0, 1000, 1000));
					ismoving = true;
				}
				if (Keyboard::isKeyPressed(Keyboard::Down))
				{
					car.move(0, speed);
					car.setTextureRect(IntRect(currentframeforcar * 501, 501, 501, 501));
					smoke.setTextureRect(IntRect(currentframeforcar * 1000, 1000, 1000, 1000));
					ismoving = true;
				}
			}
		}

		if (ismoving && running.getStatus() != Sound::Playing)
			running.play();

		if (!ismoving)
		{
			smoke.setTextureRect(IntRect(10000, 10000, 1000, 1000));
			running.pause();
		}

		smoke.setPosition(car.getPosition().x, car.getPosition().y);

		/////////////////////////////////////////
		for (int i = 0; i < 10; i++)
		{

			if (car.getGlobalBounds().intersects(levelbutton[i].getGlobalBounds()))
			{
				if (level[i].getScale().x < 0.5) {
					level[i].setScale(level[i].getScale().x + 0.0075, level[i].getScale().y + 0.0075);

					if (i == 6)
						level[i].setPosition(level[i].getPosition().x, level[i].getPosition().y - 3);
					else
						level[i].setPosition(level[i].getPosition().x, level[i].getPosition().y - 5);
				}
				if (Keyboard::isKeyPressed(Keyboard::Enter) && i <= progress && !drawls) {
					drawls = 1;
					levelenter.play();
					clock.restart();
					ls.setPosition(view.getCenter().x, view.getCenter().y);
					move = false;
					car_x = car.getPosition().x;
					car_y = car.getPosition().y;
					currentframeforls = 0;
					pagenum_1 = i;
				}
				continue;
			}
			else if (!car.getGlobalBounds().intersects(levelbutton[i].getGlobalBounds()))
			{

				if (level[i].getScale().x > 0) {
					level[i].setScale(level[i].getScale().x - 0.0075, level[i].getScale().y - 0.0075);
					if (i == 6)
						level[i].setPosition(level[i].getPosition().x, level[i].getPosition().y + 3);
					else
						level[i].setPosition(level[i].getPosition().x, level[i].getPosition().y + 5);
				}
				else {
					level[i].setScale(0, 0);

				}

			}
		}

		if (car.getPosition().y < 125) {
			car.move(0, 2.5);
		}
		else if (car.getPosition().y > 5400 - 125) {
			car.move(0, -2.5);
		}
		if (car.getPosition().x < 125) {
			car.move(2.5, 0);
		}
		else if (car.getPosition().x > 9600 - 125) {
			car.move(-2.5, 0);
		}


		for (int i = 0; i < 9; i++)
		{
			if (car.getGlobalBounds().intersects(rec[i].getGlobalBounds())) {
				if (car.getPosition().y < rec[i].getPosition().y)
				{
					if (Keyboard::isKeyPressed(Keyboard::Down))
					{
						car.move(0, -speed);

					}

				}
				else if (car.getPosition().y > rec[i].getPosition().y + rec[i].getGlobalBounds().height) {

					if (Keyboard::isKeyPressed(Keyboard::Up))
					{
						car.move(0, speed);

					}
				}
				else {
					if (Keyboard::isKeyPressed(Keyboard::Left))
					{
						car.move(speed, 0);

					}
					if (Keyboard::isKeyPressed(Keyboard::Right))
					{
						car.move(-speed, 0);
					}
				}
				break;
			}

		}

		if (car.getPosition().x < 5550 && car.getPosition().y < 3000 && car.getPosition().y > 1580) {
			if (car.getPosition().y < 2350 + (710 * sin(((2 * 3.14) / 5550) * car.getPosition().x))) {
				if (Keyboard::isKeyPressed(Keyboard::Up))
				{
					car.move(0, speed);

				}
				if (Keyboard::isKeyPressed(Keyboard::Left))
				{
					car.move(speed, 0);

				}
				if (Keyboard::isKeyPressed(Keyboard::Right))
				{
					car.move(-speed, 0);
				}
				if (Keyboard::isKeyPressed(Keyboard::Down))
				{
					car.move(0, -speed);

				}
			}
		}

		if (car.getPosition().y < 1450) {

			if (car.getPosition().x < 6475 && car.getPosition().x>6000) {

				if (Keyboard::isKeyPressed(Keyboard::Up))
				{
					car.move(0, speed);

				}

				if (Keyboard::isKeyPressed(Keyboard::Left))
				{
					car.move(speed, 0);

				}


				if (Keyboard::isKeyPressed(Keyboard::Right))
				{
					car.move(-speed, 0);
				}


			}

		}





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

		view.setCenter(car.getPosition().x, car.getPosition().y);
		if (!car.getGlobalBounds().intersects(border.getGlobalBounds()))
		{
			if (car.getPosition().y < 675 && car.getPosition().x < 1200) {
				view.setCenter(1200, 675);
			}
			else if (car.getPosition().y > 5400 - 675 && car.getPosition().x < 1200) {
				view.setCenter(1200, 5400 - 675);
			}
			else if (car.getPosition().x > 9600 - 1200 && car.getPosition().y > 5400 - 675) {
				view.setCenter(9600 - 1200, 5400 - 675);
			}
			else if (car.getPosition().x > 9600 - 1200 && car.getPosition().y < 675) {
				view.setCenter(9600 - 1200, 675);
			}
			else if (car.getPosition().y < 675) {
				view.setCenter(car.getPosition().x, 675);
			}
			else if (car.getPosition().y > 5400 - 675) {
				view.setCenter(car.getPosition().x, 5400 - 675);
			}
			else if (car.getPosition().x < 1200) {
				view.setCenter(1200, car.getPosition().y);
			}
			else if (car.getPosition().x > 9600 - 1200) {
				view.setCenter(9600 - 1200, car.getPosition().y);
			}
		}

		view.setSize(2400, 1350);



		//////////////////////////////////////////

		if (Keyboard::isKeyPressed(Keyboard::Escape)) {
			pagenum = 1000;
			window.setView(menu);
			return;
		}


		///////////////////////////////////////////////////////////////////////



		//EVENT HAS TO BE ABOVE DRAW AFTER EVERYTHING
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				window.close();
			}

		}
		////////////////////////////////////////////////////////////////////////////////


		window.setView(view);



		window.clear(Color::White); //adding background color 

		//DRAWING EVERYTHING



		window.draw(map);
		window.draw(car);
		window.draw(smoke);
		window.draw(mountain);


		for (int i = 0; i < 10; i++)
		{
			window.draw(level[i]);
		}


		if (drawls) {
			if (ls.getScale().x < 1.62) {
				ls.setScale(ls.getScale().x + 0.02, ls.getScale().x + 0.02);
			}
			window.draw(ls);
			ls.setTextureRect(IntRect(0, currentframeforls * 819, 1456, 819));
			if (clock.getElapsedTime().asSeconds() > rand_sec)
			{
				pagenum = pagenum_1 + 1;
				return;
			}
		}

		window.display();

	}
}