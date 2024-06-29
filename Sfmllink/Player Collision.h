#pragma once
#include "Initialization.h"
#include "player struct.h"



void player_collision(RenderWindow& window, Player& Thief, Player& Scientist, Player& Builder, Player& Astronaut, RectangleShape& top1, RectangleShape& top2, RectangleShape& top3, RectangleShape& top4, RectangleShape& left1, RectangleShape& left2, RectangleShape& left3, RectangleShape& left4, RectangleShape& right1, RectangleShape& right2, RectangleShape& right3, RectangleShape& right4 ,RectangleShape& down1, RectangleShape& down2, RectangleShape& down3, RectangleShape& down4) {


	//cases sha8ala (when first is under second)
	a_b = 0;
	a_s = 0;
	t_s = 0;
	t_b = 0;
	t_a = 0;
	s_b = 0;
	s_t = 0;
	s_a = 0;
	b_t = 0;
	b_s = 0;
	b_a = 0;
	a_t = 0;





	top1.setPosition(Thief.rect.left+6 , Thief.rect.top);
	top2.setPosition(Builder.rect.left+6 , Builder.rect.top);
	top3.setPosition(Scientist.rect.left+6, Scientist.rect.top);
	top4.setPosition(Astronaut.rect.left +6, Astronaut.rect.top);

	down1.setPosition(Thief.rect.left , Thief.rect.top+47);
	down2.setPosition(Builder.rect.left , Builder.rect.top+47);
	down3.setPosition(Scientist.rect.left , Scientist.rect.top+47);
	down4.setPosition(Astronaut.rect.left , Astronaut.rect.top+47);

	left1.setPosition(Thief.rect.left, Thief.rect.top + 0);
	left2.setPosition(Builder.rect.left, Builder.rect.top + 0);
	left3.setPosition(Scientist.rect.left, Scientist.rect.top + 0);
	left4.setPosition(Astronaut.rect.left, Astronaut.rect.top + 0);

	right1.setPosition(Thief.rect.left + Thief.pico.getGlobalBounds().width - 6, Thief.rect.top + 0);
	right2.setPosition(Builder.rect.left + Builder.pico.getGlobalBounds().width - 6, Builder.rect.top + 0);
	right3.setPosition(Scientist.rect.left + Scientist.pico.getGlobalBounds().width - 6, Scientist.rect.top + 0);
	right4.setPosition(Astronaut.rect.left + Astronaut.pico.getGlobalBounds().width - 6, Astronaut.rect.top + 0);

	int num1 = 37;
	int num2 = 7.85;

	int speed_down = 0.9999;

	///////////////////// thief and builder

	if (down2.getGlobalBounds().intersects(top1.getGlobalBounds()))
	{
		Thief.move_y = speed_down;
		Builder.move_y = 0;
		t_b = 1;
		Builder.onground = 1;
		if (pagenum == 8)
			dead[2] = true;
	}
	if (Builder.ismoving) {
		if (right2.getGlobalBounds().intersects(left1.getGlobalBounds())) 
		{
			Builder.rect.left = left1.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[2] = true;
		}
		else if (left2.getGlobalBounds().intersects(right1.getGlobalBounds())) {


			Builder.rect.left = right1.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[2] = true;
		}
	}


	if (down1.getGlobalBounds().intersects(top2.getGlobalBounds())) {
		Builder.move_y = speed_down;
		Thief.move_y = 0;
			b_t = 1;
			Thief.onground = 1;
			
			if (pagenum == 8)
				dead[0] = true;
	}
	if (Thief.ismoving ) {
		if (right1.getGlobalBounds().intersects(left2.getGlobalBounds())) {


			Thief.rect.left = left2.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[0] = true;
		}
		else if (left1.getGlobalBounds().intersects(right2.getGlobalBounds())) {


			Thief.rect.left = right2.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[0] = true;
		}
	}
	
	///////////////////// thief and scientist

	if (down3.getGlobalBounds().intersects(top1.getGlobalBounds()))
	{
		Thief.move_y = speed_down;
		Scientist.move_y = 0;
		t_s = 1;
		Scientist.onground = 1;
		if (pagenum == 8)
			dead[2] = true;
	}
	if (Scientist.ismoving) {
		if (right3.getGlobalBounds().intersects(left1.getGlobalBounds()))
		{
			Scientist.rect.left = left1.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[2] = true;
		}
		else if (left3.getGlobalBounds().intersects(right1.getGlobalBounds())) {


			Scientist.rect.left = right1.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[2] = true;
		}
	}


	if (down1.getGlobalBounds().intersects(top3.getGlobalBounds())) {
		Scientist.move_y = speed_down;
		Thief.move_y = 0;
		s_t = 1;
		Thief.onground = 1;

		if (pagenum == 8)
			dead[0] = true;
	}
	if (Thief.ismoving ) {
		if (right1.getGlobalBounds().intersects(left3.getGlobalBounds())) {


			Thief.rect.left = left3.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[0] = true;
		}
		else if (left1.getGlobalBounds().intersects(right3.getGlobalBounds())) {


			Thief.rect.left = right3.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[0] = true;
		}
	}


	/////////////////////    thief and astro

	if (down4.getGlobalBounds().intersects(top1.getGlobalBounds()))
	{
		Thief.move_y = speed_down;
		Astronaut.move_y = 0;
		t_a = 1;
		Astronaut.onground = 1;
		if (pagenum == 8)
			dead[2] = true;
	}
	if (Astronaut.ismoving) {
		if (right4.getGlobalBounds().intersects(left1.getGlobalBounds()))
		{
			Astronaut.rect.left = left1.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[2] = true;
		}
		else if (left4.getGlobalBounds().intersects(right1.getGlobalBounds())) {


			Astronaut.rect.left = right1.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[2] = true;
		}
	}


	if (down1.getGlobalBounds().intersects(top4.getGlobalBounds())) {
		Astronaut.move_y = speed_down;
		Thief.move_y = 0;
		a_t = 1;
		Thief.onground = 1;

		if (pagenum == 8)
			dead[0] = true;
	}
	if (Thief.ismoving) {
		if (right1.getGlobalBounds().intersects(left4.getGlobalBounds())) {


			Thief.rect.left = left4.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[0] = true;
		}
		else if (left1.getGlobalBounds().intersects(right4.getGlobalBounds())) {


			Thief.rect.left = right4.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[0] = true;
		}
	}
	///////////////////// astro and builder

	if (down2.getGlobalBounds().intersects(top4.getGlobalBounds()))
	{
		Astronaut.move_y = speed_down;
		Builder.move_y = 0;
		a_b = 1;
		Builder.onground = 1;
		if (pagenum == 8)
			dead[2] = true;
	}
	if (Builder.ismoving) {
		if (right2.getGlobalBounds().intersects(left4.getGlobalBounds()))
		{
			Builder.rect.left = left4.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[2] = true;
		}
		else if (left2.getGlobalBounds().intersects(right4.getGlobalBounds())) {


			Builder.rect.left = right4.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[2] = true;
		}
	}


	if (down4.getGlobalBounds().intersects(top2.getGlobalBounds())) {
		Builder.move_y = speed_down;
		Astronaut.move_y = 0;
		b_a = 1;
		Astronaut.onground = 1;

		if (pagenum == 8)
			dead[0] = true;
	}
	if (Astronaut.ismoving) {
		if (right4.getGlobalBounds().intersects(left2.getGlobalBounds())) {


			Astronaut.rect.left = left2.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[0] = true;
		}
		else if (left4.getGlobalBounds().intersects(right2.getGlobalBounds())) {


			Astronaut.rect.left = right2.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[0] = true;
		}
	}
	///////////////////// scientist and builder

	if (down2.getGlobalBounds().intersects(top3.getGlobalBounds()))
	{
		Scientist.move_y = speed_down;
		Builder.move_y = 0;
		s_b = 1;
		Builder.onground = 1;
		if (pagenum == 8)
			dead[2] = true;
	}
	if (Builder.ismoving) {
		if (right2.getGlobalBounds().intersects(left3.getGlobalBounds()))
		{
			Builder.rect.left = left3.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[2] = true;
		}
		else if (left2.getGlobalBounds().intersects(right3.getGlobalBounds())) {


			Builder.rect.left = right3.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[2] = true;
		}
	}


	if (down3.getGlobalBounds().intersects(top2.getGlobalBounds())) {
		Builder.move_y = speed_down;
		Scientist.move_y = 0;
		b_s = 1;
		Scientist.onground = 1;

		if (pagenum == 8)
			dead[0] = true;
	}
	if (Scientist.ismoving) {
		if (right3.getGlobalBounds().intersects(left2.getGlobalBounds())) {


			Scientist.rect.left = left2.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[0] = true;
		}
		else if (left3.getGlobalBounds().intersects(right2.getGlobalBounds())) {


			Scientist.rect.left = right2.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[0] = true;
		}
	}
	///////////////////// astro and scientist

	if (down3.getGlobalBounds().intersects(top4.getGlobalBounds()))
	{
		Astronaut.move_y = speed_down;
		Scientist.move_y = 0;
		a_s = 1;
		Scientist.onground = 1;
		if (pagenum == 8)
			dead[2] = true;
	}
	if (Scientist.ismoving) {
		if (right3.getGlobalBounds().intersects(left4.getGlobalBounds()))
		{
			Scientist.rect.left = left4.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[2] = true;
		}
		else if (left3.getGlobalBounds().intersects(right4.getGlobalBounds())) {


			Scientist.rect.left = right4.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[2] = true;
		}
	}


	if (down4.getGlobalBounds().intersects(top3.getGlobalBounds())) {
		Scientist.move_y = speed_down;
		Astronaut.move_y = 0;
		s_a = 1;
		Astronaut.onground = 1;

		if (pagenum == 8)
			dead[0] = true;
	}
	if (Astronaut.ismoving) {
		if (right4.getGlobalBounds().intersects(left3.getGlobalBounds())) {


			Astronaut.rect.left = left3.getGlobalBounds().left - num1;

			if (pagenum == 8)
				dead[0] = true;
		}
		else if (left4.getGlobalBounds().intersects(right3.getGlobalBounds())) {


			Astronaut.rect.left = right3.getGlobalBounds().left + num2;

			if (pagenum == 8)
				dead[0] = true;
		}
	}

}

