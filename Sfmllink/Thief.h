#ifndef THIEF
#define THIEF
#include "Initialization.h"










void Thief_collision1(Player& Thief, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, CircleShape fallingSquares[], Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite& moving_wall, Sprite& moving_wall1, Sprite& pushwall, Sprite& button, Sprite& buttonp, bool& button_ispressed, int numSquares, Sprite death)
{

	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 37;
			
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
			Thief.rect.left = squares_2.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_2.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_2.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
			Thief.rect.left = squares_4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_4.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_4.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
			Thief.rect.left = squares_5.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_5.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_5.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_5.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}
	if (Thief.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_6.getPosition().x) || (Thief.rect.left + 33 <= squares_6.getPosition().x)) { //right
			Thief.rect.left = squares_6.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_6.getPosition().x + 50) || (Thief.rect.left >= squares_6.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_6.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_6.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_6.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
		if (Thief.rect.top > groundtex.getPosition().y - 48) {//jump
			Thief.move_y = 0;
			Thief.rect.top = groundtex.getPosition().y - 48;
			Thief.onground = true;
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex2.getPosition().x) || (Thief.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
			Thief.rect.left = groundtex2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex2.getPosition().x + 1960) || (Thief.rect.left >= groundtex2.getPosition().x + 1961)) {		//left
			Thief.rect.left = groundtex2.getPosition().x + 1965;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex2.getPosition().y) {		//down
				Thief.rect.top = groundtex2.getPosition().y + 80;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex2.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex2.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex3.getPosition().x) || (Thief.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
			Thief.rect.left = groundtex3.getPosition().x - 36;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_1.getPosition().x) || (Thief.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
			Thief.rect.left = wall_1.getPosition().x - 38;

		}
		else if ((Thief.rect.left >= wall_1.getPosition().x + 315) || (Thief.rect.left >= wall_1.getPosition().x + 316)) {//left to player
			Thief.rect.left = wall_1.getPosition().x + 318;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

		if (Thief.rect.top < wall_1.getPosition().y - 55.5) {//jump
			Thief.move_y = 0;

			Thief.onground = true;
		}

	}




	if (Thief.pico.getGlobalBounds().intersects(moving_wall1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= moving_wall1.getPosition().x) || (Thief.rect.left + 33 <= moving_wall1.getPosition().x)) { //right
			Thief.rect.left = moving_wall1.getPosition().x - 36;

		}
		else if ((Thief.rect.left >= moving_wall1.getPosition().x + 245) || (Thief.rect.left >= moving_wall1.getPosition().x + 246)) {//left to player
			Thief.rect.left = moving_wall1.getPosition().x + 247.35;

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(moving_wall.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= moving_wall.getPosition().x) || (Thief.rect.left + 33 <= moving_wall.getPosition().x)) { //right
			Thief.rect.left = moving_wall.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= moving_wall.getPosition().x + 83) || (Thief.rect.left >= moving_wall.getPosition().x + 84)) {//left to player
			Thief.rect.left = moving_wall.getPosition().x + 85;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > moving_wall.getPosition().y) {		//down
				Thief.rect.top = moving_wall.getPosition().y + 391;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			
		}

	}









	if (Thief.pico.getGlobalBounds().intersects(pushwall.getGlobalBounds())) {
		how_many_touching++;
		if ((Thief.rect.left + 32 <= pushwall.getPosition().x) || (Thief.rect.left + 35 <= pushwall.getPosition().x)) {
			Thief.rect.left = pushwall.getPosition().x - 36;
			if (!pushwall.getGlobalBounds().intersects(moving_wall1.getGlobalBounds()) && how_many_touching > 1) {

				pushwall.move(0.4, 0);
			}
		}
	}


	if (Thief.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_3.getPosition().x) || (Thief.rect.left + 33 <= wall_3.getPosition().x)) {			//right
			Thief.rect.left = wall_3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= wall_3.getPosition().x + 630) || (Thief.rect.left >= wall_3.getPosition().x + 632)) {		//left
			Thief.rect.left = wall_3.getPosition().x + 635;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_3.getPosition().y) {		//down
				Thief.rect.top = wall_3.getPosition().y + 643;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_4.getPosition().x) || (Thief.rect.left + 33 <= wall_4.getPosition().x)) { //right
			Thief.rect.left = wall_4.getPosition().x - 36;

		}

	}

	//PLAYER COLLISION WITH BUTTON

	if (Thief.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

		if (Thief.rect.top < button.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

		if (Thief.rect.top < buttonp.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button.setScale(0, 0);
		}


	}




	//MORE THIEF MAP COLLISION


	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if (Thief.rect.top > groundtex4.getPosition().y - 1500) {
			Thief.rect.top = groundtex4.getPosition().y - 2000;
			Thief.rect.left = groundtex4.getPosition().x;
		}

	}


	//THIEF COLLISION WITH FALLING BLOCKS
	//NEED HELP

	for (int i = 0; i < numSquares; i++) {

		if (Thief.pico.getGlobalBounds().intersects(fallingSquares[i].getGlobalBounds())) {

			if (Thief.rect.top >= fallingSquares[i].getPosition().y - 30) {

				Thief.onground = 1;
				fallingSquares[i].move(0, 2.5);
			}
			if (fallingSquares[i].getPosition().y > groundtex4.getPosition().y - 1000) {
				fallingSquares[i].setPosition(3390 + i * 200, 580);
				Thief.onground = 0;

			}

		}
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}


