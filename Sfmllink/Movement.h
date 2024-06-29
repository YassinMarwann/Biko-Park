#pragma once
#include "Initialization.h"
#include "player struct.h"
#include "movement_controls.h"


void players_movment(RenderWindow& window, Player& Thief, Player& Scientist, Player& Builder, Player& Astronaut, Clock& clock, float left_wall, float right_wall) {

	dPadX0 = Joystick::getAxisPosition(0, Joystick::PovX);
	dPadX1 = Joystick::getAxisPosition(1, Joystick::PovX);
	dPadY0 = Joystick::getAxisPosition(0, Joystick::PovY);
	dPadY1 = Joystick::getAxisPosition(1, Joystick::PovY);
	dPadY2 = Joystick::getAxisPosition(2, Joystick::PovY);
	dPadX2 = Joystick::getAxisPosition(2, Joystick::PovX);
	dPadY3 = Joystick::getAxisPosition(3, Joystick::PovY);
	dPadX3 = Joystick::getAxisPosition(3, Joystick::PovX);
	
	
	
	bool a_animation = 1, b_animation = 1, s_animation = 1, t_animation = 1;
	if (t_a == 1 || s_a == 1 || b_a == 1) {
		a_animation = 0;
	}
	if (a_t == 1 || s_t == 1 || b_t == 1) {
		t_animation = 0;
	}
	if (t_s == 1 || a_s == 1 || b_s == 1) {
		s_animation = 0;
	}
	if (a_b == 1 || s_b == 1 || t_b == 1) {
		b_animation = 0;
	}



	//MOVEMENT

	float time = clock.getElapsedTime().asMicroseconds();
	clock.restart();
	time /= 650;
	if (time > 20) {
		time = 0;
	}

	
		testing_keyboard(Thief, Scientist, Builder, Astronaut, time);



		if (control[0] == 0) {
			thief_keyboard(Thief, Scientist, Builder, Astronaut, time);
		}
		else if (control[0] == 1) {
			thief_ps(Thief, Scientist, Builder, Astronaut, time);
		}
		else if (control[0] == 2) {
			thief_xbox(Thief, Scientist, Builder, Astronaut, time);
		}

		if (control[2] == 0) {
			builder_keyboard(Thief, Scientist, Builder, Astronaut, time, b_animation);
		}
		else if (control[2] == 1) {
			builder_ps(Thief, Scientist, Builder, Astronaut, time);
		}
		else if (control[2] == 2) {
			builder_xbox(Thief, Scientist, Builder, Astronaut, time);
		
		}

		if (control[1] == 1) {
			scientist_ps(Thief, Scientist, Builder, Astronaut, time);
		}
		else if (control[1] == 2) {
			scientist_xbox(Thief, Scientist, Builder, Astronaut, time);
		}

		if (control[3] == 1) {
			astronaut_ps(Thief, Scientist, Builder, Astronaut, time);
		}
		else if (control[3] == 2) {
			astronaut_xbox(Thief, Scientist, Builder, Astronaut, time);
		}





		if (Scientist.onground == false) {
			Scientist.move_y += (0.0007 * time);
		}
		Scientist.onground = false;

		if (Thief.onground == false) {
			Thief.move_y += (0.0007 * time);
		}
		Thief.onground = false;

		if (Builder.onground == false) {
			Builder.move_y += (0.0007 * time);
		}
		Builder.onground = false;

		if (helmeton == false) {
			if (Astronaut.onground == false) {
				Astronaut.move_y += (0.0007 * time);
			}
			Astronaut.onground = false;
		}

		if (helmeton == true) {
			Astronaut.move_y -= (0.0007 * time);
			Astronaut.onground = false;
		}

		
		
		if (Keyboard::isKeyPressed(Keyboard::Escape)) {
				pause = true;
		}

		if (pause == false) {
			Astronaut.update(time, left_wall, right_wall,a_animation, true);
			Thief.update(time, left_wall, right_wall,t_animation);
			Scientist.update(time, left_wall, right_wall,s_animation);
			Builder.update(time, left_wall, right_wall,b_animation);
		}
	
}
