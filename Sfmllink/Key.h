#pragma once
#include "Initialization.h"
#include "player struct.h"

bool Key(RenderWindow& window, Player& Thief, Player& Scientist, Player& Builder, Player& Astronaut, Sprite& key, Sprite& door, Texture& door2, int& pagenum,Sprite admin) {



	bool isinvisible[4] = { false, false, false, false };




	/////////////////////////////////////////////////key///////////////////////////////////////////////////////////////
	{

		if (whoisTouching == 0) {
			if (Thief.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
			{
				whoisTouching = 1;
			}
			if (Scientist.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
			{
				whoisTouching = 2;
			}
			if (Builder.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
			{
				whoisTouching = 3;
			}
			if (Astronaut.pico.getGlobalBounds().intersects(key.getGlobalBounds()))
			{
				whoisTouching = 4;
			}
		}
		if (admin.getGlobalBounds().intersects(key.getGlobalBounds())) {
			whoisTouching = 5;
		}



		if (whoisTouching == 1)
		{
			key.setScale(0.05, 0.05);
			key.setPosition(Thief.pico.getPosition().x + 12, Thief.pico.getPosition().y + 25);
		}

		else if (whoisTouching == 2)
		{
			key.setScale(0.05, 0.05);
			key.setPosition(Scientist.pico.getPosition().x + 12, Scientist.pico.getPosition().y + 25);
		}

		else if (whoisTouching == 3)
		{
			key.setScale(0.05, 0.05);
			key.setPosition(Builder.pico.getPosition().x + 12, Builder.pico.getPosition().y + 25);
		}

		else if (whoisTouching == 4)
		{
			if (helmeton == false) {
				key.setScale(0.05, 0.05);
				key.setPosition(Astronaut.pico.getPosition().x + 12, Astronaut.pico.getPosition().y + 25);
			}
			else {
				key.setScale(0.05, -0.05);
				key.setPosition(Astronaut.pico.getPosition().x + 12, Astronaut.pico.getPosition().y - 25);
			}

		}
		else if (whoisTouching == 5) {
			
			key.setScale(0.05, 0.05);
			key.setPosition(admin.getPosition().x +5, admin.getPosition().y + 10);
		}

		////////////////////////////////////////////////
		//UNLOCKING THE DOOR
		if (key.getGlobalBounds().intersects(door.getGlobalBounds()))
		{
			door.setTexture(door2);
			key.setColor(Color::Transparent);
			isunlocked = true;
			dooropen = true;

		}

		if (isunlocked) {

			if (Thief.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
			{
				Thief.pico.setColor(Color::Transparent);
				isinvisible[0] = true;
			}
			else {
				Thief.pico.setColor(Color::White);
				isinvisible[0] = false;
			}

			if (Scientist.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
			{
				Scientist.pico.setColor(Color::Transparent);
				isinvisible[1] = true;
			}
			else {
				Scientist.pico.setColor(Color::White);
				isinvisible[1] = false;
			}

			if (Builder.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
			{
				Builder.pico.setColor(Color::Transparent);
				isinvisible[2] = true;
			}
			else {
				Builder.pico.setColor(Color::White);
				isinvisible[2] = false;
			}

			if (Astronaut.pico.getGlobalBounds().intersects(door.getGlobalBounds()))
			{
				Astronaut.pico.setColor(Color::Transparent);
				isinvisible[3] = true;
			}
			else {
				Astronaut.pico.setColor(Color::White);
				isinvisible[3] = false;
			}

			int c = 0;
			for (int i = 0; i < 4; i++)
			{

				if (isinvisible[i]) {
					c++;
				}
			}

			if (admin.getGlobalBounds().intersects(door.getGlobalBounds()) && whoisTouching == 5) {
				return 1;
			}
			if (admin.getGlobalBounds().intersects(door.getGlobalBounds()) && pagenum == 4)
			{
				return 1;
			}
			if (admin.getGlobalBounds().intersects(door.getGlobalBounds()) && pagenum == 10)
			{
				return 1;
			}

			if (c == 4)
			{
				return 1;
			}
			if (c == 1 && pagenum == 9)
			{
				return 1;
			}
		}
	}

	return 0;
}