void Thief_collision2(Player& Thief, RectangleShape laser, RectangleShape laser1, RectangleShape laser2, RectangleShape laser3, RectangleShape laser4, RectangleShape laser5, RectangleShape laser6, RectangleShape laser7, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, Sprite squares_8, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite& moving_wall, Sprite& button, Sprite& buttonp, Sprite& buttonp1, bool& button_ispressed, Sprite death, Sprite death_ceiling)
{


	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(death_ceiling.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}

	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
			Thief.rect.left = squares_2.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_2.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_2.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}
	if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
			Thief.rect.left = squares_4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_4.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_4.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
			Thief.rect.left = squares_5.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_5.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_5.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_5.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_6.getPosition().x) || (Thief.rect.left + 33 <= squares_6.getPosition().x)) { //right
			Thief.rect.left = squares_6.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_6.getPosition().x + 50) || (Thief.rect.left >= squares_6.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_6.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_6.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_6.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_7.getPosition().x) || (Thief.rect.left + 33 <= squares_7.getPosition().x)) { //right
			Thief.rect.left = squares_7.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_7.getPosition().x + 50) || (Thief.rect.left >= squares_7.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_7.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_7.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_7.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_8.getPosition().x) || (Thief.rect.left + 33 <= squares_8.getPosition().x)) { //right
			Thief.rect.left = squares_8.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_8.getPosition().x + 50) || (Thief.rect.left >= squares_8.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_8.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_8.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_8.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (maskon == 0) {
		if (Thief.pico.getGlobalBounds().intersects(laser.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser1.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser2.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser3.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser4.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser5.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser6.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser7.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
	}


	if (Thief.pico.getGlobalBounds().intersects(moving_wall.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= moving_wall.getPosition().x) || (Thief.rect.left + 33 <= moving_wall.getPosition().x)) { //right
			Thief.rect.left = moving_wall.getPosition().x - 36;
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_1.getPosition().x) || (Thief.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
			Thief.rect.left = wall_1.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_1.getPosition().x + 315) || (Thief.rect.left >= wall_1.getPosition().x + 316)) {//left to player
			Thief.rect.left = wall_1.getPosition().x + 318;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

		if (Thief.rect.top < wall_1.getPosition().y - 55.5) {//jump
			Thief.move_y = 0;

			Thief.onground = true;
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {

		if ((Thief.rect.left >= groundtex.getPosition().x + 5455.333298) || (Thief.rect.left >= groundtex.getPosition().x + 5456.333298)) {//left
			Thief.rect.left = groundtex.getPosition().x + 5458.333298;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > groundtex.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex.getPosition().y - 48;
				Thief.onground = true;
			}
		}
	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex4.getPosition().x) || (Thief.rect.left + 33 <= groundtex4.getPosition().x)) { //right
			Thief.rect.left = groundtex4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex4.getPosition().x + groundtex4.getGlobalBounds().width) || (Thief.rect.left >= groundtex4.getPosition().x + groundtex4.getGlobalBounds().width + 1)) {//left
			Thief.rect.left = groundtex4.getPosition().x + 55;
		}
		else if (Thief.rect.top > groundtex4.getPosition().y - 48) {//jump
			Thief.move_y = 0;
			Thief.rect.top = groundtex4.getPosition().y - 48;
			Thief.onground = true;
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
		if (Thief.rect.left + 32 <= groundtex5.getPosition().x || Thief.rect.left + 33 <= groundtex5.getPosition().x) {
			Thief.rect.left = groundtex5.getPosition().x - 36;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > groundtex5.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex5.getPosition().y - 48;
				Thief.onground = true;
			}
		}
	}



	if (Thief.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

		if (Thief.rect.top < button.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

		if (Thief.rect.top < buttonp.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {

		if (Thief.rect.top < buttonp1.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp1.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_3.getPosition().x) || (Thief.rect.left + 33 <= wall_3.getPosition().x)) { //right to player
			Thief.rect.left = wall_3.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_3.getPosition().x + 315) || (Thief.rect.left >= wall_3.getPosition().x + 316)) {//left to player
			Thief.rect.left = wall_3.getPosition().x + 318;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

		if (Thief.rect.top < wall_3.getPosition().y - 55.5) {//jump
			Thief.move_y = 0;

			Thief.onground = true;
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_4.getPosition().x) || (Thief.rect.left + 33 <= wall_4.getPosition().x)) { //right to player
			Thief.rect.left = wall_4.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_4.getPosition().x + 315) || (Thief.rect.left >= wall_4.getPosition().x + 316)) {//left to player
			Thief.rect.left = wall_4.getPosition().x + 318;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

		if (Thief.rect.top < wall_4.getPosition().y - 55.5) {//jump
			Thief.move_y = 0;

			Thief.onground = true;
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_5.getPosition().x) || (Thief.rect.left + 33 <= wall_5.getPosition().x)) { //right to player
			Thief.rect.left = wall_5.getPosition().x - 37;

		}


	}


}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Thief_collision3(Player& Thief, RectangleShape laser1, RectangleShape laser2, RectangleShape laser3, RectangleShape laser4, RectangleShape laser5, RectangleShape laser6, RectangleShape laser7, RectangleShape laser8, Sprite squares1, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex12, Sprite groundtex13, Sprite groundtex14, Sprite& groundtex15, Sprite& movingwall1, Sprite& movingwall2, Sprite& movingwall3, Sprite& button1, Sprite& buttonp1, Sprite& button2, Sprite& buttonp2, Sprite& button3, Sprite& buttonp3, Sprite& button4, Sprite& buttonp4, Sprite& button5, Sprite& buttonp5, Sprite& button6, Sprite& buttonp6, Sprite death)
{
	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}



	////////////////////////////////////////////////          SECTION 1           ///////////////////////////////////////////////////////

	// awel ground bto2af 3aleeha
	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
		if ((Thief.rect.left >= groundtex.getPosition().x + 1962) || (Thief.rect.left >= groundtex.getPosition().x + 1963.5)) {//left
			Thief.rect.left = groundtex.getPosition().x + 1965;
		}
		else if ((Thief.rect.left + 32 <= groundtex.getPosition().x) || (Thief.rect.left + 33 <= groundtex.getPosition().x)) { //right
			Thief.rect.left = groundtex.getPosition().x - 36;
		}
		else {

			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex.getPosition().y - 48;
				Thief.onground = true;
			}

		}
	}


	// el wall el awalaneya
	if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
		if ((Thief.rect.left >= groundtex2.getPosition().x + 390) || (Thief.rect.left >= groundtex2.getPosition().x + 391)) {//left     // right elbox 
			Thief.rect.left = groundtex2.getPosition().x + 393;
		}


	}





	if (Thief.pico.getGlobalBounds().intersects(movingwall1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= movingwall1.getPosition().x) || (Thief.rect.left + 33 <= movingwall1.getPosition().x)) { //right  //left elbox
			Thief.rect.left = movingwall1.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= movingwall1.getPosition().x + 191) || (Thief.rect.left >= movingwall1.getPosition().x + 194)) {//left     // right elbox ////////////byt8ayar 3ala 7asab el scale bel calculator 
			Thief.rect.left = movingwall1.getPosition().x + 196.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > movingwall1.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			if (Thief.rect.top < movingwall1.getPosition().y) {//jump
				Thief.move_y = 0;
				Thief.rect.top = movingwall1.getPosition().y - 720;
				Thief.onground = true;
			}

		}

	}



	// sa2f el astroooooo
	if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex3.getPosition().x) || (Thief.rect.left + 33 <= groundtex3.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex3.getPosition().x + 1570) || (Thief.rect.left >= groundtex3.getPosition().x + 1571)) {//left     // right elbox 
			Thief.rect.left = groundtex3.getPosition().x + 1572;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex3.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			if (Thief.rect.top < groundtex3.getPosition().y) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex3.getPosition().y - 720;
				Thief.onground = true;
			}

		}

	}

	// ground el 3aleha elmoftah welbuttons
	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex4.getPosition().x) || (Thief.rect.left + 33 <= groundtex4.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex4.getPosition().x + 1216) || (Thief.rect.left >= groundtex4.getPosition().x + 1217)) {//left     // right elbox 
			Thief.rect.left = groundtex4.getPosition().x + 1218.3;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex4.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex4.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}


	// Builder wall el hay7arakha
	if (Thief.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex6.getPosition().x) || (Thief.rect.left + 33 <= groundtex6.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex6.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex6.getPosition().x + 115) || (Thief.rect.left >= groundtex6.getPosition().x + 116)) {//left     // right elbox
			Thief.rect.left = groundtex6.getPosition().x + 117.9;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex6.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex6.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}




	////////////////////////////////////////////////          SECTION 2           ///////////////////////////////////////////////////////


	// el ard el dakhla fe section 2

	if (Thief.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex7.getPosition().x) || (Thief.rect.left + 33 <= groundtex7.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex7.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex7.getPosition().x + 784) || (Thief.rect.left >= groundtex7.getPosition().x + 785)) {//left     // right elbox 
			Thief.rect.left = groundtex7.getPosition().x + 786;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex7.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex7.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}


	// el sa2f el foo2 khales bta3 el astro section 2
	if (Thief.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex8.getPosition().x) || (Thief.rect.left + 33 <= groundtex8.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex8.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex8.getPosition().x + 312) || (Thief.rect.left >= groundtex8.getPosition().x + 313)) {//left     // right elbox 
			Thief.rect.left = groundtex8.getPosition().x + 314.4;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex8.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex8.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}

	// el sa2f bta3 el astro el hayenzel ydoos 3ala el button el 3aleeh (section 2)
	if (Thief.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex9.getPosition().x) || (Thief.rect.left + 33 <= groundtex9.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex9.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex9.getPosition().x + 391) || (Thief.rect.left >= groundtex9.getPosition().x + 392)) {//left     // right elbox 
			Thief.rect.left = groundtex9.getPosition().x + 393;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex9.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex9.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}






	// el sa2f el ganb ard el astro el 3aleeha el button el bywa2a3 el square
	if (Thief.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex5.getPosition().x) || (Thief.rect.left + 33 <= groundtex5.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex5.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex5.getPosition().x + 56) || (Thief.rect.left >= groundtex5.getPosition().x + 57)) {//left     // right elbox 
			Thief.rect.left = groundtex5.getPosition().x + 58.95;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex5.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex5.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}



	// elsa2f el main bta3 section 2
	if (Thief.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex10.getPosition().x) || (Thief.rect.left + 33 <= groundtex10.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex10.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex10.getPosition().x + 784) || (Thief.rect.left >= groundtex10.getPosition().x + 785)) {//left     // right elbox 
			Thief.rect.left = groundtex10.getPosition().x + 786;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex10.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex10.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(movingwall2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= movingwall2.getPosition().x) || (Thief.rect.left + 33 <= movingwall2.getPosition().x)) { //right  //left elbox
			Thief.rect.left = movingwall2.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= movingwall2.getPosition().x + 784) || (Thief.rect.left >= movingwall2.getPosition().x + 785)) {//left     // right elbox 
			Thief.rect.left = movingwall2.getPosition().x + 786;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > movingwall2.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < movingwall2.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares1.getPosition().x) || (Thief.rect.left + 33 <= squares1.getPosition().x)) { //right  //left elbox
			Thief.rect.left = squares1.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares1.getPosition().x + 50) || (Thief.rect.left >= squares1.getPosition().x + 50.5)) {//left     // right elbox ////////////byt8ayar 3ala 7asab el scale bel calculator 
			Thief.rect.left = squares1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares1.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares1.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}



	////////////////////////////////////////////////          SECTION 3           ///////////////////////////////////////////////////////



	//Main Ground of Section 3 el 3aleeha el button el byefta7 moving wall 2
	if (Thief.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex12.getPosition().x) || (Thief.rect.left + 33 <= groundtex12.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex12.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex12.getPosition().x + 1963) || (Thief.rect.left >= groundtex12.getPosition().x + 1964)) {//left     // right elbox 
			Thief.rect.left = groundtex12.getPosition().x + 1965;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex12.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex12.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}

	//el heeta el 3aleeha el lasers section 3
	if (Thief.pico.getGlobalBounds().intersects(groundtex13.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex13.getPosition().x) || (Thief.rect.left + 33 <= groundtex13.getPosition().x)) { //right  //left elbox
			if (!(movingwall3.getGlobalBounds().intersects(groundtex15.getGlobalBounds()))) {
				Thief.rect.left = groundtex13.getPosition().x - 36;
			}
		}

		else if ((Thief.rect.left >= groundtex13.getPosition().x + 1255) || (Thief.rect.left >= groundtex13.getPosition().x + 1256)) {//left     // right elbox 
			Thief.rect.left = groundtex13.getPosition().x + 1257.6;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex13.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex13.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(movingwall3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= movingwall3.getPosition().x) || (Thief.rect.left + 33 <= movingwall3.getPosition().x)) { //right  //left elbox
			Thief.rect.left = movingwall3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= movingwall3.getPosition().x + 191) || (Thief.rect.left >= movingwall3.getPosition().x + 194)) {//left     // right elbox 
			if (!(Thief.pico.getGlobalBounds().intersects(groundtex13.getGlobalBounds()))) {
				Thief.rect.left = movingwall3.getPosition().x + 196.5;
			}
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > movingwall3.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			if (Thief.rect.top < movingwall3.getPosition().y) {//jump
				Thief.move_y = 0;
				Thief.rect.top = movingwall3.getPosition().y - 48;
				Thief.onground = true;
			}

		}

	}


	// final wall el 3and elbab
	if (Thief.pico.getGlobalBounds().intersects(groundtex14.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex14.getPosition().x) || (Thief.rect.left + 33 <= groundtex14.getPosition().x)) { //right  //left elbox
			Thief.rect.left = groundtex14.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= groundtex14.getPosition().x + 391) || (Thief.rect.left >= groundtex14.getPosition().x + 392)) {//left     // right elbox 
			Thief.rect.left = groundtex14.getPosition().x + 393;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex14.getPosition().y + 50) { //down   // down box    //garab yam3alem
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < groundtex14.getPosition().y) {//jump  // up elbox

				Thief.onground = true;



			}

		}

	}





	////////////////////////////////////////////////          Buttons           ///////////////////////////////////////////////////////
	if (Thief.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {

		if (Thief.rect.top < button1.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button1.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {

		if (Thief.rect.top < buttonp1.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp1.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button1.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button2.getGlobalBounds())) {

		if (Thief.rect.top < button1.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed2 = true;
			button2.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {

		if (Thief.rect.top < buttonp2.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp2.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed2 = true;
			button2.setScale(0, 0);
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {

		if (Thief.rect.top < button3.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed3 = true;
			button3.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {

		if (Thief.rect.top < buttonp3.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp3.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed3 = true;
			button3.setScale(0, 0);
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(button4.getGlobalBounds())) {

		if (Thief.rect.top < button4.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed4 = true;
			button4.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp4.getGlobalBounds())) {

		if (Thief.rect.top < buttonp4.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp4.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed4 = true;
			button4.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button5.getGlobalBounds())) {

		if (Thief.rect.top < button5.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed5 = true;
			button5.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {

		if (Thief.rect.top < buttonp5.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp5.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed5 = true;
			button5.setScale(0, 0);
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(button6.getGlobalBounds())) {

		if (Thief.rect.top < button6.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed6 = true;
			button6.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp6.getGlobalBounds())) {

		if (Thief.rect.top < buttonp6.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp6.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed6 = true;
			button6.setScale(0, 0);
		}


	}



	////////////////////////////////////////////////          Lasers           ///////////////////////////////////////////////////////
	if (maskon == 0) {

		if (Thief.pico.getGlobalBounds().intersects(laser1.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser2.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser3.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser4.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser5.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser6.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser7.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser8.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
	}



}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



void Thief_collision4(Player& Thief, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, Sprite squares_8, Sprite squares_9, Sprite squares_10, Sprite squares_11, Sprite squares_12, Sprite squares_13, Sprite squares_14, Sprite squares_15, Sprite squares_16, Sprite squares_17, Sprite squares_18, Sprite squares_19, Sprite squares_20, Sprite squares_21, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite& moving_wall, Sprite& button, Sprite& buttonp, Sprite death, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite death_ceiling) {
	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(death_ceiling.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}


	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}








	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
			Thief.rect.left = squares_5.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_5.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_5.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_5.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}








	if (Thief.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_7.getPosition().x) || (Thief.rect.left + 33 <= squares_7.getPosition().x)) { //right
			Thief.rect.left = squares_7.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_7.getPosition().x + 85) || (Thief.rect.left >= squares_7.getPosition().x + 85.5)) {//left
			Thief.rect.left = squares_7.getPosition().x + 95;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_7.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_7.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_8.getPosition().x) || (Thief.rect.left + 33 <= squares_8.getPosition().x)) { //right
			Thief.rect.left = squares_8.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_8.getPosition().x + 50) || (Thief.rect.left >= squares_8.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_8.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_8.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_8.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_10.getPosition().x) || (Thief.rect.left + 33 <= squares_10.getPosition().x)) { //right
			Thief.rect.left = squares_10.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_10.getPosition().x + 50) || (Thief.rect.left >= squares_10.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_10.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_10.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_10.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}






	if (Thief.pico.getGlobalBounds().intersects(squares_12.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_12.getPosition().x) || (Thief.rect.left + 33 <= squares_12.getPosition().x)) { //right
			Thief.rect.left = squares_12.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_12.getPosition().x + 50) || (Thief.rect.left >= squares_12.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_12.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_12.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_12.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_13.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_13.getPosition().x) || (Thief.rect.left + 33 <= squares_13.getPosition().x)) { //right
			Thief.rect.left = squares_13.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_13.getPosition().x + 50) || (Thief.rect.left >= squares_13.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_13.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_13.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_13.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_14.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_14.getPosition().x) || (Thief.rect.left + 33 <= squares_14.getPosition().x)) { //right
			Thief.rect.left = squares_14.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_14.getPosition().x + 50) || (Thief.rect.left >= squares_14.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_14.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_14.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_14.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}








	if (Thief.pico.getGlobalBounds().intersects(squares_16.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_16.getPosition().x) || (Thief.rect.left + 33 <= squares_16.getPosition().x)) { //right
			Thief.rect.left = squares_16.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_16.getPosition().x + 50) || (Thief.rect.left >= squares_16.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_16.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_16.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_16.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_17.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_17.getPosition().x) || (Thief.rect.left + 33 <= squares_17.getPosition().x)) { //right
			Thief.rect.left = squares_17.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_17.getPosition().x + 50) || (Thief.rect.left >= squares_17.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_17.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_17.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_17.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	
	if (Thief.pico.getGlobalBounds().intersects(squares_19.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_19.getPosition().x) || (Thief.rect.left + 33 <= squares_19.getPosition().x)) { //right
			Thief.rect.left = squares_19.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_19.getPosition().x + 50) || (Thief.rect.left >= squares_19.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_19.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_19.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_19.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_21.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_21.getPosition().x) || (Thief.rect.left + 33 <= squares_21.getPosition().x)) { //right
			Thief.rect.left = squares_21.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_21.getPosition().x + 50) || (Thief.rect.left >= squares_21.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_21.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_21.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_21.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	
	if (easy) {

		
		

		if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
				Thief.rect.left = squares_2.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_2.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_2.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
				Thief.rect.left = squares_4.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_4.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_4.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_6.getPosition().x) || (Thief.rect.left + 33 <= squares_6.getPosition().x)) { //right
				Thief.rect.left = squares_6.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_6.getPosition().x + 50) || (Thief.rect.left >= squares_6.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_6.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_6.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_6.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(squares_9.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_9.getPosition().x) || (Thief.rect.left + 33 <= squares_9.getPosition().x)) { //right
				Thief.rect.left = squares_9.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_9.getPosition().x + 50) || (Thief.rect.left >= squares_9.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_9.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_9.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_9.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(squares_11.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_11.getPosition().x) || (Thief.rect.left + 33 <= squares_11.getPosition().x)) { //right
				Thief.rect.left = squares_11.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_11.getPosition().x + 50) || (Thief.rect.left >= squares_11.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_11.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_11.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_11.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(squares_15.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_15.getPosition().x) || (Thief.rect.left + 33 <= squares_15.getPosition().x)) { //right
				Thief.rect.left = squares_15.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_15.getPosition().x + 50) || (Thief.rect.left >= squares_15.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_15.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_15.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_15.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		
		if (Thief.pico.getGlobalBounds().intersects(squares_20.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_20.getPosition().x) || (Thief.rect.left + 33 <= squares_20.getPosition().x)) { //right
				Thief.rect.left = squares_20.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_20.getPosition().x + 50) || (Thief.rect.left >= squares_20.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_20.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_20.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_20.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
	}



	if (medium) {

		


		if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
				Thief.rect.left = squares_4.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_4.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_4.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
		
			if ((Thief.rect.left >= groundtex.getPosition().x + 1760) || (Thief.rect.left >= groundtex.getPosition().x + 1763)) {//left to player
				Thief.rect.left = groundtex.getPosition().x + 1768.5;
			}

			else {
				Thief.move_y = 0;
				Thief.onground = true;
				if (Thief.rect.top > groundtex.getPosition().y - 48) {//jump
					Thief.move_y = 0;
					Thief.rect.top = groundtex.getPosition().y - 48;
					Thief.onground = true;
				}
			}
		
		
	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
		
			if ((Thief.rect.left + 31 <= groundtex2.getPosition().x) || (Thief.rect.left + 33 <= groundtex2.getPosition().x)) { //right to player
				Thief.rect.left = groundtex2.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= groundtex2.getPosition().x + 960) || (Thief.rect.left >= groundtex2.getPosition().x + 961)) {//left to player
				Thief.rect.left = groundtex2.getPosition().x + 962.85;
			}

			else {
				Thief.move_y = 0;
				Thief.onground = true;
				if (Thief.rect.top > groundtex2.getPosition().y - 48) {//jump
					Thief.move_y = 0;
					Thief.rect.top = groundtex2.getPosition().y - 48;
					Thief.onground = true;
				}
			}
		
		
	}



	if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= groundtex3.getPosition().x) || (Thief.rect.left + 33 <= groundtex3.getPosition().x)) { //right to player
			Thief.rect.left = groundtex3.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= groundtex3.getPosition().x + 586) || (Thief.rect.left >= groundtex3.getPosition().x + 587)) {//left to player
			Thief.rect.left = groundtex3.getPosition().x + 589.5;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > groundtex3.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex3.getPosition().y - 48;
				Thief.onground = true;
			}
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= groundtex5.getPosition().x) || (Thief.rect.left + 33 <= groundtex5.getPosition().x)) { //right to player
			Thief.rect.left = groundtex5.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= groundtex5.getPosition().x + 980) || (Thief.rect.left >= groundtex5.getPosition().x + 981)) {//left to player
			Thief.rect.left = groundtex5.getPosition().x + 982.5;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > groundtex5.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex5.getPosition().y - 48;
				Thief.onground = true;
			}
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= groundtex6.getPosition().x) || (Thief.rect.left + 33 <= groundtex6.getPosition().x)) { //right to player
			Thief.rect.left = groundtex6.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= groundtex6.getPosition().x + 1175) || (Thief.rect.left >= groundtex6.getPosition().x + 1176)) {//left to player
			Thief.rect.left = groundtex6.getPosition().x + 1179;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > groundtex6.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex6.getPosition().y - 48;
				Thief.onground = true;
			}
		}
	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= groundtex7.getPosition().x) || (Thief.rect.left + 33 <= groundtex7.getPosition().x)) { //right to player
			Thief.rect.left = groundtex7.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= groundtex7.getPosition().x + 1233) || (Thief.rect.left >= groundtex7.getPosition().x + 1234)) {//left to player
			Thief.rect.left = groundtex7.getPosition().x + 1237.95;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > groundtex7.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex7.getPosition().y - 48;
				Thief.onground = true;
			}
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= groundtex9.getPosition().x) || (Thief.rect.left + 33 <= groundtex9.getPosition().x)) { //right to player
			Thief.rect.left = groundtex9.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= groundtex9.getPosition().x + 1373) || (Thief.rect.left >= groundtex9.getPosition().x + 1374)) {//left to player
			Thief.rect.left = groundtex9.getPosition().x + 1375.5;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > groundtex9.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex9.getPosition().y - 48;
				Thief.onground = true;
			}
		}
	}

	
	

	if (Thief.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_4.getPosition().x) || (Thief.rect.left + 33 <= wall_4.getPosition().x)) { //right to player
			Thief.rect.left = wall_4.getPosition().x - 37;

		}


	}


}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Thief_collision5(Player& Thief, Sprite groundtex1, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex12, Sprite groundtex13, Sprite groundtex15, Sprite groundtex16, Sprite Bridge, Sprite& button1, Sprite& button2, Sprite& button3, Sprite& button4, Sprite& button5, Sprite& button6, Sprite& button7, Sprite& button8, Sprite& buttonp1, Sprite& buttonp2, Sprite& buttonp3, Sprite& buttonp4, Sprite& buttonp5, Sprite& buttonp6, Sprite& buttonp7, Sprite& buttonp8, Sprite floating_square, Sprite floating_square1, Sprite floating_square2, Sprite floating_square3, Sprite floating_square4, Sprite floating_square5, Sprite floating_square6, Sprite floating_square7, Sprite floating_square8, Sprite floating_square9, Sprite floating_square10, Sprite floating_square11, Sprite floating_square12, Sprite wall1, Sprite wall2, Sprite wall7, RectangleShape laser1[], RectangleShape laser2[], Sprite teleporter1, Sprite teleporter2, Sprite movingwall1, Sprite movingwall2, Sprite block, Sprite celling1, Sprite celling2, Sprite death, Sprite death_ceiling,Sprite fake_wall1, Sprite fake_wall2, Sprite fake_wall3, Sprite fake_wall4) {

	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(death_ceiling.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}

	//groundtex
	if (Thief.pico.getGlobalBounds().intersects(groundtex1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex1.getPosition().x) || (Thief.rect.left + 33 <= groundtex1.getPosition().x)) {			//right
			Thief.rect.left = groundtex1.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex1.getPosition().x + 581.5) || (Thief.rect.left >= groundtex1.getPosition().x + 582)) {		//left
			Thief.rect.left = groundtex1.getPosition().x + 587;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex1.getPosition().y) {		//down
				Thief.rect.top = groundtex1.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex1.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex1.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex2.getPosition().x) || (Thief.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
			Thief.rect.left = groundtex2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex2.getPosition().x + 704) || (Thief.rect.left >= groundtex2.getPosition().x + 705)) {		//left
			Thief.rect.left = groundtex2.getPosition().x + 707.4;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex2.getPosition().y) {		//down
				Thief.rect.top = groundtex2.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex2.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex2.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}



	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex4.getPosition().x) || (Thief.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
			Thief.rect.left = groundtex4.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex4.getPosition().x + 1372) || (Thief.rect.left >= groundtex4.getPosition().x + 1372.5)) {		//left
			Thief.rect.left = groundtex4.getPosition().x + 1375.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex4.getPosition().y) {		//down
				Thief.rect.top = groundtex4.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex4.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex6.getPosition().x) || (Thief.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
			Thief.rect.left = groundtex6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex6.getPosition().x + 1568.5) || (Thief.rect.left >= groundtex6.getPosition().x + 1569)) {		//left
			Thief.rect.left = groundtex6.getPosition().x + 1572;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex6.getPosition().y) {		//down
				Thief.rect.top = groundtex6.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex7.getPosition().x) || (Thief.rect.left + 33 <= groundtex7.getPosition().x)) {			//right
			Thief.rect.left = groundtex7.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex7.getPosition().x + 586) || (Thief.rect.left >= groundtex7.getPosition().x + 586.5)) {		//left
			Thief.rect.left = groundtex6.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex7.getPosition().y) {		//down
				Thief.rect.top = groundtex7.getPosition().y + 238;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex7.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex7.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex8.getPosition().x) || (Thief.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
			Thief.rect.left = groundtex8.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex8.getPosition().x + 657.526) || (Thief.rect.left >= groundtex8.getPosition().x + 658.026)) {		//left
			Thief.rect.left = groundtex8.getPosition().x + 661.026;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex8.getPosition().y) {		//down
				Thief.rect.top = groundtex8.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex8.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex9.getPosition().x) || (Thief.rect.left + 33 <= groundtex9.getPosition().x)) {			//right
			Thief.rect.left = groundtex9.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex9.getPosition().x + 544.7) || (Thief.rect.left >= groundtex9.getPosition().x + 545.2)) {		//left
			if (!(Thief.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds()))) {

				Thief.rect.left = groundtex9.getPosition().x + 550.2;
			}
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex9.getPosition().y) {		//down
				Thief.rect.top = groundtex9.getPosition().y + 80;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex9.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex9.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}



	if (Thief.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex10.getPosition().x) || (Thief.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
			Thief.rect.left = groundtex10.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex10.getPosition().x + 579.533) || (Thief.rect.left >= groundtex10.getPosition().x + 580.033)) {		//left
			Thief.rect.left = groundtex10.getPosition().x + 582.033;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex10.getPosition().y) {		//down
				Thief.rect.top = groundtex10.getPosition().y + 791;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex10.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex10.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex12.getPosition().x) || (Thief.rect.left + 33 <= groundtex12.getPosition().x)) {			//right
			if (!(Thief.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds()))) {
				Thief.rect.left = groundtex12.getPosition().x - 36;
			}
		}

		else if ((Thief.rect.left >= groundtex12.getPosition().x + 232.3) || (Thief.rect.left >= groundtex12.getPosition().x + 232.8)) {		//left

			Thief.rect.left = groundtex12.getPosition().x + 235.8;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex12.getPosition().y) {		//down
				Thief.rect.top = groundtex12.getPosition().y + 39.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex12.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex12.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}



	if (Thief.pico.getGlobalBounds().intersects(groundtex13.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex13.getPosition().x) || (Thief.rect.left + 33 <= groundtex13.getPosition().x)) {			//right
			Thief.rect.left = groundtex13.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex13.getPosition().x + 468.1) || (Thief.rect.left >= groundtex13.getPosition().x + 468.6)) {		//left
			Thief.rect.left = groundtex13.getPosition().x + 471.6;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex13.getPosition().y) {		//down
				Thief.rect.top = groundtex13.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex13.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex13.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex15.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex15.getPosition().x) || (Thief.rect.left + 33 <= groundtex15.getPosition().x)) {			//right
			Thief.rect.left = groundtex15.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex15.getPosition().x + 327.265) || (Thief.rect.left >= groundtex15.getPosition().x + 327.765)) {		//left
			Thief.rect.left = groundtex15.getPosition().x + 630.765;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex15.getPosition().y) {		//down
				Thief.rect.top = groundtex15.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex15.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex15.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex16.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex16.getPosition().x) || (Thief.rect.left + 33 <= groundtex16.getPosition().x)) {			//right
			Thief.rect.left = groundtex16.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex16.getPosition().x + 389.5) || (Thief.rect.left >= groundtex16.getPosition().x + 390)) {		//left
			Thief.rect.left = groundtex16.getPosition().x + 393;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex16.getPosition().y) {		//down
				Thief.rect.top = groundtex16.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex16.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex16.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	//Bridge
	if (Thief.pico.getGlobalBounds().intersects(Bridge.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= Bridge.getPosition().x) || (Thief.rect.left + 33 <= Bridge.getPosition().x)) {			//right
			Thief.rect.left = Bridge.getPosition().x - 36;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > Bridge.getPosition().y) {		//down
				Thief.rect.top = Bridge.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > Bridge.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = Bridge.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}





	if (easy) {
		
		if (Thief.pico.getGlobalBounds().intersects(floating_square3.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= floating_square3.getPosition().x) || (Thief.rect.left + 33 <= floating_square3.getPosition().x)) { //right
				Thief.rect.left = floating_square3.getPosition().x - 37;
				Thief.rect.left = floating_square3.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= floating_square3.getPosition().x + 50) || (Thief.rect.left >= floating_square3.getPosition().x + 50.5)) {//left
				Thief.rect.left = floating_square3.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > floating_square3.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < floating_square3.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(floating_square4.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= floating_square4.getPosition().x) || (Thief.rect.left + 33 <= floating_square4.getPosition().x)) { //right
				Thief.rect.left = floating_square4.getPosition().x - 37;
				Thief.rect.left = floating_square4.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= floating_square4.getPosition().x + 50) || (Thief.rect.left >= floating_square4.getPosition().x + 50.5)) {//left
				Thief.rect.left = floating_square4.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > floating_square4.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < floating_square4.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(floating_square11.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= floating_square11.getPosition().x) || (Thief.rect.left + 33 <= floating_square11.getPosition().x)) { //right
				Thief.rect.left = floating_square11.getPosition().x - 37;
				Thief.rect.left = floating_square11.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= floating_square11.getPosition().x + 50) || (Thief.rect.left >= floating_square11.getPosition().x + 50.5)) {//left
				Thief.rect.left = floating_square11.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > floating_square11.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < floating_square11.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(floating_square12.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= floating_square12.getPosition().x) || (Thief.rect.left + 33 <= floating_square12.getPosition().x)) { //right
				Thief.rect.left = floating_square12.getPosition().x - 37;
				Thief.rect.left = floating_square12.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= floating_square12.getPosition().x + 50) || (Thief.rect.left >= floating_square12.getPosition().x + 50.5)) {//left
				Thief.rect.left = floating_square12.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > floating_square12.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < floating_square12.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

	}



	if (medium) {
		if (Thief.pico.getGlobalBounds().intersects(floating_square3.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= floating_square3.getPosition().x) || (Thief.rect.left + 33 <= floating_square3.getPosition().x)) { //right
				Thief.rect.left = floating_square3.getPosition().x - 37;
				Thief.rect.left = floating_square3.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= floating_square3.getPosition().x + 50) || (Thief.rect.left >= floating_square3.getPosition().x + 50.5)) {//left
				Thief.rect.left = floating_square3.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > floating_square3.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < floating_square3.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}


		if (Thief.pico.getGlobalBounds().intersects(floating_square12.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= floating_square12.getPosition().x) || (Thief.rect.left + 33 <= floating_square12.getPosition().x)) { //right
				Thief.rect.left = floating_square12.getPosition().x - 37;
				Thief.rect.left = floating_square12.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= floating_square12.getPosition().x + 50) || (Thief.rect.left >= floating_square12.getPosition().x + 50.5)) {//left
				Thief.rect.left = floating_square12.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > floating_square12.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < floating_square12.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}


	}



	//floating squares
	if (Thief.pico.getGlobalBounds().intersects(floating_square.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square.getPosition().x) || (Thief.rect.left + 33 <= floating_square.getPosition().x)) { //right
			Thief.rect.left = floating_square.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= floating_square.getPosition().x + 50) || (Thief.rect.left >= floating_square.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < floating_square.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(floating_square1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square1.getPosition().x) || (Thief.rect.left + 33 <= floating_square1.getPosition().x)) { //right
			Thief.rect.left = floating_square1.getPosition().x - 37;
			Thief.rect.left = floating_square1.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square1.getPosition().x + 50) || (Thief.rect.left >= floating_square1.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square1.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(floating_square2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square2.getPosition().x) || (Thief.rect.left + 33 <= floating_square2.getPosition().x)) { //right
			Thief.rect.left = floating_square2.getPosition().x - 37;
			Thief.rect.left = floating_square2.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square2.getPosition().x + 50) || (Thief.rect.left >= floating_square2.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square2.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square2.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square2.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(floating_square5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square5.getPosition().x) || (Thief.rect.left + 33 <= floating_square5.getPosition().x)) { //right
			Thief.rect.left = floating_square5.getPosition().x - 37;
			Thief.rect.left = floating_square5.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square5.getPosition().x + 50) || (Thief.rect.left >= floating_square5.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square5.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square5.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square5.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}
	if (Thief.pico.getGlobalBounds().intersects(floating_square6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square6.getPosition().x) || (Thief.rect.left + 33 <= floating_square6.getPosition().x)) { //right
			Thief.rect.left = floating_square6.getPosition().x - 37;
			Thief.rect.left = floating_square6.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square6.getPosition().x + 50) || (Thief.rect.left >= floating_square6.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square6.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square6.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square6.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(floating_square7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square7.getPosition().x) || (Thief.rect.left + 33 <= floating_square7.getPosition().x)) { //right
			Thief.rect.left = floating_square7.getPosition().x - 37;
			Thief.rect.left = floating_square7.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square7.getPosition().x + 50) || (Thief.rect.left >= floating_square7.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square7.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square7.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square7.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(floating_square8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square8.getPosition().x) || (Thief.rect.left + 33 <= floating_square8.getPosition().x)) { //right
			Thief.rect.left = floating_square8.getPosition().x - 37;
			Thief.rect.left = floating_square8.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square8.getPosition().x + 50) || (Thief.rect.left >= floating_square8.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square8.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square8.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square8.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(floating_square9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square9.getPosition().x) || (Thief.rect.left + 33 <= floating_square9.getPosition().x)) { //right
			Thief.rect.left = floating_square9.getPosition().x - 37;
			Thief.rect.left = floating_square9.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square9.getPosition().x + 50) || (Thief.rect.left >= floating_square9.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square9.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square9.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square9.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(floating_square10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= floating_square10.getPosition().x) || (Thief.rect.left + 33 <= floating_square10.getPosition().x)) { //right
			Thief.rect.left = floating_square10.getPosition().x - 37;
			Thief.rect.left = floating_square10.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= floating_square10.getPosition().x + 50) || (Thief.rect.left >= floating_square10.getPosition().x + 50.5)) {//left
			Thief.rect.left = floating_square10.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > floating_square10.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < floating_square10.getPosition().y) {//jump

				Thief.onground = true;



			}

		}



	}
	//lasers
	if (maskon == 0) {
		for (int i = 0; i < 5; i++) {
			if (Thief.pico.getGlobalBounds().intersects(laser1[i].getGlobalBounds())) {
				dead[0] = true;
				burn = true;
			}
		}
	}
	if (maskon == 0) {
		for (int i = 0; i < 5; i++) {
			if (Thief.pico.getGlobalBounds().intersects(laser2[i].getGlobalBounds())) {
				dead[0] = true;
				burn = true;
			}
		}
	}
	//movingwalls
	if (Thief.pico.getGlobalBounds().intersects(movingwall1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= movingwall1.getPosition().x) || (Thief.rect.left + 33 <= movingwall1.getPosition().x)) { //right
			Thief.rect.left = movingwall1.getPosition().x - 37;
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(movingwall2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= movingwall2.getPosition().x) || (Thief.rect.left + 33 <= movingwall2.getPosition().x)) {			//right
			Thief.rect.left = movingwall2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= movingwall2.getPosition().x + 61.5) || (Thief.rect.left >= movingwall2.getPosition().x + 62)) {		//left
			Thief.rect.left = movingwall2.getPosition().x + 64;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > movingwall2.getPosition().y) {		//down
				Thief.rect.top = movingwall2.getPosition().y + 236.4;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > movingwall2.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = movingwall2.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}



	//block
	if (Thief.pico.getGlobalBounds().intersects(block.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= block.getPosition().x) || (Thief.rect.left + 33 <= block.getPosition().x)) {			//right
			Thief.rect.left = block.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= block.getPosition().x + 85.1) || (Thief.rect.left >= block.getPosition().x + 85.6)) {		//left
			Thief.rect.left = block.getPosition().x + 87.6;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > block.getPosition().y) {		//down
				Thief.rect.top = block.getPosition().y + 95.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > block.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = block.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	//wall

	if (Thief.pico.getGlobalBounds().intersects(wall7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall7.getPosition().x) || (Thief.rect.left + 33 <= wall7.getPosition().x)) {			//right
			Thief.rect.left = wall7.getPosition().x - 36;
		}
	}






	//buttons
	if (Thief.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {

		if (Thief.rect.top < button1.getPosition().y) {			//jump
			Thief.onground = true;
			button_fakeispressed1 = true;
			button1.setScale(0, 0);
		}
		dead[0] = true;
		burn = true;
	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {

		if (Thief.rect.top < buttonp1.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp1.getPosition().y - 48.5;
			Thief.onground = true;
			button_fakeispressed1 = true;
			button1.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button2.getGlobalBounds())) {

		if (Thief.rect.top < button2.getPosition().y) {			//jump
			Thief.onground = true;
			button_fakeispressed2 = true;
			button1.setScale(0, 0);
		}
		dead[0] = true;
		burn = true;
	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {

		if (Thief.rect.top < buttonp2.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp2.getPosition().y - 48.5;
			Thief.onground = true;
			button_fakeispressed2 = true;
			button2.setScale(0, 0);
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {

		if (Thief.rect.top < button3.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforground = true;
			button3.setScale(0, 0);

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(button4.getGlobalBounds())) {

		if (Thief.rect.top < button4.getPosition().y) {			//jump
			Thief.onground = true;
			button_fakeispressed3 = true;
			button4.setScale(0, 0);
		}
		dead[0] = true;
		burn = true;
	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp4.getGlobalBounds())) {

		if (Thief.rect.top < buttonp4.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp4.getPosition().y - 48.5;
			Thief.onground = true;
			button_fakeispressed3 = true;
			button4.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {

		if (Thief.rect.top < buttonp3.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp3.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforground = true;
			button3.setScale(0, 0);

		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button5.getGlobalBounds())) {

		if (Thief.rect.top < button5.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button5.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {

		if (Thief.rect.top < buttonp5.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp5.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button5.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button6.getGlobalBounds())) {

		if (Thief.rect.top < button6.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforwall = true;
			button6.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp6.getGlobalBounds())) {

		if (Thief.rect.top < buttonp6.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp6.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforwall = true;
			button6.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button7.getGlobalBounds())) {

		if (Thief.rect.top < button7.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed2 = true;
			button7.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp7.getGlobalBounds())) {

		if (Thief.rect.top < buttonp7.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp7.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed2 = true;
			button7.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button8.getGlobalBounds())) {

		if (Thief.rect.top < button8.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforwall2 = true;
			button8.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp8.getGlobalBounds())) {

		if (Thief.rect.top < buttonp8.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp8.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforwall2 = true;
			button8.setScale(0, 0);
		}


	}


}



void Thief_collision6(Player& Thief, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4,Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex11, Sprite& button, Sprite& button2, Sprite& button3, Sprite& button4, Sprite& button5, Sprite& buttonp, Sprite& buttonp2, Sprite& buttonp3, Sprite& buttonp4, Sprite& buttonp5, Sprite wall1, Sprite wall3, Sprite wall4, Sprite wall6, RectangleShape laser1[], Sprite teleporter1, Sprite teleporter2, Sprite& fake_wall1, Sprite& fake_wall2, Sprite death) {

	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}

	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
			Thief.rect.left = squares_2.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_2.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_2.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
			Thief.rect.left = squares_4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_4.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_4.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
			Thief.rect.left = squares_5.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_5.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_5.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_5.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	//lasers
	if (maskon == 0) {
		for (int i = 0; i < 5; i++) {
			if (Thief.pico.getGlobalBounds().intersects(laser1[i].getGlobalBounds())) {
				dead[0] = true;
				burn = true;
			}
		}
	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
		if ((Thief.rect.left >= groundtex.getPosition().x + 1570) || (Thief.rect.left >= groundtex.getPosition().x + 1571)) {//left
			Thief.rect.left = groundtex.getPosition().x + 1572;
		}
		else {

			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex.getPosition().y - 48;
				Thief.onground = true;
			}

		}
	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
		if ((Thief.rect.left >= groundtex2.getPosition().x + 980) || (Thief.rect.left >= groundtex2.getPosition().x + 981)) {//left
			Thief.rect.left = groundtex2.getPosition().x + 982.5;
		}
		else {

			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex2.getPosition().y - 48) {//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex2.getPosition().y - 48;
				Thief.onground = true;
			}

		}
	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex4.getPosition().x) || (Thief.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
			Thief.rect.left = groundtex4.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex4.getPosition().x + 2235.1) || (Thief.rect.left >= groundtex4.getPosition().x + 2236.1)) {		//left
			Thief.rect.left = groundtex4.getPosition().x + 2240.1;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;

			if (Thief.rect.top > groundtex4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex4.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
		
			if (Thief.rect.top > groundtex5.getPosition().y + 50) { //down
				Thief.rect.top = groundtex5.getPosition().y + 55;
				Thief.onground = false;
				Thief.move_y += 0.007;

			}
		
	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex6.getPosition().x) || (Thief.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
			Thief.rect.left = groundtex6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex6.getPosition().x + 1775.29) || (Thief.rect.left >= groundtex6.getPosition().x + 1776.29)) {		//left
			Thief.rect.left = groundtex6.getPosition().x + 1780.29;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;

			if (Thief.rect.top > groundtex6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex7.getPosition().x) || (Thief.rect.left + 33 <= groundtex7.getPosition().x)) {			//right
			Thief.rect.left = groundtex7.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex7.getPosition().x + 980.5) || (Thief.rect.left >= groundtex7.getPosition().x + 981.5)) {		//left
			Thief.rect.left = groundtex7.getPosition().x + 982.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;

			if (Thief.rect.top > groundtex7.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex7.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex8.getPosition().x) || (Thief.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
			Thief.rect.left = groundtex8.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex8.getPosition().x + 1251) || (Thief.rect.left >= groundtex8.getPosition().x + 1252)) {		//left
			Thief.rect.left = groundtex8.getPosition().x + 1254.063;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;

			if (Thief.rect.top > groundtex8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex8.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex10.getPosition().x) || (Thief.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
			Thief.rect.left = groundtex10.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex10.getPosition().x + 1245.74) || (Thief.rect.left >= groundtex10.getPosition().x + 1246.74)) {		//left
			Thief.rect.left = groundtex10.getPosition().x + 1249.74;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;

			if (Thief.rect.top > groundtex10.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex10.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(groundtex11.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex11.getPosition().x) || (Thief.rect.left + 33 <= groundtex11.getPosition().x)) {			//right
			Thief.rect.left = groundtex11.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex11.getPosition().x + 1175) || (Thief.rect.left >= groundtex11.getPosition().x + 1176)) {		//left
			Thief.rect.left = groundtex11.getPosition().x + 1179;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;

			if (Thief.rect.top > groundtex11.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex11.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	


	if (Thief.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

		if (Thief.rect.top < button.getPosition().x) {			//jump
			Thief.onground = true;
			button_ispressedforwall = true;
			button.setScale(0, 0);
		}
	}


	if (Thief.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

		if (Thief.rect.top >= buttonp.getPosition().x + 70) {			//jump
			Thief.rect.top = buttonp.getPosition().x + 72.9963;
			Thief.onground = true;
			button_ispressedforwall = true;
			button.setScale(0, 0);
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(button2.getGlobalBounds())) {

		if (Thief.rect.top < button2.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforground = true;
			button2.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {

		if (Thief.rect.top < buttonp2.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp2.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforground = true;
			button2.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button3.getGlobalBounds())) {

		if (Thief.rect.top < button3.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button3.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp3.getGlobalBounds())) {

		if (Thief.rect.top < buttonp3.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp3.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button3.setScale(0, 0);
		}


	}






	if (Thief.pico.getGlobalBounds().intersects(button5.getGlobalBounds())) {

		if (Thief.rect.top < button5.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed2 = true;
			button5.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {

		if (Thief.rect.top < buttonp5.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp5.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed2 = true;
			button5.setScale(0, 0);
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(wall3.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall3.getPosition().x) || (Thief.rect.left + 33 <= wall3.getPosition().x)) { //right to player
			Thief.rect.left = wall3.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall3.getPosition().x + 115.65) || (Thief.rect.left >= wall3.getPosition().x + 116.65)) {//left to player
			Thief.rect.left = wall3.getPosition().x + 120.65;
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(wall4.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall4.getPosition().x) || (Thief.rect.left + 33 <= wall4.getPosition().x)) { //right to player
			Thief.rect.left = wall4.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall4.getPosition().x + 115.65) || (Thief.rect.left >= wall4.getPosition().x + 116.65)) {//left to player
			Thief.rect.left = wall4.getPosition().x + 120.65;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;

			if (Thief.rect.top > wall4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall4.getPosition().y - 30;
				Thief.onground = true;
			}
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(wall6.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall6.getPosition().x) || (Thief.rect.left + 33 <= wall6.getPosition().x)) { //right to player
			Thief.rect.left = wall6.getPosition().x - 37;

		}
	}

}



void Thief_collision7(Player& Thief, RectangleShape laser, RectangleShape laser2, RectangleShape laser3, RectangleShape laser5, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite wall_6, Sprite wall_7, Sprite wall_8, Sprite wall_9, Sprite wall_10, Sprite wall_11, Sprite wall_12, Sprite& button, Sprite& buttonp, Sprite& button1, Sprite& buttonp1, Sprite& button2, Sprite& buttonp2, Sprite& button3, Sprite& buttonp3, Sprite& button4, Sprite& buttonp4, Sprite& button5, Sprite& buttonp5, Sprite death) {

	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}


	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 37;
			Thief.rect.left = squares_1.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 72) || (Thief.rect.left >= squares_1.getPosition().x + 73)) {//left
			Thief.rect.left = squares_1.getPosition().x + 75.6;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
			Thief.rect.left = squares_2.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_2.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_2.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
			Thief.rect.left = squares_4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_4.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_4.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_1.getPosition().x) || (Thief.rect.left + 33 <= wall_1.getPosition().x)) { //right to player
			Thief.rect.left = wall_1.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_1.getPosition().x + 315) || (Thief.rect.left >= wall_1.getPosition().x + 316)) {//left to player
			Thief.rect.left = wall_1.getPosition().x + 318;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

		if (Thief.rect.top < wall_1.getPosition().y - 55.5) {//jump
			Thief.move_y = 0;

			Thief.onground = true;
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
		if (Thief.rect.top > groundtex.getPosition().y - 48) {//jump
			Thief.move_y = 0;
			Thief.rect.top = groundtex.getPosition().y - 48;
			Thief.onground = true;
		}
	}




	if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex3.getPosition().x) || (Thief.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
			Thief.rect.left = groundtex3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex3.getPosition().x + 585) || (Thief.rect.left >= groundtex3.getPosition().x + 586.5)) {		//left
			Thief.rect.left = groundtex3.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex3.getPosition().y) {		//down
				Thief.rect.top = groundtex3.getPosition().y + 80;
				Thief.move_y += 0.0007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex3.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex3.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex4.getPosition().x) || (Thief.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
			Thief.rect.left = groundtex4.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex4.getPosition().x + 585) || (Thief.rect.left >= groundtex4.getPosition().x + 586.5)) {		//left
			Thief.rect.left = groundtex4.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex4.getPosition().y) {		//down
				Thief.rect.top = groundtex4.getPosition().y + 70;
				Thief.move_y += 0.0007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex4.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex5.getPosition().x) || (Thief.rect.left + 33 <= groundtex5.getPosition().x)) {			//right
			Thief.rect.left = groundtex5.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex5.getPosition().x + 780) || (Thief.rect.left >= groundtex5.getPosition().x + 780.5)) {		//left
			Thief.rect.left = groundtex5.getPosition().x + 786;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex5.getPosition().y) {		//down
				Thief.rect.top = groundtex5.getPosition().y + 80;
				Thief.move_y += 0.0007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex5.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}



	if (Thief.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex6.getPosition().x) || (Thief.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
			Thief.rect.left = groundtex6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex6.getPosition().x + 585) || (Thief.rect.left >= groundtex6.getPosition().x + 586.5)) {		//left
			Thief.rect.left = groundtex6.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex6.getPosition().y) {		//down
				Thief.rect.top = groundtex6.getPosition().y + 70;
				Thief.move_y += 0.0007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex8.getPosition().x) || (Thief.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
			Thief.rect.left = groundtex8.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex8.getPosition().x + groundtex8.getGlobalBounds().width) || (Thief.rect.left >= groundtex8.getPosition().x + groundtex8.getGlobalBounds().width + 1)) {//left
			Thief.rect.left = groundtex8.getPosition().x + groundtex8.getGlobalBounds().width + 6;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex8.getPosition().y) {		//down
				Thief.rect.top = groundtex8.getPosition().y + 70;
				Thief.move_y += 0.0007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex8.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}



	if (Thief.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex9.getPosition().x) || (Thief.rect.left + 33 <= groundtex9.getPosition().x)) {			//right
			Thief.rect.left = groundtex9.getPosition().x - 36;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex9.getPosition().y) {		//down
				Thief.rect.top = groundtex9.getPosition().y + 70;
				Thief.move_y += 0.0007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex9.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex9.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex10.getPosition().x) || (Thief.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
			Thief.rect.left = groundtex10.getPosition().x - 36;
		}

		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex10.getPosition().y) {		//down
				Thief.rect.top = groundtex10.getPosition().y + 70;
				Thief.move_y += 0.0007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex10.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex10.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

		if (Thief.rect.top < button.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforwall = true;
			button.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

		if (Thief.rect.top < buttonp.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforwall = true;
			button.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {

		if (Thief.rect.top < button1.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforwall2 = true;
			button1.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {

		if (Thief.rect.top < buttonp1.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp1.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforwall2 = true;
			button1.setScale(0, 0);
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(button4.getGlobalBounds())) {

		if (Thief.rect.top < button4.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button4.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp4.getGlobalBounds())) {

		if (Thief.rect.top < buttonp4.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp4.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button4.setScale(0, 0);
		}


	}
	if (Thief.pico.getGlobalBounds().intersects(buttonp5.getGlobalBounds())) {

		if (Thief.rect.top < buttonp5.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp5.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforground2 = true;
			button5.setScale(0, 0);
		}


	}


	if (maskon == 0) {
		if (Thief.pico.getGlobalBounds().intersects(laser.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser2.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser3.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser5.getGlobalBounds())) {

			dead[0] = true;
			burn = true;
		}
	}


	if (Thief.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_3.getPosition().x) || (Thief.rect.left + 33 <= wall_3.getPosition().x)) { //right to player
			Thief.rect.left = wall_3.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_3.getPosition().x + 185) || (Thief.rect.left >= wall_3.getPosition().x + 186)) {//left to player
			Thief.rect.left = wall_3.getPosition().x + 190.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_3.getPosition().y) {		//down
				Thief.rect.top = wall_3.getPosition().y + 645;
				Thief.move_y += 0.0007;
				Thief.onground = false;
			}
		}
	}



	if (Thief.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_4.getPosition().x) || (Thief.rect.left + 33 <= wall_4.getPosition().x)) { //right to player
			Thief.rect.left = wall_4.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_4.getPosition().x + 60) || (Thief.rect.left >= wall_4.getPosition().x + 61)) {//left to player
			Thief.rect.left = wall_4.getPosition().x + 63.5;

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_5.getPosition().x) || (Thief.rect.left + 33 <= wall_5.getPosition().x)) { //right to player
			Thief.rect.left = wall_5.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_5.getPosition().x + 185) || (Thief.rect.left >= wall_5.getPosition().x + 186)) {//left to player
			Thief.rect.left = wall_5.getPosition().x + 190.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_5.getPosition().y) {		//down
				Thief.rect.top = wall_5.getPosition().y + 645;
				Thief.move_y += 0.0007;
				Thief.onground = false;
			}
		}
	}



	if (Thief.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_6.getPosition().x) || (Thief.rect.left + 33 <= wall_6.getPosition().x)) { //right to player
			Thief.rect.left = wall_6.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_6.getPosition().x + 60) || (Thief.rect.left >= wall_6.getPosition().x + 61)) {//left to player
			Thief.rect.left = wall_6.getPosition().x + 63.5;

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(wall_7.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_7.getPosition().x) || (Thief.rect.left + 33 <= wall_7.getPosition().x)) { //right to player
			Thief.rect.left = wall_7.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_7.getPosition().x + 60) || (Thief.rect.left >= wall_7.getPosition().x + 61)) {//left to player
			Thief.rect.left = wall_7.getPosition().x + 63.5;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_7.getPosition().y) {		//down
				Thief.rect.top = wall_7.getPosition().y + 80;
				Thief.move_y += 0.0007;
				Thief.onground = false;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(wall_8.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_8.getPosition().x) || (Thief.rect.left + 33 <= wall_8.getPosition().x)) { //right to player
			Thief.rect.left = wall_8.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_8.getPosition().x + 60) || (Thief.rect.left >= wall_8.getPosition().x + 61)) {//left to player
			Thief.rect.left = wall_8.getPosition().x + 63.5;

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_9.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_9.getPosition().x) || (Thief.rect.left + 33 <= wall_9.getPosition().x)) { //right to player
			Thief.rect.left = wall_9.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_9.getPosition().x + 60) || (Thief.rect.left >= wall_9.getPosition().x + 61)) {//left to player
			Thief.rect.left = wall_9.getPosition().x + 63.5;

		}

	}
	if (Thief.pico.getGlobalBounds().intersects(wall_10.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_10.getPosition().x) || (Thief.rect.left + 33 <= wall_10.getPosition().x)) { //right to player
			Thief.rect.left = wall_10.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_10.getPosition().x + 185) || (Thief.rect.left >= wall_10.getPosition().x + 186)) {//left to player
			Thief.rect.left = wall_10.getPosition().x + 190.5;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

		if (Thief.rect.top < wall_10.getPosition().y - 55.5) {//jump
			Thief.move_y = 0;

			Thief.onground = true;
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_11.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_11.getPosition().x) || (Thief.rect.left + 33 <= wall_11.getPosition().x)) { //right to player
			Thief.rect.left = wall_11.getPosition().x - 37;

		}
		else if ((Thief.rect.left >= wall_11.getPosition().x + 185) || (Thief.rect.left >= wall_11.getPosition().x + 186)) {//left to player
			Thief.rect.left = wall_11.getPosition().x + 190.5;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}

		if (Thief.rect.top < wall_11.getPosition().y - 55.5) {//jump
			Thief.move_y = 0;

			Thief.onground = true;
		}

	}



	if (Thief.pico.getGlobalBounds().intersects(wall_12.getGlobalBounds())) {
		if ((Thief.rect.left + 31 <= wall_12.getPosition().x) || (Thief.rect.left + 33 <= wall_12.getPosition().x)) { //right to player
			Thief.rect.left = wall_12.getPosition().x - 37;

		}


	}
}



