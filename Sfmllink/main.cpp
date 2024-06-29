//#include "Menu.h"
//#include "Levels.h"
//#include "initialization.h"
//#include "player struct.h"
//#include "Levels header.h"
//
//
//
////page number			place
////   1000			    Main Menu
////   -1				    Close
////    0                 Controls
////    1                 Levels
////	  2                 level 2
////	  
//
//
//
//int main()
//{
//	RenderWindow window(VideoMode(1920, 1080), "BIKO BARK");
//	window.setFramerateLimit(240);
//	View view = window.getDefaultView();
//	Menu menu(1920, 1080);
//	Levels levels(1920, 1080);
//	Texture mainmenubg;
//	mainmenubg.loadFromFile("../Assets/Texture/MainMenu.png");
//	Texture Levelsbg;
//	Levelsbg.loadFromFile("../Assets/Texture/LevelsMenu.png");
//	Sprite bg;
//
//
//
//
//
//	Music mainmenumusic;
//	mainmenumusic.openFromFile("../Assets/Sounds/mainmenumusic.mp3");
//
//	Music levelmusic;
//	levelmusic.openFromFile("../Assets/Sounds/musicgame.mp3");
//
//	while (true)
//	{
//
//		mainmenumusic.play();
//
//		if (pagenum == 1000)
//		{
//			bg.setTexture(mainmenubg);
//
//			while (window.isOpen())
//			{
//
//				Event event;
//				while (window.pollEvent(event))
//				{
//
//					if (event.type == Event::Closed)
//					{
//						window.close();
//						break;
//					}
//
//					if (event.type == Event::KeyPressed)
//					{
//						if ((event.key.code == Keyboard::Left) || (event.key.code == Keyboard::Up)) {
//							menu.MoveUp();
//						}
//						if ((event.key.code == Keyboard::Right) || (event.key.code == Keyboard::Down)) {
//							menu.MoveDown();
//						}
//						if (event.key.code == Keyboard::Enter) {
//							if (menu.pressed() == 0) {
//								pagenum = 1;
//							}
//							if (menu.pressed() == 1) {
//								pagenum = 1;
//							}
//							if (menu.pressed() == 2) {
//								pagenum = -1;
//							}
//						}
//					}
//
//				}
//				window.clear();
//
//				if (pagenum != 1000) {
//					break;
//				}
//
//				window.draw(bg);
//				menu.draw(window);
//
//				window.display();
//			}
//
//
//
//
//			if (pagenum == -1) {
//				window.close();
//				break;
//			}
//
//
//
//			if (pagenum == 1) {
//
//				bg.setTexture(Levelsbg);
//
//				while (window.isOpen())
//				{
//					Event event;
//					while (window.pollEvent(event))
//					{
//						if (event.type == Event::Closed)
//						{
//							window.close();
//							mainmenumusic.pause();
//							levelmusic.pause();
//							break;
//						}
//
//						if (event.type == Event::KeyPressed)
//						{
//							if (event.key.code == Keyboard::Left) {
//								levels.MoveLeft();
//							}
//							if (event.key.code == Keyboard::Right) {
//								levels.MoveRight();
//							}
//							if (event.key.code == Keyboard::Escape) {
//								pagenum = 1000;
//							}
//							if (event.key.code == Keyboard::Enter) {
//								if (levels.pressed() == 0) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level1(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 1) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level2(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 2) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level3(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 3) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level4(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 4) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level5(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 5) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level6(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 6) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level7(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 7) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level8(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 8) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level9(window, pagenum);
//									window.display();
//								}
//								if (levels.pressed() == 9) {
//									mainmenumusic.pause();
//									levelmusic.play();
//									Level10(window, pagenum);
//									window.display();
//								}
//							}
//						}
//
//					}
//					window.clear();
//
//					if (pagenum != 1) {
//						mainmenumusic.pause();
//						levelmusic.pause();
//						break;
//					}
//
//					window.draw(bg);
//					levels.draw(window);
//					window.display();
//				}
//			}
//
//
//		}
//		if (pagenum == 2) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level2(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 3) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level3(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 4) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level4(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 5) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level5(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 6) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level6(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 6) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level6(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 7) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level7(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 8) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level8(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 9) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level9(window, pagenum);
//			window.display();
//		}
//		if (pagenum == 10) {
//			mainmenumusic.pause();
//			levelmusic.play();
//			Level10(window, pagenum);
//			window.display();
//		}
//
//	}
//	return 0;
//}
//
//
//
//
//
//
//
//
//
