#pragma once
#include "Initialization.h"

struct Player      //add sprites of players here !!!

{
	Sprite pico;

	float currentframe=1;

	float move_x=0, move_y=0;

	FloatRect rect;

	bool onground=false;

	bool ismoving = false;

	bool ability = false;

	bool jump = false;

	int LastKeyPressed = 0;


	void sp(Texture& thief) {
		pico.setTexture(thief);
		move_x = 0;
		move_y = 0;
		currentframe = 0;
		LastKeyPressed = 1;
	}


	void update(float time, float left_wall, float right_wall,bool pico_animation,bool astro = false) {
		rect.left += move_x * time;
		rect.top += move_y * time;
		
		ismoving = false;

		if (rect.left > right_wall) {
			rect.left = right_wall;
		}
		if (rect.left < left_wall) {
			rect.left = left_wall;
		}
		if (pico_animation == true) {
			currentframe += 0.009 * time;
			if (currentframe > 8) {
				currentframe -= 8;
			}
			

			if (helmeton && astro)
			{
				if (move_x > 0 ) {
					pico.setTextureRect(IntRect(11 + (int(currentframe) * 45), 30, 45, 63));
					ismoving = true;
				}

				if (move_x < 0 ) {
					pico.setTextureRect(IntRect(11 + (int(currentframe) * 45) + 45, 30, -45, 63));
					ismoving = true;
				}
			}
			else
			{
				if (move_x > 0 && !move_y > 0) {
					pico.setTextureRect(IntRect(11 + (int(currentframe) * 45), 30, 45, 63));
					ismoving = true;
				}

				if (move_x < 0 && !move_y > 0) {
					pico.setTextureRect(IntRect(11 + (int(currentframe) * 45) + 45, 30, -45, 63));
					ismoving = true;
				}
			}

			

		}
		if (move_x != 0)
			ismoving = true;

		pico.setPosition(rect.left, rect.top);
		move_x = 0;
	}
	void start(int x, int y) {
	rect.left = x;
	rect.top = y;
	}

};
