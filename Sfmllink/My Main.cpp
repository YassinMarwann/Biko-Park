#include "Menu.h"
#include "Levels.h"
#include "Paused.h"
#include "initialization.h"
#include "player struct.h"
#include "Levels header.h"
#include "Storymode.h"
#include "difficulty.h"
#include "Controls.h"
#include "map.h"



//page number			place
//   1000			    Main Menu
//   -1				    Close
//    0                 Controls
//   100                Levels
//   101                storymode
//	  1                 level 1
//	  2                 level 2	
//	  3                 level 3
//	  4                 level 4	
//	  5                 level 5
//	  6                 level 6	
//	  7                 level 7
//	  8                 level 8	
//	  9                 level 9
//	  10                level 10




int main()
{
	RenderWindow window(VideoMode(1920, 1080), "BIKO BARK", Style::Fullscreen);
	window.setFramerateLimit(240);
	View view = window.getDefaultView();
	Menu menu(1920, 1080);
	Storymode storymode(1920, 1080);
	Levels levels(1920, 1080);
	Controls controls(1920, 1080);
	difficulty diffi(1920, 1080);
	Texture mainmenubg;
	mainmenubg.loadFromFile("../Assets/Texture/MainMenu.png");
	Texture Levelsbg;
	Levelsbg.loadFromFile("../Assets/Texture/LevelsMenu.png");
	Texture controlsbg;
	controlsbg.loadFromFile("../Assets/Texture/ControlsMenu.png");
	Sprite bg;


	RectangleShape rectan1(Vector2f(550, 7));
	rectan1.setFillColor(Color(247, 221, 206));
	rectan1.setPosition(600, 713);

	RectangleShape rectan2(Vector2f(550, 7));
	rectan2.setFillColor(Color(247, 221, 206));
	rectan2.setPosition(600, 647);

	Music next;
	next.openFromFile("../Assets/Sounds/menuswitch.mp3");

	Music menuenter;
	menuenter.openFromFile("../Assets/Sounds/menuenter.mp3");

	Music levelenter;
	levelenter.openFromFile("../Assets/Sounds/levelenter.mp3");


	Music mainmenumusic;
	mainmenumusic.openFromFile("../Assets/Sounds/mainmenumusic.mp3");
	mainmenumusic.setVolume(30);

	Music levelmusic;
	levelmusic.openFromFile("../Assets/Sounds/levelsmusic.mp3");
	levelmusic.setVolume(20);

	Music level10song;
	level10song.openFromFile("../Assets/Sounds/level10 song.mp3");

	Music level7song;
	level7song.openFromFile("../Assets/Sounds/level7 song.mp3");
	level7song.setVolume(50);

	Music Mapmusic;
	Mapmusic.openFromFile("../Assets/Sounds/mapmusic.mp3");

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	Texture ps;
	ps.loadFromFile("../Assets/Texture/ps_controller.png");

	Texture xbox;
	xbox.loadFromFile("../Assets/Texture/xbox_controller.png");

	Texture builder_ps;
	builder_ps.loadFromFile("../Assets/Texture/Builder_ps.png");

	Texture builder_xbox;
	builder_xbox.loadFromFile("../Assets/Texture/Builder_xbox.png");

	Texture builder_keyboard;
	builder_keyboard.loadFromFile("../Assets/Texture/Builder_keyboard.png");

	Texture thief_keyboard;
	thief_keyboard.loadFromFile("../Assets/Texture/Thief_keyboard.png");

	Sprite thief_controls(thief_keyboard);
	thief_controls.setPosition(Vector2f((1920 / 4 - 50), 1080 / 4 - 100));

	Sprite scientist_controls(ps);
	scientist_controls.setPosition(Vector2f((2.5 * 1920 / 4 + 105), 2.5 * 1080 / 4 - 100));

	Sprite builder_controls(builder_keyboard);
	builder_controls.setPosition(Vector2f((2.5 * 1920 / 4 + 95), 1080 / 4 - 100));

	Sprite astronaut_controls(xbox);
	astronaut_controls.setPosition(Vector2f((1920 / 4 - 40), 2.5 * 1080 / 4 - 100));

	Texture Admin;
	Admin.loadFromFile("../Assets/Texture/Splash Screen.png");

	Sprite admin;
	admin.setTexture(Admin);
	admin.setOrigin(1920 / 2, 1080 / 2);
	admin.setScale(1, 1);
	admin.setPosition(1920 / 2, 1080 / 2);
	float i = 0;
	admin.setColor(Color(225, 225, 225, i));



	Clock clock5;
	Clock loading;

	Texture loading1;
	loading1.loadFromFile("../Assets/Texture/loading screen.png");

	Sprite ls;
	ls.setTexture(loading1);
	ls.setOrigin(1920 / 2, 1080 / 2);
	ls.setPosition(1920 / 2, 1080 / 2);
	ls.setScale(0, 0);


	Texture dif_bg[3];
	dif_bg[0].loadFromFile("../Assets/Texture/Easy Difficulty.png");
	dif_bg[1].loadFromFile("../Assets/Texture/Medium Difficulty.png");
	dif_bg[2].loadFromFile("../Assets/Texture/Hard Difficulty.png");

	Sprite Dif_bg;
	Dif_bg.setTexture(dif_bg[0]);


	int rand_sec = 3 + rand() % 8;
	bool draw = false;



	while (true)
	{
		mainmenumusic.play();

		while (clock5.getElapsedTime().asSeconds() < 5.1)
		{
			window.clear(Color(255, 255, 255));
			window.draw(admin);
			window.display();

			if (i < 255) {
				admin.setColor(Color(255, 255, 255, i = i + 0.75));
			}
			Event event;
			while (window.pollEvent(event))
			{

				if (event.type == Event::Closed)
				{
					window.close();
					break;
				}
			}
		}

		if (pagenum == 1000)
		{
			bg.setTexture(mainmenubg);
			levelmusic.stop();
			level10song.stop();
			level7song.stop();
			while (window.isOpen())
			{

				Event event;
				while (window.pollEvent(event))
				{

					if (event.type == Event::Closed)
					{
						window.close();
						break;
					}

					if (event.type == Event::KeyPressed)
					{
						if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::Up)) {
							menu.MoveUp();
							next.play();
						}
						if ((event.key.code == Keyboard::Right) || (event.key.code == Keyboard::Down)) {
							menu.MoveDown();
							next.play();
						}
						if (event.key.code == Keyboard::Enter) {
							if (menu.pressed() == 0) {
								pagenum = 101;
								menuenter.play();
							}
							if (menu.pressed() == 1) {
								pagenum = 0;
								menuenter.play();
							}
							if (menu.pressed() == 2) {
								pagenum = -1;
							}
						}
					}

				}
				window.clear();

				if (pagenum != 1000) {
					break;
				}

				window.draw(bg);
				menu.draw(window);

				window.display();
			}



		}

		

		if (pagenum == 0) {

			if (gotomenu) {
				pagenum = 1000;
				gotomenu = false;
			}
			bg.setTexture(controlsbg);

			while (window.isOpen())
			{
				Event event;
				while (window.pollEvent(event))
				{
					if (event.type == Event::Closed)
					{
						window.close();
						mainmenumusic.stop();
						levelmusic.stop();
						break;
					}

					if (event.type == Event::KeyPressed)
					{
						if (scroll)
						{
							if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::Up)) {
								controls.MoveUp();
								next.play();
							}
							if ((event.key.code == Keyboard::Right) || (event.key.code == Keyboard::Down)) {
								controls.MoveDown();
								next.play();
							}
						}
						if (event.key.code == Keyboard::Escape) {
							pagenum = 1000;
						}
						if (Keyboard::isKeyPressed(Keyboard::LControl))
						{
							if (controls.pressed() == 0) {
								if ((event.key.code == Keyboard::Right))
								{
									if (thief_controls.getTexture() == &thief_keyboard)
									{
										thief_controls.setTexture(ps);
										control[0] = 1;
									}
									else if (thief_controls.getTexture() == &ps)
									{
										thief_controls.setTexture(xbox);
										control[0] = 2;
									}
									else if (thief_controls.getTexture() == &xbox)
									{
										thief_controls.setTexture(thief_keyboard);
										control[0] = 0;
									}
								}
								if ((event.key.code == Keyboard::Left))
								{
									if (thief_controls.getTexture() == &ps)
									{
										thief_controls.setTexture(thief_keyboard);
										control[0] = 0;
									}
									else if (thief_controls.getTexture() == &xbox)
									{
										thief_controls.setTexture(ps);
										control[0] = 1;
									}
									else if (thief_controls.getTexture() == &thief_keyboard)
									{
										thief_controls.setTexture(xbox);
										control[0] = 2;
									}
								}
							}

							else if (controls.pressed() == 1)
							{
								if ((event.key.code == Keyboard::Right))
								{

									if (builder_controls.getTexture() == &builder_keyboard)
									{
										builder_controls.setTexture(ps);
										control[2] = 1;
									}
									else if (builder_controls.getTexture() == &ps)
									{
										builder_controls.setTexture(xbox);
										control[2] = 2;
									}
									else if (builder_controls.getTexture() == &xbox)
									{
										builder_controls.setTexture(builder_keyboard);
										control[2] = 0;
									}
								}
								if ((event.key.code == Keyboard::Left))
								{
									if (builder_controls.getTexture() == &ps)
									{
										builder_controls.setTexture(builder_keyboard);
										control[2] = 0;
									}
									else if (builder_controls.getTexture() == &xbox)
									{
										builder_controls.setTexture(ps);
										control[2] = 1;
									}
									else if (builder_controls.getTexture() == &builder_keyboard)
									{
										builder_controls.setTexture(xbox);
										control[2] = 2;
									}
								}
							}

							else if (controls.pressed() == 2)
							{
								if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::Right))
								{
									if (astronaut_controls.getTexture() == &ps)
									{
										astronaut_controls.setTexture(xbox);
										control[3] = 2;
									}
									else if (astronaut_controls.getTexture() == &xbox)
									{
										astronaut_controls.setTexture(ps);
										control[3] = 1;
									}
								}
							}

							else if (controls.pressed() == 3)
							{
								if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::Right))
								{
									if (scientist_controls.getTexture() == &ps)
									{
										scientist_controls.setTexture(xbox);
										control[1] = 2;

									}
									else if (scientist_controls.getTexture() == &xbox)
									{
										scientist_controls.setTexture(ps);
										control[1] = 1;
									}
								}
							}
							scroll = false;
						}
						else {
							scroll = true;
						}
					}

				}
				window.clear();

				if (pagenum != 0) {
					mainmenumusic.pause();
					levelmusic.stop();
					break;
				}

				window.draw(bg);
				window.draw(thief_controls);
				window.draw(scientist_controls);
				window.draw(builder_controls);
				window.draw(astronaut_controls);
				controls.draw(window);
				window.display();
			}
		}

		if (pagenum == 101) {
			draw = false;
			ls.setScale(0, 0);

			bg.setTexture(mainmenubg);

			while (window.isOpen())
			{
				Event event;
				while (window.pollEvent(event) && !draw)
				{

					if (event.type == Event::Closed)
					{
						window.close();
						mainmenumusic.pause();
						levelmusic.stop();
						break;
					}

					if (event.type == Event::KeyPressed)
					{
						if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::Up)) {
							storymode.MoveUp();
							next.play();
						}
						if ((event.key.code == Keyboard::Right) || (event.key.code == Keyboard::Down)) {
							storymode.MoveDown();
							next.play();
						}
						if (event.key.code == Keyboard::Escape) {
							pagenum = 1000;
						}
						if (event.key.code == Keyboard::Enter) {
							if (storymode.pressed() == 0)
							{
								pagenum = 105;
								progress = 0;
								levelenter.play();
							}

							if (storymode.pressed() == 1) {
								ifstream inputFile("progress.txt");

								if (inputFile.peek() != ifstream::traits_type::eof()) {
									inputFile >> progress;

									// Check if the reading was successful
									if (inputFile.fail()) {
										cout << "Failed to read the number from the file." << endl;
										inputFile.close();
									}
									levelenter.play();
								}

								// Read and ignore the first line
								if (!getline(inputFile, difficult)) {

								}

								// Read the second line
								if (!getline(inputFile, difficult)) {

								}
								if (difficult == "easy") {
									easy = true;
								}
								else if (difficult == "medium") {
									medium = true;
								}
								else if (difficult == "hard") {
									hard = true;
								}
								loading.restart();
								draw = true;
							}
							if (storymode.pressed() == 2) {
								pagenum = 100;
								freeplay = true;
								levelenter.play();
							}

						}
					}

				}
				window.clear();

				if (pagenum != 101) {
					break;
				}

				window.draw(bg);
				storymode.draw(window);
				if (draw) {
					if (ls.getScale().x < 1) {
						ls.setScale(ls.getScale().x + 0.02, ls.getScale().x + 0.02);
					}
					window.draw(ls);
					if (loading.getElapsedTime().asSeconds() > rand_sec)
					{
						pagenum = 102;
						break;
					}
				}
				window.display();

			}
		}

		if (pagenum == 100) {

			bg.setTexture(Levelsbg);

			while (window.isOpen())
			{
				Event event;
				while (window.pollEvent(event))
				{
					if (event.type == Event::Closed)
					{
						window.close();
						mainmenumusic.stop();
						levelmusic.stop();
						break;
					}

					if (event.type == Event::KeyPressed)
					{
						if (event.key.code == Keyboard::Left) {
							levels.MoveLeft();
							next.play();
						}
						if (event.key.code == Keyboard::Right) {
							levels.MoveRight();
							next.play();
						}
						if (event.key.code == Keyboard::Escape) {
							pagenum = 1000;
							freeplay = false;
						}
						if (event.key.code == Keyboard::Enter) {
							if (levels.pressed() == 0) {
								pagenum = 1;
								levelenter.play();
							}
							if (levels.pressed() == 1) {
								pagenum = 2;
								levelenter.play();
							}
							if (levels.pressed() == 2) {
								pagenum = 3;
								levelenter.play();
							}
							if (levels.pressed() == 3) {
								pagenum = 4;
								levelenter.play();
							}
							if (levels.pressed() == 4) {
								pagenum = 5;
								levelenter.play();
							}
							if (levels.pressed() == 5) {
								pagenum = 6;
								levelenter.play();
							}
							if (levels.pressed() == 6) {
								pagenum = 7;
								levelenter.play();
							}
							if (levels.pressed() == 7) {
								pagenum = 8;
								levelenter.play();
							}
							if (levels.pressed() == 8) {
								pagenum = 9;
								levelenter.play();
							}
							if (levels.pressed() == 9) {
								pagenum = 10;
								levelenter.play();
							}
						}
					}

				}
				window.clear();

				if (pagenum != 100) {
					mainmenumusic.pause();
					levelmusic.stop();
					break;
				}

				window.draw(bg);
				levels.draw(window);
				window.draw(rectan1);
				window.draw(rectan2);
				window.display();
			}
		}

		if (pagenum == 105) {
			draw = false;
			ls.setScale(0, 0);

			bg.setTexture(mainmenubg);

			while (window.isOpen())
			{

				Event event;
				while (window.pollEvent(event))
				{

					if (event.type == Event::Closed)
					{
						window.close();
						mainmenumusic.pause();
						levelmusic.stop();
						break;
					}

					if (event.type == Event::KeyPressed && !draw)
					{
						if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::Up)) {
							diffi.MoveUp();
							next.play();
						}
						if ((event.key.code == Keyboard::Right) || (event.key.code == Keyboard::Down)) {
							diffi.MoveDown();
							next.play();
						}
						if (event.key.code == Keyboard::Escape) {
							easy = false;
							medium = false;
							hard = false;
							pagenum = 1000;
						}
						if (event.key.code == Keyboard::Enter) {
							if (diffi.pressed() == 0) {
								easy = true;

								ofstream outputFile("progress.txt");
								if (!outputFile.is_open()) {
									cout << "Failed to open the file for writing." << endl;
									return 1;
								}

								// Write the number back to the file
								outputFile << 0 << endl << 'easy' << endl;
								outputFile.close();
								difficult = "easy";

								loading.restart();
								draw = true;

							}

							if (diffi.pressed() == 1) {
								medium = true;

								ofstream outputFile("progress.txt");
								if (!outputFile.is_open()) {
									cout << "Failed to open the file for writing." << endl;
									return 1;
								}

								// Write the number back to the file
								outputFile << 0 << endl << "medium" << endl;
								outputFile.close();
								difficult = "medium";

								loading.restart();
								draw = true;
							}

							if (diffi.pressed() == 2) {
								hard = true;

								ofstream outputFile("progress.txt");
								if (!outputFile.is_open()) {
									cout << "Failed to open the file for writing." << endl;
									return 1;
								}

								// Write the number back to the file
								outputFile << 0 << endl << "hard" << endl;
								outputFile.close();
								difficult = "hard";

								loading.restart();
								draw = true;
							}

						}
					}

				}
				for (int i = 0; i < 3; i++) {
					if (diffi.pressed() == i)
					{
						Dif_bg.setTexture(dif_bg[i]);
					}
				}
				window.clear();

				if (pagenum != 105) {
					mainmenumusic.pause();
					levelmusic.stop();
					break;
				}

				window.draw(Dif_bg);
				diffi.draw(window);
				if (draw) {
					if (ls.getScale().x < 1) {
						ls.setScale(ls.getScale().x + 0.02, ls.getScale().x + 0.02);
					}
					window.draw(ls);
					if (loading.getElapsedTime().asSeconds() > rand_sec)
					{
						pagenum = 102;
						break;
					}
				}
				window.display();
			}
		}
		if (freeplay) {
			hard = true;
			fp = true;
		}

		if (pagenum == 102) {
			mainmenumusic.stop();
			levelmusic.stop();
			Mapmusic.play();
			maps(window, pagenum);
			window.display();
		}
		if (pagenum != 102) {
			Mapmusic.stop();
		}

		if (pagenum == 1) {
			mainmenumusic.stop();
			levelmusic.play();
			Level1(window, pagenum);
			window.display();
		}

		if (pagenum == 2) {
			mainmenumusic.stop();
			levelmusic.play();
			Level2(window, pagenum);
			window.display();
		}

		if (pagenum == 3) {
			mainmenumusic.stop();
			levelmusic.play();
			Level3(window, pagenum);
			window.display();
		}

		if (pagenum == 4) {
			mainmenumusic.stop();
			levelmusic.play();
			Level4(window, pagenum);
			window.display();
		}

		if (pagenum == 5) {
			mainmenumusic.stop();
			levelmusic.play();
			Level5(window, pagenum);
			window.display();
		}

		if (pagenum == 6) {
			mainmenumusic.stop();
			levelmusic.play();
			Level6(window, pagenum);
			window.display();
		}

		if (pagenum == 7) {
			mainmenumusic.stop();
			levelmusic.stop();
			level7song.play();
			Level7(window, pagenum);
			window.display();
		}

		if (pagenum == 8) {
			mainmenumusic.stop();
			levelmusic.play();
			level7song.stop();
			Level8(window, pagenum);
			window.display();
		}

		if (pagenum == 9) {
			mainmenumusic.stop();
			levelmusic.play();
			Level9(window, pagenum);
			window.display();
		}

		if (pagenum == 10) {
			mainmenumusic.stop();
			levelmusic.stop();
			level10song.play();
			Level10(window, pagenum);
			window.display();
		}

		if (pagenum == -1) {
			window.close();
			break;
		}
	}

	return 0;
}