void Thief_collision8(Player& Thief, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_7, Sprite squares_8, Sprite squares_9, Sprite squares_10, Sprite squares_11, Sprite squares_12, RectangleShape laser, RectangleShape laser1, RectangleShape laser2, RectangleShape laser3, RectangleShape laser4, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite wall_6, Sprite wall_8, Sprite wall_9, Sprite wall_10, Sprite platform1, Sprite platform2, Sprite& button, Sprite& buttonp, Sprite& button1, Sprite& buttonp1,Sprite& buttonp2, Sprite death, Sprite squares_4, Sprite squares_5, Sprite squares_6) {


	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}

	if (button_ispressed2) {
		
		if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
				Thief.rect.left = squares_4.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_4.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_4.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}


		if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
				Thief.rect.left = squares_5.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_5.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_5.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_5.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_6.getPosition().x) || (Thief.rect.left + 33 <= squares_6.getPosition().x)) { //right
				Thief.rect.left = squares_6.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_6.getPosition().x + 50) || (Thief.rect.left >= squares_6.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_6.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_6.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_6.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
	}

	//groundtex
	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex.getPosition().x) || (Thief.rect.left + 33 <= groundtex.getPosition().x)) {			//right
			Thief.rect.left = groundtex.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex.getPosition().x + 1373 || (Thief.rect.left >= groundtex.getPosition().x + 1373.5))) {		//left
			Thief.rect.left = groundtex.getPosition().x + 1375.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex.getPosition().y) {		//down
				Thief.rect.top = groundtex.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex2.getPosition().x) || (Thief.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
			Thief.rect.left = groundtex2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex2.getPosition().x + 3533.5 || (Thief.rect.left >= groundtex2.getPosition().x + 3534))) {		//left
			Thief.rect.left = groundtex2.getPosition().x + 3537;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex2.getPosition().y) {		//down
				Thief.rect.top = groundtex2.getPosition().y + 120.5;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex2.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex2.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex3.getPosition().x) || (Thief.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
			Thief.rect.left = groundtex3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex3.getPosition().x + 3533.5 || (Thief.rect.left >= groundtex3.getPosition().x + 3534))) {		//left
			Thief.rect.left = groundtex3.getPosition().x + 3537;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex3.getPosition().y) {		//down
				Thief.rect.top = groundtex3.getPosition().y + 120.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex3.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex3.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex4.getPosition().x) || (Thief.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
			Thief.rect.left = groundtex4.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex4.getPosition().x + 586 || (Thief.rect.left >= groundtex4.getPosition().x + 586.5))) {		//left
			Thief.rect.left = groundtex4.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex4.getPosition().y) {		//down
				Thief.rect.top = groundtex4.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex4.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex5.getPosition().x) || (Thief.rect.left + 33 <= groundtex5.getPosition().x)) {			//right
			Thief.rect.left = groundtex5.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex5.getPosition().x + 251.95 || (Thief.rect.left >= groundtex5.getPosition().x + 252.45))) {		//left
			Thief.rect.left = groundtex5.getPosition().x + 255.45;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex5.getPosition().y) {		//down
				Thief.rect.top = groundtex5.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex5.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {

		if ((Thief.rect.left + 32 <= groundtex6.getPosition().x) || (Thief.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
			Thief.rect.left = groundtex6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex6.getPosition().x + 2758.5 || (Thief.rect.left >= groundtex6.getPosition().x + 2749))) {		//left
			Thief.rect.left = groundtex6.getPosition().x + 2751;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex6.getPosition().y) {		//down
				Thief.rect.top = groundtex6.getPosition().y + 200;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
		if ((Thief.rect.left >= groundtex7.getPosition().x + 586 || (Thief.rect.left >= groundtex7.getPosition().x + 586.5))) {		//left
			Thief.rect.left = groundtex7.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex7.getPosition().y) {		//down
				Thief.rect.top = groundtex7.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex7.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex7.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {

		if ((Thief.rect.left + 32 <= groundtex8.getPosition().x) || (Thief.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
			Thief.rect.left = groundtex8.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex8.getPosition().x + 602.72 || (Thief.rect.left >= groundtex8.getPosition().x + 603.22))) {		//left
			Thief.rect.left = groundtex8.getPosition().x + 605.22;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex8.getPosition().y) {		//down
				Thief.rect.top = groundtex8.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex8.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex9.getPosition().x) || (Thief.rect.left + 33 <= groundtex9.getPosition().x)) {			//right
			Thief.rect.left = groundtex9.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex9.getPosition().x + 1019.3 || (Thief.rect.left >= groundtex9.getPosition().x + 1019.8))) {		//left
			Thief.rect.left = groundtex9.getPosition().x + 1021.8;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex9.getPosition().y) {		//down
				Thief.rect.top = groundtex9.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex9.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex9.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	//lasers
	if (maskon == 0) {

		if (Thief.pico.getGlobalBounds().intersects(laser.getGlobalBounds())) {
			dead[0] = true;
			burn = true;
		}

		if (Thief.pico.getGlobalBounds().intersects(laser1.getGlobalBounds())) {
			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser2.getGlobalBounds())) {
			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser3.getGlobalBounds())) {
			dead[0] = true;
			burn = true;
		}
		if (Thief.pico.getGlobalBounds().intersects(laser4.getGlobalBounds())) {
			dead[0] = true;
			burn = true;
		}



	}

	//squares   
	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
			Thief.rect.left = squares_2.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_2.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_2.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_7.getPosition().x) || (Thief.rect.left + 33 <= squares_7.getPosition().x)) { //right
			Thief.rect.left = squares_7.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_7.getPosition().x + 50) || (Thief.rect.left >= squares_7.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_7.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_7.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_7.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_9.getPosition().x) || (Thief.rect.left + 33 <= squares_9.getPosition().x)) { //right
			Thief.rect.left = squares_9.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_9.getPosition().x + 50) || (Thief.rect.left >= squares_9.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_9.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_9.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_9.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_10.getPosition().x) || (Thief.rect.left + 33 <= squares_10.getPosition().x)) { //right
			Thief.rect.left = squares_10.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_10.getPosition().x + 50) || (Thief.rect.left >= squares_10.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_10.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_10.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_10.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_11.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_11.getPosition().x) || (Thief.rect.left + 33 <= squares_11.getPosition().x)) { //right
			Thief.rect.left = squares_11.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_11.getPosition().x + 50) || (Thief.rect.left >= squares_11.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_11.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_11.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_11.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (easy) {
		if (Thief.pico.getGlobalBounds().intersects(squares_12.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_12.getPosition().x) || (Thief.rect.left + 33 <= squares_12.getPosition().x)) { //right
				Thief.rect.left = squares_12.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_12.getPosition().x + 50) || (Thief.rect.left >= squares_12.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_12.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_12.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_12.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(squares_8.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_8.getPosition().x) || (Thief.rect.left + 33 <= squares_8.getPosition().x)) { //right
				Thief.rect.left = squares_8.getPosition().x - 36;
			}

			else if ((Thief.rect.left >= squares_8.getPosition().x + 50) || (Thief.rect.left >= squares_8.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_8.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_8.getPosition().y + 50) { //down
					Thief.onground = false;
					Thief.move_y += 0.007;

				}

				else if (Thief.rect.top < squares_8.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
	}


	//walls
	if (Thief.pico.getGlobalBounds().intersects(wall_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_2.getPosition().x) || (Thief.rect.left + 33 <= wall_2.getPosition().x)) { //right
			Thief.rect.left = wall_2.getPosition().x - 36;
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_3.getPosition().x) || (Thief.rect.left + 33 <= wall_3.getPosition().x)) { //right
			Thief.rect.left = wall_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= wall_3.getPosition().x + 315) || (Thief.rect.left >= wall_3.getPosition().x + 315.5)) {//left
			Thief.rect.left = wall_3.getPosition().x + 317.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < wall_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_5.getPosition().x) || (Thief.rect.left + 33 <= wall_5.getPosition().x)) {			//right
			Thief.rect.left = wall_5.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= wall_5.getPosition().x + 315 || (Thief.rect.left >= wall_5.getPosition().x + 315.5))) {		//left
			Thief.rect.left = wall_5.getPosition().x + 317.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_5.getPosition().y) {		//down
				Thief.rect.top = wall_5.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_5.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_6.getPosition().x) || (Thief.rect.left + 33 <= wall_6.getPosition().x)) {			//right
			Thief.rect.left = wall_6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= wall_6.getPosition().x + 315 || (Thief.rect.left >= wall_6.getPosition().x + 315.5))) {		//left
			Thief.rect.left = wall_6.getPosition().x + 317.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_6.getPosition().y) {		//down
				Thief.rect.top = wall_6.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_9.getPosition().x) || (Thief.rect.left + 33 <= wall_9.getPosition().x)) {			//right
			Thief.rect.left = wall_9.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= wall_9.getPosition().x + 91.75 || (Thief.rect.left >= wall_9.getPosition().x + 92.25))) {		//left
			Thief.rect.left = wall_9.getPosition().x + 95.25;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_9.getPosition().y) {		//down
				Thief.rect.top = wall_9.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_9.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_9.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(wall_10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_10.getPosition().x) || (Thief.rect.left + 33 <= wall_10.getPosition().x)) {			//right
			Thief.rect.left = wall_10.getPosition().x - 36;
		}
	}


	//platform

	if (Thief.pico.getGlobalBounds().intersects(platform1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= platform1.getPosition().x) || (Thief.rect.left + 33 <= platform1.getPosition().x)) {			//right
			Thief.rect.left = platform1.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= platform1.getPosition().x + 152.8 || (Thief.rect.left >= platform1.getPosition().x + 153.2))) {		//left
			Thief.rect.left = platform1.getPosition().x + 156.2;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > platform1.getPosition().y) {		//down
				Thief.rect.top = platform1.getPosition().y + 19;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > platform1.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = platform1.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(platform2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= platform2.getPosition().x) || (Thief.rect.left + 33 <= platform2.getPosition().x)) {			//right
			Thief.rect.left = platform2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= platform2.getPosition().x + 237.9 || (Thief.rect.left >= platform2.getPosition().x + 238.4))) {		//left
			Thief.rect.left = platform2.getPosition().x + 241.302;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > platform2.getPosition().y) {		//down
				Thief.rect.top = platform2.getPosition().y + 19;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > platform2.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = platform2.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}



	//buttons
	if (Thief.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

		if (Thief.rect.top < button.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

		if (Thief.rect.top < buttonp.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {

		if (Thief.rect.top < button1.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforwall = true;
			button1.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {

		if (Thief.rect.top < buttonp1.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp1.getPosition().y - 30;
			Thief.onground = true;
			button_ispressedforwall = true;
			button1.setScale(0, 0);
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(buttonp2.getGlobalBounds())) {

		if (Thief.rect.top < buttonp2.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp2.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed2 = true;
			
		}


	}


}



void Thief_collision9(Player& Thief, Sprite groundtex, Sprite groundtex2, Sprite groundtex3, Sprite groundtex4, Sprite groundtex5, Sprite groundtex6, Sprite groundtex7, Sprite groundtex8, Sprite groundtex9, Sprite groundtex10, Sprite groundtex11, Sprite groundtex12, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, RectangleShape laser1, RectangleShape laser2[], RectangleShape laser3, RectangleShape laser4, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite wall_6, Sprite wall_7, Sprite wall_8, Sprite wall_9, Sprite wall_10, Sprite wall_11, Sprite wall_12, Sprite wall_13, Sprite& button1, Sprite& buttonp1, Sprite death) {

	if (Thief.pico.getGlobalBounds().intersects(death.getGlobalBounds())) {
		dead[0] = true;
		fell = true;
	}

	//groundtex

	if (Thief.pico.getGlobalBounds().intersects(groundtex.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex.getPosition().x) || (Thief.rect.left + 33 <= groundtex.getPosition().x)) {			//right
			Thief.rect.left = groundtex.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex.getPosition().x + 1844.6 || (Thief.rect.left >= groundtex.getPosition().x + 1845.1))) {		//left
			Thief.rect.left = groundtex.getPosition().x + 1847.1;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex.getPosition().y) {		//down
				Thief.rect.top = groundtex.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex2.getPosition().x) || (Thief.rect.left + 33 <= groundtex2.getPosition().x)) {			//right
			Thief.rect.left = groundtex2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex2.getPosition().x + 1844.6 || (Thief.rect.left >= groundtex2.getPosition().x + 1845.1))) {		//left
			Thief.rect.left = groundtex2.getPosition().x + 1847.1;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex2.getPosition().y) {		//down
				Thief.rect.top = groundtex2.getPosition().y + 91.5;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex2.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex2.getPosition().y - 30;
				Thief.onground = true;
			}
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex3.getPosition().x) || (Thief.rect.left + 33 <= groundtex3.getPosition().x)) {			//right
			Thief.rect.left = groundtex3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex3.getPosition().x + 233.3 || (Thief.rect.left >= groundtex3.getPosition().x + 233.8))) {		//left
			Thief.rect.left = groundtex3.getPosition().x + 235.8;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex3.getPosition().y) {		//down
				Thief.rect.top = groundtex3.getPosition().y + 73.1;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex3.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex3.getPosition().y - 30;
				Thief.onground = true;
			}
		}


	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex4.getPosition().x) || (Thief.rect.left + 33 <= groundtex4.getPosition().x)) {			//right
			Thief.rect.left = groundtex4.getPosition().x - 36;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex4.getPosition().y) {		//down
				Thief.rect.top = groundtex4.getPosition().y + 50.5;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex4.getPosition().y - 30;
				Thief.onground = true;
			}

		}


	}



	if (Thief.pico.getGlobalBounds().intersects(groundtex5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex5.getPosition().x) || (Thief.rect.left + 33 <= groundtex5.getPosition().x)) {			//right
			Thief.rect.left = groundtex5.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex5.getPosition().x + 1451.6 || (Thief.rect.left >= groundtex5.getPosition().x + 1452.1))) {		//left
			Thief.rect.left = groundtex5.getPosition().x + 1454.1;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex5.getPosition().y) {		//down
				Thief.rect.top = groundtex5.getPosition().y + 50.5;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex5.getPosition().y - 30;
				Thief.onground = true;
			}

		}


	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex6.getPosition().x) || (Thief.rect.left + 33 <= groundtex6.getPosition().x)) {			//right
			Thief.rect.left = groundtex6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex6.getPosition().x + 194 || (Thief.rect.left >= groundtex6.getPosition().x + 194.5))) {		//left
			Thief.rect.left = groundtex6.getPosition().x + 196.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex6.getPosition().y) {		//down
				Thief.rect.top = groundtex6.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex7.getPosition().x) || (Thief.rect.left + 33 <= groundtex7.getPosition().x)) {			//right
			Thief.rect.left = groundtex7.getPosition().x - 36;
		}
		
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex7.getPosition().y) {		//down
				Thief.rect.top = groundtex7.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex7.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex7.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(groundtex8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex8.getPosition().x) || (Thief.rect.left + 33 <= groundtex8.getPosition().x)) {			//right
			Thief.rect.left = groundtex8.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex8.getPosition().x + 264.76 || (Thief.rect.left >= groundtex8.getPosition().x + 265.24))) {		//left
			Thief.rect.left = groundtex8.getPosition().x + 267.24;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex8.getPosition().y) {		//down
				Thief.rect.top = groundtex8.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex8.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex9.getGlobalBounds())) {
		if (Thief.rect.top > groundtex9.getPosition().y - 48) {//jump
			Thief.move_y = 0;
			Thief.rect.top = groundtex9.getPosition().y - 48;
			Thief.onground = true;
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex10.getPosition().x) || (Thief.rect.left + 33 <= groundtex10.getPosition().x)) {			//right
			Thief.rect.left = groundtex10.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex10.getPosition().x + 410.15 || (Thief.rect.left >= groundtex10.getPosition().x + 410.65))) {		//left
			Thief.rect.left = groundtex10.getPosition().x + 412.65;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex10.getPosition().y) {		//down
				Thief.rect.top = groundtex10.getPosition().y + 91.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex10.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex10.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(groundtex11.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex11.getPosition().x) || (Thief.rect.left + 33 <= groundtex11.getPosition().x)) {			//right
			Thief.rect.left = groundtex11.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex11.getPosition().x + 541.412 || (Thief.rect.left >= groundtex11.getPosition().x + 541.912))) {		//left
			Thief.rect.left = groundtex11.getPosition().x + 543.912;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex11.getPosition().y) {		//down
				Thief.rect.top = groundtex11.getPosition().y + 60.5;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex11.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex11.getPosition().y - 30;
				Thief.onground = true;
			}

		}


	}

	if (Thief.pico.getGlobalBounds().intersects(groundtex12.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= groundtex12.getPosition().x) || (Thief.rect.left + 33 <= groundtex12.getPosition().x)) {			//right
			Thief.rect.left = groundtex12.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= groundtex12.getPosition().x + 508.4 || (Thief.rect.left >= groundtex12.getPosition().x + 508.9))) {		//left
			Thief.rect.left = groundtex12.getPosition().x + 510.9;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > groundtex12.getPosition().y) {		//down
				Thief.rect.top = groundtex12.getPosition().y + 61.5;
				Thief.move_y += 0.5;
				Thief.onground = false;

			}

			else if (Thief.rect.top > groundtex12.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = groundtex12.getPosition().y - 30;
				Thief.onground = true;
			}

		}


	}


	//squares

	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
			Thief.rect.left = squares_2.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_2.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_2.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_2.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
			Thief.rect.left = squares_4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_4.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_4.getPosition().y) {//jump

				Thief.onground = true;



			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
			Thief.rect.left = squares_5.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_5.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_5.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_5.getPosition().y) {//jump

				Thief.onground = true;



			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_6.getPosition().x) || (Thief.rect.left + 33 <= squares_6.getPosition().x)) { //right
			Thief.rect.left = squares_6.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_6.getPosition().x + 50) || (Thief.rect.left >= squares_6.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_6.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_6.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_6.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_7.getPosition().x) || (Thief.rect.left + 33 <= squares_7.getPosition().x)) { //right
			Thief.rect.left = squares_7.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_7.getPosition().x + 50) || (Thief.rect.left >= squares_7.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_7.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_7.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_7.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	//lasers
	if (maskon == 0) {
		if (laser1.getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {

			dead[0] = true;
			burn = true;

		}

		for (int i = 0; i < 5; i++) {
			if (laser2[i].getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {

				dead[0] = true;
				burn = true;
			}
		}
		if (laser3.getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {

			dead[0] = true;
			burn = true;

		}
		if (laser4.getGlobalBounds().intersects(Thief.pico.getGlobalBounds())) {

			dead[0] = true;
			burn = true;

		}
	}
	//walls

	if (Thief.pico.getGlobalBounds().intersects(wall_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_1.getPosition().x) || (Thief.rect.left + 33 <= wall_1.getPosition().x)) {			//right
			Thief.rect.left = wall_1.getPosition().x - 36;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}
	}

	if (Thief.pico.getGlobalBounds().intersects(wall_2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_2.getPosition().x) || (Thief.rect.left + 33 <= wall_2.getPosition().x)) {			//right
			Thief.rect.left = wall_2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= wall_2.getPosition().x + 60) || (Thief.rect.left >= wall_2.getPosition().x + 60.5)) {		//left
			Thief.rect.left = wall_2.getPosition().x + 63.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
		}
	}



	if (Thief.pico.getGlobalBounds().intersects(wall_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_3.getPosition().x) || (Thief.rect.left + 33 <= wall_3.getPosition().x)) {			//right
			Thief.rect.left = wall_3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= wall_3.getPosition().x + 60) || (Thief.rect.left >= wall_3.getPosition().x + 60.5)) {		//left
			Thief.rect.left = wall_3.getPosition().x + 63.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_3.getPosition().y) {		//down
				Thief.rect.top = wall_3.getPosition().y + 451.4;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_3.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_3.getPosition().y - 30;
				Thief.onground = true;
			}

		}


	}

	if (Thief.pico.getGlobalBounds().intersects(wall_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_4.getPosition().x) || (Thief.rect.left + 33 <= wall_4.getPosition().x)) {			//right
			Thief.rect.left = wall_4.getPosition().x - 36;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_4.getPosition().y) {		//down
				Thief.rect.top = wall_4.getPosition().y + 451.4;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_4.getPosition().y - 30;
				Thief.onground = true;
			}


		}


	}

	if (Thief.pico.getGlobalBounds().intersects(wall_5.getGlobalBounds())) {
		if ((Thief.rect.left >= wall_5.getPosition().x + 29.25) || (Thief.rect.left >= wall_5.getPosition().x + 29.75)) {		//left
			Thief.rect.left = wall_5.getPosition().x + 31.75;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_5.getPosition().y) {		//down
				Thief.rect.top = wall_5.getPosition().y + 451.4;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_5.getPosition().y - 30;
				Thief.onground = true;
			}


		}



	}


	if (Thief.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_6.getPosition().x) || (Thief.rect.left + 33 <= wall_6.getPosition().x)) {			//right
			Thief.rect.left = wall_6.getPosition().x - 36;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_5.getPosition().y) {		//down
				Thief.rect.top = wall_5.getPosition().y + 451.4;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_5.getPosition().y - 30;
				Thief.onground = true;
			}


		}
	}
	if (Thief.pico.getGlobalBounds().intersects(wall_7.getGlobalBounds())) {
		if ((Thief.rect.left >= wall_7.getPosition().x + 29.25) || (Thief.rect.left >= wall_7.getPosition().x + 29.75)) {		//left
			Thief.rect.left = wall_7.getPosition().x + 31.75;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_7.getPosition().y) {		//down
				Thief.rect.top = wall_7.getPosition().y + 451.4;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_7.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_7.getPosition().y - 30;
				Thief.onground = true;
			}


		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_8.getPosition().x) || (Thief.rect.left + 33 <= wall_8.getPosition().x)) {			//right
			Thief.rect.left = wall_8.getPosition().x - 36;

		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > wall_8.getPosition().y) {		//down
				Thief.rect.top = wall_8.getPosition().y + 451.4;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_8.getPosition().y - 30;
				Thief.onground = true;
			}


		}
	}
	if (Thief.pico.getGlobalBounds().intersects(wall_9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_9.getPosition().x) || (Thief.rect.left + 33 <= wall_9.getPosition().x)) {			//right
			Thief.rect.left = wall_9.getPosition().x - 36;

		}
	}



	if (Thief.pico.getGlobalBounds().intersects(wall_10.getGlobalBounds())) {
		if ((Thief.rect.left >= wall_10.getPosition().x + 29.25) || (Thief.rect.left >= wall_10.getPosition().x + 29.75)) {		//left
			Thief.rect.left = wall_10.getPosition().x + 31.75;
		}

	}




	if (Thief.pico.getGlobalBounds().intersects(wall_11.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_11.getPosition().x) || (Thief.rect.left + 33 <= wall_11.getPosition().x)) {			//right
			Thief.rect.left = wall_11.getPosition().x - 36;

		}
	}


	if (Thief.pico.getGlobalBounds().intersects(wall_12.getGlobalBounds())) {

		if ((Thief.rect.left >= wall_12.getPosition().x + 60) || (Thief.rect.left >= wall_12.getPosition().x + 60.5)) {		//left
			Thief.rect.left = wall_12.getPosition().x + 63.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > wall_12.getPosition().y) {		//down
				Thief.rect.top = wall_12.getPosition().y + 227.7;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_12.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_12.getPosition().y - 30;
				Thief.onground = true;
			}



		}

	}

	if (Thief.pico.getGlobalBounds().intersects(wall_13.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_13.getPosition().x) || (Thief.rect.left + 33 <= wall_13.getPosition().x)) {			//right
			Thief.rect.left = wall_13.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= wall_13.getPosition().x + 60) || (Thief.rect.left >= wall_13.getPosition().x + 60.5)) {		//left
			Thief.rect.left = wall_13.getPosition().x + 63.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;
			if (Thief.rect.top > wall_13.getPosition().y) {		//down
				Thief.rect.top = wall_13.getPosition().y + 233.12;
				Thief.move_y += 0.007;
				Thief.onground = false;

			}

			else if (Thief.rect.top > wall_13.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = wall_13.getPosition().y - 30;
				Thief.onground = true;
			}


		}
	}
	//buttons

	if (Thief.pico.getGlobalBounds().intersects(button1.getGlobalBounds())) {

		if (Thief.rect.top < button1.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressed = true;
			button1.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp1.getGlobalBounds())) {

		if (Thief.rect.top < buttonp1.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp1.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressed = true;
			button1.setScale(0, 0);
		}


	}

}



