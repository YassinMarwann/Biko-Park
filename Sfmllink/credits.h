#pragma once
#include "Initialization.h"

void credits(RenderWindow& window, int& pagenum) {
	
	View menu = window.getDefaultView();
	View view = window.getDefaultView();
	
	Texture Credits;
	Credits.loadFromFile("../Assets/Texture/Credits.png");

	Sprite credits(Credits);
	credits.setPosition(0, 1080);

	Clock credit;

	while (window.isOpen()) {

		if(credit.getElapsedTime().asSeconds() > 1)
		credits.move(0, -1.35);

		if (credit.getElapsedTime().asSeconds() > 26.5) {
			pagenum = 1000;
			window.setView(menu);
			/*return;*/
			window.close();
		}

		view.setSize(1920, 1080);

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



		window.clear(Color(250, 200, 152)); //adding background color 

		//DRAWING EVERYTHING


		window.draw(credits);
		

		window.display();

	}
}