void Thief_collision10(Player& Thief, Sprite ground, Sprite ground3, Sprite ground4, Sprite ground5, Sprite ground6, Sprite ground7, Sprite ground8, Sprite ground9, Sprite ground10, Sprite ground11, Sprite ground12, RectangleShape laser1, RectangleShape laser2, RectangleShape laser3, RectangleShape laser4, RectangleShape laser5, RectangleShape box1, RectangleShape box2, RectangleShape box3, RectangleShape box4, RectangleShape box5, RectangleShape box6, RectangleShape box7, RectangleShape box8, RectangleShape box9, RectangleShape box10, RectangleShape box11, RectangleShape box12, Sprite death_floor1, Sprite death_floor2, Sprite wall_1, Sprite wall_2, Sprite wall_3, Sprite wall_4, Sprite wall_5, Sprite wall_6, Sprite squares_1, Sprite squares_2, Sprite squares_3, Sprite squares_4, Sprite squares_5, Sprite squares_6, Sprite squares_7, Sprite squares_8, Sprite squares_9, Sprite squares_10,Sprite squares_11, Sprite squares_12, Sprite squares_13, Sprite squares_14, Sprite squares_15, Sprite squares_16, Sprite squares_17, Sprite squares_18, Sprite squares_19, Sprite squares_20, Sprite squares_21, Sprite squares_22, Sprite squares_23, Sprite squares_24, Sprite squares_25, Sprite squares_26, Sprite squares_27, Sprite squares_28, Sprite squares_29, Sprite squares_30, Sprite squares_31, Sprite squares_32, Sprite squares_33, Sprite squares_34, Sprite squares_35, Sprite& button, Sprite& buttonp, Sprite splash1, Sprite splash2, Sprite splash3, Sprite splash4, Sprite splash5, Sprite splash6, Sprite splash7, Sprite splash8, Sprite splash9, Sprite splash10, Sprite splash11, Sprite splash12, Sprite splash13, Sprite splash14, Sprite splash15, Sprite splash16, Sprite splash17, Sprite splash18, Sprite splash19, Sprite splash20, Sprite splash21, Sprite splash22, Sprite splash23) {

	if (Thief.pico.getGlobalBounds().intersects(death_floor1.getGlobalBounds())) {
		dead[0] = 1;
		Tfell = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(death_floor2.getGlobalBounds())) {
		dead[0] = 1;
		Tfell = true;
	}

	if (Thief.pico.getGlobalBounds().intersects(ground.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground.getPosition().x) || (Thief.rect.left + 33 <= ground.getPosition().x)) {			//right
			Thief.rect.left = ground.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground.getPosition().x + 996) || (Thief.rect.left >= ground.getPosition().x + 998)) {		//left
			Thief.rect.left = ground.getPosition().x + 1000;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(laser1.getGlobalBounds()) && maskon == false && laser_on == true) {
		dead[0] = 1;
		Tburn = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(laser1.getGlobalBounds()) && kills_thief == true && laser_on == true) {
		dead[0] = 1;
		Tburn = true;
	}

	if (Thief.pico.getGlobalBounds().intersects(laser2.getGlobalBounds()) && maskon == false && laser_on == true) {
		dead[0] = 1;
		Tburn = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(laser2.getGlobalBounds()) && kills_thief == true && laser_on == true) {
		dead[0] = 1;
		Tburn = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(laser3.getGlobalBounds()) && maskon == false && laser_on == true) {
		dead[0] = 1;
		Tburn = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(laser3.getGlobalBounds()) && kills_thief == true && laser_on == true) {
		dead[0] = 1;
		Tburn = true;
	}
	if (Thief.pico.getPosition().x + (Thief.pico.getPosition().y - 851.443) / 1.732050808 < laser4.getPosition().x - 520 - 5 && diagonal_laser_on1 && maskon == false ) {
		dead[0] = true;
		Tburn = true;
	}
	if (Thief.pico.getPosition().x + (Thief.pico.getPosition().y - 851.443) / 1.732050808 < laser4.getPosition().x - 520 - 5 && diagonal_laser_on1 && kills_thief == true) {
		dead[0] = true;
		Tburn = true;
	}


	if (Thief.pico.getPosition().x + Thief.pico.getGlobalBounds().width - (Thief.pico.getPosition().y - 851.443) / 1.732050808 > laser5.getPosition().x + 520 - 10 && diagonal_laser_on2 && maskon == false) {
		dead[0] = true;
		Tburn = true;
	}
	if (Thief.pico.getPosition().x + Thief.pico.getGlobalBounds().width - (Thief.pico.getPosition().y - 851.443) / 1.732050808 > laser5.getPosition().x + 520 - 10 && diagonal_laser_on2 && kills_thief == true) {
		dead[0] = true;
		Tburn = true;
	}





	if (Thief.pico.getGlobalBounds().intersects(box1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box1.getPosition().x) || (Thief.rect.left + 33 <= box1.getPosition().x)) {			//right
			Thief.rect.left = box1.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box1.getPosition().x + 96) || (Thief.rect.left >= box1.getPosition().x + 98)) {		//left
			Thief.rect.left = box1.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box1.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box1.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box1.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(box2.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box2.getPosition().x) || (Thief.rect.left + 33 <= box2.getPosition().x)) {			//right
			Thief.rect.left = box2.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box2.getPosition().x + 96) || (Thief.rect.left >= box2.getPosition().x + 98)) {		//left
			Thief.rect.left = box2.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box2.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box2.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box2.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(box3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box3.getPosition().x) || (Thief.rect.left + 33 <= box3.getPosition().x)) {			//right
			Thief.rect.left = box3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box3.getPosition().x + 96) || (Thief.rect.left >= box3.getPosition().x + 98)) {		//left
			Thief.rect.left = box3.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box3.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box3.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box3.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(box4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box4.getPosition().x) || (Thief.rect.left + 33 <= box4.getPosition().x)) {			//right
			Thief.rect.left = box4.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box4.getPosition().x + 96) || (Thief.rect.left >= box4.getPosition().x + 98)) {		//left
			Thief.rect.left = box4.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box4.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box4.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(box5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box5.getPosition().x) || (Thief.rect.left + 33 <= box5.getPosition().x)) {			//right
			Thief.rect.left = box5.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box5.getPosition().x + 96) || (Thief.rect.left >= box5.getPosition().x + 98)) {		//left
			Thief.rect.left = box5.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box5.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box5.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(box6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box6.getPosition().x) || (Thief.rect.left + 33 <= box6.getPosition().x)) {			//right
			Thief.rect.left = box6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box6.getPosition().x + 96) || (Thief.rect.left >= box6.getPosition().x + 98)) {		//left
			Thief.rect.left = box6.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box6.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(box7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box7.getPosition().x) || (Thief.rect.left + 33 <= box7.getPosition().x)) {			//right
			Thief.rect.left = box7.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box7.getPosition().x + 96) || (Thief.rect.left >= box7.getPosition().x + 98)) {		//left
			Thief.rect.left = box7.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box7.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box7.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box7.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(box8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box8.getPosition().x) || (Thief.rect.left + 33 <= box8.getPosition().x)) {			//right
			Thief.rect.left = box8.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box8.getPosition().x + 96) || (Thief.rect.left >= box8.getPosition().x + 98)) {		//left
			Thief.rect.left = box8.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box8.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box8.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(box9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box9.getPosition().x) || (Thief.rect.left + 33 <= box9.getPosition().x)) {			//right
			Thief.rect.left = box9.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box9.getPosition().x + 96) || (Thief.rect.left >= box9.getPosition().x + 98)) {		//left
			Thief.rect.left = box9.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box9.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box9.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box9.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(box10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box10.getPosition().x) || (Thief.rect.left + 33 <= box10.getPosition().x)) {			//right
			Thief.rect.left = box10.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box10.getPosition().x + 96) || (Thief.rect.left >= box10.getPosition().x + 98)) {		//left
			Thief.rect.left = box10.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box10.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box10.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box10.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(box11.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box11.getPosition().x) || (Thief.rect.left + 33 <= box11.getPosition().x)) {			//right
			Thief.rect.left = box11.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box11.getPosition().x + 96) || (Thief.rect.left >= box11.getPosition().x + 98)) {		//left
			Thief.rect.left = box11.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box11.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box11.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box11.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(box12.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= box12.getPosition().x) || (Thief.rect.left + 33 <= box12.getPosition().x)) {			//right
			Thief.rect.left = box12.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= box12.getPosition().x + 96) || (Thief.rect.left >= box12.getPosition().x + 98)) {		//left
			Thief.rect.left = box12.getPosition().x + 100;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > box12.getPosition().y) {		//down
				dead[0] = 1;
				Tstomped = true;
			}

			else if (Thief.rect.top > box12.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = box12.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	/////////////////////wave 4 collision ////////////



	if (Thief.pico.getGlobalBounds().intersects(button.getGlobalBounds())) {

		if (Thief.rect.top < button.getPosition().y) {			//jump
			Thief.onground = true;
			button_ispressedforground = true;
			button.setScale(0, 0);
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(buttonp.getGlobalBounds())) {

		if (Thief.rect.top < buttonp.getPosition().y - 20) {			//jump
			Thief.rect.top = buttonp.getPosition().y - 48.5;
			Thief.onground = true;
			button_ispressedforground = true;
			button.setScale(0, 0);
		}


	}

	if (Thief.pico.getGlobalBounds().intersects(ground3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground3.getPosition().x) || (Thief.rect.left + 33 <= ground3.getPosition().x)) {			//right
			Thief.rect.left = ground3.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground3.getPosition().x + 584.5) || (Thief.rect.left >= ground3.getPosition().x + 585.5)) {		//left
			Thief.rect.left = ground3.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground3.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground3.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(ground4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground4.getPosition().x) || (Thief.rect.left + 33 <= ground4.getPosition().x)) {			//right
			Thief.rect.left = ground4.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground4.getPosition().x + 584.5) || (Thief.rect.left >= ground4.getPosition().x + 585.5)) {		//left
			Thief.rect.left = ground4.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground4.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground4.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(ground5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground5.getPosition().x) || (Thief.rect.left + 33 <= ground5.getPosition().x)) {			//right
			Thief.rect.left = ground5.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground5.getPosition().x + 664.1) || (Thief.rect.left >= ground5.getPosition().x + 665.1)) {		//left
			Thief.rect.left = ground5.getPosition().x + 668.1;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground5.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground5.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(ground6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground6.getPosition().x) || (Thief.rect.left + 33 <= ground6.getPosition().x)) {			//right
			Thief.rect.left = ground6.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground6.getPosition().x + 465.6) || (Thief.rect.left >= ground6.getPosition().x + 466.6)) {		//left
			Thief.rect.left = ground6.getPosition().x + 471.6;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground6.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground6.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(ground7.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground7.getPosition().x) || (Thief.rect.left + 33 <= ground7.getPosition().x)) {			//right
			Thief.rect.left = ground7.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground7.getPosition().x + 664.1) || (Thief.rect.left >= ground7.getPosition().x + 665.1)) {		//left
			Thief.rect.left = ground7.getPosition().x + 668.1;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground7.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground7.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(ground8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground8.getPosition().x) || (Thief.rect.left + 33 <= ground8.getPosition().x)) {			//right
			Thief.rect.left = ground8.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground8.getPosition().x + 1372.5) || (Thief.rect.left >= ground8.getPosition().x + 1373.5)) {		//left
			Thief.rect.left = ground8.getPosition().x + 1375.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground8.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground8.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}

	if (Thief.pico.getGlobalBounds().intersects(ground9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground9.getPosition().x) || (Thief.rect.left + 33 <= ground9.getPosition().x)) {			//right
			Thief.rect.left = ground9.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground9.getPosition().x + 1372.5) || (Thief.rect.left >= ground9.getPosition().x + 1373.5)) {		//left
			Thief.rect.left = ground9.getPosition().x + 1375.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground9.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground9.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(ground10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground10.getPosition().x) || (Thief.rect.left + 33 <= ground10.getPosition().x)) {			//right
			Thief.rect.left = ground10.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground10.getPosition().x + 584.5) || (Thief.rect.left >= ground10.getPosition().x + 585.5)) {		//left
			Thief.rect.left = ground10.getPosition().x + 589.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground10.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground10.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(ground11.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground11.getPosition().x) || (Thief.rect.left + 33 <= ground11.getPosition().x)) {			//right
			Thief.rect.left = ground11.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground11.getPosition().x + 465.6) || (Thief.rect.left >= ground11.getPosition().x + 466.6)) {		//left
			Thief.rect.left = ground11.getPosition().x + 471.6;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground11.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground11.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}
	if (Thief.pico.getGlobalBounds().intersects(ground12.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= ground12.getPosition().x) || (Thief.rect.left + 33 <= ground12.getPosition().x)) {			//right
			Thief.rect.left = ground12.getPosition().x - 36;
		}
		else if ((Thief.rect.left >= ground12.getPosition().x + 979.5) || (Thief.rect.left >= ground12.getPosition().x + 980.5)) {		//left
			Thief.rect.left = ground12.getPosition().x + 982.5;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > ground12.getPosition().y) {		//jump
				Thief.move_y = 0;
				Thief.rect.top = ground12.getPosition().y - 30;
				Thief.onground = true;
			}
		}

	}


	if (Thief.pico.getGlobalBounds().intersects(wall_6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= wall_6.getPosition().x) || (Thief.rect.left + 33 <= wall_6.getPosition().x)) { //right
			Thief.rect.left = wall_6.getPosition().x - 36;
		}
	}




	if (easy) {
		if (Thief.pico.getGlobalBounds().intersects(squares_2.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_2.getPosition().x) || (Thief.rect.left + 33 <= squares_2.getPosition().x)) { //right
				Thief.rect.left = squares_2.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_2.getPosition().x + 50) || (Thief.rect.left >= squares_2.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_2.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_2.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_2.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_7.getPosition().x) || (Thief.rect.left + 33 <= squares_7.getPosition().x)) { //right
				Thief.rect.left = squares_7.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_7.getPosition().x + 50) || (Thief.rect.left >= squares_7.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_7.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_7.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_7.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_11.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_11.getPosition().x) || (Thief.rect.left + 33 <= squares_11.getPosition().x)) { //right
				Thief.rect.left = squares_11.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_11.getPosition().x + 50) || (Thief.rect.left >= squares_11.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_11.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_11.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_11.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_12.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_12.getPosition().x) || (Thief.rect.left + 33 <= squares_12.getPosition().x)) { //right
				Thief.rect.left = squares_12.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_12.getPosition().x + 50) || (Thief.rect.left >= squares_12.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_12.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_12.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_12.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_18.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_18.getPosition().x) || (Thief.rect.left + 33 <= squares_18.getPosition().x)) { //right
				Thief.rect.left = squares_18.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_18.getPosition().x + 50) || (Thief.rect.left >= squares_18.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_18.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_18.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_18.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_27.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_27.getPosition().x) || (Thief.rect.left + 33 <= squares_27.getPosition().x)) { //right
				Thief.rect.left = squares_27.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_27.getPosition().x + 50) || (Thief.rect.left >= squares_27.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_27.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_27.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_27.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_29.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_29.getPosition().x) || (Thief.rect.left + 33 <= squares_29.getPosition().x)) { //right
				Thief.rect.left = squares_29.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_29.getPosition().x + 50) || (Thief.rect.left >= squares_29.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_29.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_29.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_29.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}

		if (Thief.pico.getGlobalBounds().intersects(squares_29.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_29.getPosition().x) || (Thief.rect.left + 33 <= squares_29.getPosition().x)) { //right
				Thief.rect.left = squares_29.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_29.getPosition().x + 50) || (Thief.rect.left >= squares_29.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_29.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_29.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_29.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
		if (Thief.pico.getGlobalBounds().intersects(squares_31.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_31.getPosition().x) || (Thief.rect.left + 33 <= squares_31.getPosition().x)) { //right
				Thief.rect.left = squares_31.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_31.getPosition().x + 50) || (Thief.rect.left >= squares_31.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_31.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_31.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_31.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}


		if (Thief.pico.getGlobalBounds().intersects(squares_32.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_32.getPosition().x) || (Thief.rect.left + 33 <= squares_32.getPosition().x)) { //right
				Thief.rect.left = squares_32.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_32.getPosition().x + 50) || (Thief.rect.left >= squares_32.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_32.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_32.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_32.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}


		if (Thief.pico.getGlobalBounds().intersects(squares_34.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_34.getPosition().x) || (Thief.rect.left + 33 <= squares_34.getPosition().x)) { //right
				Thief.rect.left = squares_34.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_34.getPosition().x + 50) || (Thief.rect.left >= squares_34.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_34.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_34.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_34.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}


		


	}

	if (medium) {


		if (Thief.pico.getGlobalBounds().intersects(squares_7.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_7.getPosition().x) || (Thief.rect.left + 33 <= squares_7.getPosition().x)) { //right
				Thief.rect.left = squares_7.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_7.getPosition().x + 50) || (Thief.rect.left >= squares_7.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_7.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_7.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_7.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}



		if (Thief.pico.getGlobalBounds().intersects(squares_31.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_31.getPosition().x) || (Thief.rect.left + 33 <= squares_31.getPosition().x)) { //right
				Thief.rect.left = squares_31.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_31.getPosition().x + 50) || (Thief.rect.left >= squares_31.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_31.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_31.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_31.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}


		


		if (Thief.pico.getGlobalBounds().intersects(squares_34.getGlobalBounds())) {
			if ((Thief.rect.left + 32 <= squares_34.getPosition().x) || (Thief.rect.left + 33 <= squares_34.getPosition().x)) { //right
				Thief.rect.left = squares_34.getPosition().x - 37;
			}

			else if ((Thief.rect.left >= squares_34.getPosition().x + 50) || (Thief.rect.left >= squares_34.getPosition().x + 50.5)) {//left
				Thief.rect.left = squares_34.getPosition().x + 55;
			}
			else {
				Thief.move_y = 0;
				Thief.onground = true;


				if (Thief.rect.top > squares_34.getPosition().y + 55) { //down
					Thief.onground = false;
					Thief.move_y += 0.5;

				}

				else if (Thief.rect.top < squares_34.getPosition().y) {//jump

					Thief.onground = true;



				}

			}

		}
	}


	if (Thief.pico.getGlobalBounds().intersects(squares_1.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_1.getPosition().x) || (Thief.rect.left + 33 <= squares_1.getPosition().x)) { //right
			Thief.rect.left = squares_1.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= squares_1.getPosition().x + 50) || (Thief.rect.left >= squares_1.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_1.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_1.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_1.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}








	if (Thief.pico.getGlobalBounds().intersects(squares_3.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_3.getPosition().x) || (Thief.rect.left + 33 <= squares_3.getPosition().x)) { //right
			Thief.rect.left = squares_3.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_3.getPosition().x + 50) || (Thief.rect.left >= squares_3.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_3.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_3.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_3.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_4.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_4.getPosition().x) || (Thief.rect.left + 33 <= squares_4.getPosition().x)) { //right
			Thief.rect.left = squares_4.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_4.getPosition().x + 50) || (Thief.rect.left >= squares_4.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_4.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_4.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_4.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_5.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_5.getPosition().x) || (Thief.rect.left + 33 <= squares_5.getPosition().x)) { //right
			Thief.rect.left = squares_5.getPosition().x - 37;
			Thief.rect.left = squares_5.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= squares_5.getPosition().x + 50) || (Thief.rect.left >= squares_5.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_5.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_5.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_5.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_6.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_6.getPosition().x) || (Thief.rect.left + 33 <= squares_6.getPosition().x)) { //right
			Thief.rect.left = squares_6.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_6.getPosition().x + 85) || (Thief.rect.left >= squares_6.getPosition().x + 85.5)) {//left
			Thief.rect.left = squares_6.getPosition().x + 95;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_6.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_6.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}





	if (Thief.pico.getGlobalBounds().intersects(squares_8.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_8.getPosition().x) || (Thief.rect.left + 33 <= squares_8.getPosition().x)) { //right
			Thief.rect.left = squares_8.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_8.getPosition().x + 50) || (Thief.rect.left >= squares_8.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_8.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_8.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_8.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_9.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_9.getPosition().x) || (Thief.rect.left + 33 <= squares_9.getPosition().x)) { //right
			Thief.rect.left = squares_9.getPosition().x - 37;
		}

		else if ((Thief.rect.left >= squares_9.getPosition().x + 50) || (Thief.rect.left >= squares_9.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_9.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_9.getPosition().y + 55) { //down
				Thief.onground = false;
				Thief.move_y += 0.5;

			}

			else if (Thief.rect.top < squares_9.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_10.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_10.getPosition().x) || (Thief.rect.left + 33 <= squares_10.getPosition().x)) { //right
			Thief.rect.left = squares_10.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_10.getPosition().x + 50) || (Thief.rect.left >= squares_10.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_10.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_10.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_10.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}





	if (Thief.pico.getGlobalBounds().intersects(squares_13.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_13.getPosition().x) || (Thief.rect.left + 33 <= squares_13.getPosition().x)) { //right
			Thief.rect.left = squares_13.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_13.getPosition().x + 50) || (Thief.rect.left >= squares_13.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_13.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_13.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_13.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_14.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_14.getPosition().x) || (Thief.rect.left + 33 <= squares_14.getPosition().x)) { //right
			Thief.rect.left = squares_14.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_14.getPosition().x + 50) || (Thief.rect.left >= squares_14.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_14.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_14.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_14.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_15.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_15.getPosition().x) || (Thief.rect.left + 33 <= squares_15.getPosition().x)) { //right
			Thief.rect.left = squares_15.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_15.getPosition().x + 50) || (Thief.rect.left >= squares_15.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_15.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_15.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_15.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}





	if (Thief.pico.getGlobalBounds().intersects(squares_16.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_16.getPosition().x) || (Thief.rect.left + 33 <= squares_16.getPosition().x)) { //right
			Thief.rect.left = squares_16.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_16.getPosition().x + 50) || (Thief.rect.left >= squares_16.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_16.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_16.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_16.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_17.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_17.getPosition().x) || (Thief.rect.left + 33 <= squares_17.getPosition().x)) { //right
			Thief.rect.left = squares_17.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_17.getPosition().x + 50) || (Thief.rect.left >= squares_17.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_17.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_17.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_17.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}




	if (Thief.pico.getGlobalBounds().intersects(squares_19.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_19.getPosition().x) || (Thief.rect.left + 33 <= squares_19.getPosition().x)) { //right
			Thief.rect.left = squares_19.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_19.getPosition().x + 50) || (Thief.rect.left >= squares_19.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_19.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_19.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_19.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_20.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_20.getPosition().x) || (Thief.rect.left + 33 <= squares_20.getPosition().x)) { //right
			Thief.rect.left = squares_20.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_20.getPosition().x + 50) || (Thief.rect.left >= squares_20.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_20.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_20.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_20.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_21.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_21.getPosition().x) || (Thief.rect.left + 33 <= squares_21.getPosition().x)) { //right
			Thief.rect.left = squares_21.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_21.getPosition().x + 50) || (Thief.rect.left >= squares_21.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_21.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_21.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_21.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_22.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_22.getPosition().x) || (Thief.rect.left + 33 <= squares_22.getPosition().x)) { //right
			Thief.rect.left = squares_22.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_22.getPosition().x + 50) || (Thief.rect.left >= squares_22.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_22.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_22.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_22.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_23.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_23.getPosition().x) || (Thief.rect.left + 33 <= squares_23.getPosition().x)) { //right
			Thief.rect.left = squares_23.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_23.getPosition().x + 50) || (Thief.rect.left >= squares_23.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_23.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_23.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_23.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_24.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_24.getPosition().x) || (Thief.rect.left + 33 <= squares_24.getPosition().x)) { //right
			Thief.rect.left = squares_24.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_24.getPosition().x + 50) || (Thief.rect.left >= squares_24.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_24.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_24.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_24.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_25.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_25.getPosition().x) || (Thief.rect.left + 33 <= squares_25.getPosition().x)) { //right
			Thief.rect.left = squares_25.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_25.getPosition().x + 50) || (Thief.rect.left >= squares_25.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_25.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_25.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_25.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}


	if (Thief.pico.getGlobalBounds().intersects(squares_26.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_26.getPosition().x) || (Thief.rect.left + 33 <= squares_26.getPosition().x)) { //right
			Thief.rect.left = squares_26.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_26.getPosition().x + 50) || (Thief.rect.left >= squares_26.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_26.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_26.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_26.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_28.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_28.getPosition().x) || (Thief.rect.left + 33 <= squares_28.getPosition().x)) { //right
			Thief.rect.left = squares_28.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_28.getPosition().x + 50) || (Thief.rect.left >= squares_28.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_28.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_28.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_28.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares_30.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_30.getPosition().x) || (Thief.rect.left + 33 <= squares_30.getPosition().x)) { //right
			Thief.rect.left = squares_30.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_30.getPosition().x + 50) || (Thief.rect.left >= squares_30.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_30.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_30.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_30.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}



	if (Thief.pico.getGlobalBounds().intersects(squares_33.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_33.getPosition().x) || (Thief.rect.left + 33 <= squares_33.getPosition().x)) { //right
			Thief.rect.left = squares_33.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_33.getPosition().x + 50) || (Thief.rect.left >= squares_33.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_33.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_33.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_33.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(squares_35.getGlobalBounds())) {
		if ((Thief.rect.left + 32 <= squares_35.getPosition().x) || (Thief.rect.left + 33 <= squares_35.getPosition().x)) { //right
			Thief.rect.left = squares_35.getPosition().x - 36;
		}

		else if ((Thief.rect.left >= squares_35.getPosition().x + 50) || (Thief.rect.left >= squares_35.getPosition().x + 50.5)) {//left
			Thief.rect.left = squares_35.getPosition().x + 55;
		}
		else {
			Thief.move_y = 0;
			Thief.onground = true;


			if (Thief.rect.top > squares_35.getPosition().y + 50) { //down
				Thief.onground = false;
				Thief.move_y += 0.007;

			}

			else if (Thief.rect.top < squares_35.getPosition().y) {//jump

				Thief.onground = true;



			}

		}

	}

	if (Thief.pico.getGlobalBounds().intersects(splash1.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash2.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash3.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash4.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash5.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash6.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash7.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash8.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash9.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash10.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash11.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash12.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash13.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash14.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash15.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash16.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash17.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash18.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash19.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash20.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash21.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash22.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}
	if (Thief.pico.getGlobalBounds().intersects(splash23.getGlobalBounds())) {
		dead[0] = 1;
		Tpoisoned = true;
		Tstomped = true;
	}



}

#endif 
