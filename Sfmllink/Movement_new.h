//#pragma once
//#include "Initialization.h"
//#include "player struct.h"
//
//
//
//void players_movment(RenderWindow& window, Player& Thief, Player& Scientist, Player& Builder, Player& Astronaut, Clock& clock, float left_wall, float right_wall) {
//
//
//
//
//	//MOVEMENT
//
//	float time = clock.getElapsedTime().asMicroseconds();
//	clock.restart();
//	time /= 650;
//	if (time > 20) {
//		time = 0;
//	}
//
//	//Thief Movement
//	{
//		if (Thief.LastKeyPressed == 1 && Thief.onground == true) {
//			Thief.pico.setTextureRect(IntRect(7, 118, 45, 61));
//		}
//
//		if (Thief.LastKeyPressed == 2 && Thief.onground == true) {
//			Thief.pico.setTextureRect(IntRect(7 + 45, 118, -45, 61));
//		}
//
//		if (Keyboard::isKeyPressed(Keyboard::D) && dead[0] == 0) {
//			Thief.move_x = 0.2;
//
//			if (Thief.move_y > 0 || Thief.move_y < 0) {
//				Thief.pico.setTextureRect(IntRect(56, 118, 45, 63));
//			}
//
//			Thief.LastKeyPressed = 1;
//
//
//			if (t_s == 1)
//			{
//				Scientist.move_x = 0.2;
//			}
//
//			if (t_s == 1 && s_b == 1) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//			}
//
//			if (t_s == 1 && s_b == 1 && b_a == 1) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_s == 1 && s_a == 1) {
//				Scientist.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_s == 1 && s_a == 1 && a_b == 1) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_b == 1) {
//				Builder.move_x = 0.2;
//			}
//
//			if (t_b == 1 && b_s == 1) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//			}
//
//			if (t_b == 1 && b_s == 1 && s_a == 1) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_b == 1 && b_a == 1) {
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_b == 1 && b_a == 1 && a_s == 1) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_a == 1)
//			{
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_a == 1 && a_s == 1) {
//				Scientist.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_a == 1 && a_s == 1 && s_b == 1) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_a == 1 && a_b == 1) {
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//			if (t_a == 1 && a_b == 1 && b_s) {
//				Scientist.move_x = 0.2;
//				Builder.move_x = 0.2;
//				Astronaut.move_x = 0.2;
//			}
//
//		}
//
//
//		if (Keyboard::isKeyPressed(Keyboard::A) && dead[0] == 0) {
//			Thief.move_x = -0.2;
//
//			if (Thief.move_y > 0 || Thief.move_y < 0) {
//				Thief.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//			}
//
//			Thief.LastKeyPressed = 2;
//
//
//			if (t_s == 1)
//			{
//				Scientist.move_x = -0.2;
//			}
//
//			if (t_s == 1 && s_b == 1) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//			}
//
//			if (t_s == 1 && s_b == 1 && b_a == 1) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_s == 1 && s_a == 1) {
//				Scientist.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_s == 1 && s_a == 1 && a_b == 1) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_b == 1) {
//				Builder.move_x = -0.2;
//			}
//
//			if (t_b == 1 && b_s == 1) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//			}
//
//			if (t_b == 1 && b_s == 1 && s_a == 1) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_b == 1 && b_a == 1) {
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_b == 1 && b_a == 1 && a_s == 1) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_a == 1)
//			{
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_a == 1 && a_s == 1) {
//				Scientist.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_a == 1 && a_s == 1 && s_b == 1) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_a == 1 && a_b == 1) {
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//			if (t_a == 1 && a_b == 1 && b_s) {
//				Scientist.move_x = -0.2;
//				Builder.move_x = -0.2;
//				Astronaut.move_x = -0.2;
//			}
//
//		}
//
//
//
//		if (Keyboard::isKeyPressed(Keyboard::W) && dead[0] == 0) {
//			if (Thief.onground && t_b == 0 && t_a == 0 && t_s == 0) {
//
//				if (Thief.LastKeyPressed == 1) {
//					Thief.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//				if (Thief.LastKeyPressed == 2) {
//					Thief.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Thief.move_y = -0.4; ;
//				Thief.onground = false;
//
//			}
//
//		}
//
//		if (Keyboard::isKeyPressed(Keyboard::E) && maskon == false && timer1 > 50) {
//			maskon = true;
//			hasmask = true;
//			nomask = false;
//			timer1 = 0;
//			masktrue = 0;
//		}
//		else if (Keyboard::isKeyPressed(Keyboard::E) && maskon == true && timer1 > 50) {
//			maskon = false;
//			hasmask = false;
//			nomask = true;
//			timer1 = 0;
//			maskfalse = 0;
//		}
//
//
//		if (Thief.onground == false) {
//			Thief.move_y += (0.0007 * time);
//		}
//		Thief.onground = false;
//	}
//
//	//Scientist Movement
//		
//		if (Joystick::isConnected(0)) {
//
//
//
//
//			if (dPadX0 == 100) {
//				// D-pad right button is pressed
//
//			}
//			else if (dPadX0 == -100) {
//				// D-pad left button is pressed
//
//			}
//
//
//
//			if (Scientist.LastKeyPressed == 1 && Scientist.onground == true) {
//				Scientist.pico.setTextureRect(IntRect(7, 118, 45, 61));
//			}
//
//			if (Scientist.LastKeyPressed == 2 && Scientist.onground == true) {
//				Scientist.pico.setTextureRect(IntRect(7 + 45, 118, -45, 61));
//			}
//
//			if (dPadX0 == 100&& dead[1] == 0) {
//				Scientist.move_x = 0.2;
//
//				if (Scientist.move_y > 0 || Scientist.move_y < 0) {
//					Scientist.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//
//				Scientist.LastKeyPressed = 1;
//
//
//				if (s_t == 1) {
//					Thief.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_b == 1 && b_a == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_a == 1 && a_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_b == 1) {
//					Builder.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_a == 1) {
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_a == 1 && a_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1) {
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_t == 1) {
//					Thief.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_b == 1) {
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//			}
//
//
//			if (dPadX0 == -100&& dead[1] == 0) {
//				Scientist.move_x = -0.2;
//
//				if (Scientist.move_y > 0 || Scientist.move_y < 0) {
//					Scientist.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Scientist.LastKeyPressed = 2;
//
//
//				if (s_t == 1) {
//					Thief.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_b == 1 && b_a == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_a == 1 && a_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_b == 1) {
//					Builder.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_a == 1) {
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_a == 1 && a_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1) {
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_t == 1) {
//					Thief.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_b == 1) {
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//			}
//
//
//			if (Joystick::isButtonPressed(0, 1)&& dead[1] == 0) {
//				if (Scientist.onground && s_t == 0 && s_b == 0 && s_a == 0) {
//
//					if (Scientist.LastKeyPressed == 1) {
//						Scientist.pico.setTextureRect(IntRect(56, 118, 45, 63));
//					}
//					if (Scientist.LastKeyPressed == 2) {
//						Scientist.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//					}
//
//					Scientist.move_y = -0.4;
//					Scientist.onground = false;
//				}
//			}
//
//			if (Scientist.onground == false) {
//				Scientist.move_y += (0.0007 * time);
//			}
//			Scientist.onground = false;
//		}
//	
//	
//
//	//Builder Movement
//	{
//		
//			if (Builder.LastKeyPressed == 1 && Builder.onground == true) {
//				Builder.pico.setTextureRect(IntRect(7, 118, 45, 61));
//			}
//
//			if (Builder.LastKeyPressed == 2 && Builder.onground == true) {
//				Builder.pico.setTextureRect(IntRect(7 + 45, 118, -45, 61));
//			}
//
//			if (Keyboard::isKeyPressed(Keyboard::Right) && dead[2] == 0) {
//				Builder.move_x = 0.2;
//
//				if (Builder.move_y > 0 || Builder.move_y < 0) {
//					Builder.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//
//				Builder.LastKeyPressed = 1;
//
//
//				if (b_t == 1)
//				{
//					Thief.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_s == 1 && s_a == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_a == 1 && a_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_s == 1) {
//					Scientist.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_a == 1) {
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_a == 1 && a_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1) {
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_t == 1) {
//					Astronaut.move_x = 0.2;
//					Thief.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_s == 1) {
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//			}
//
//
//			if (Keyboard::isKeyPressed(Keyboard::Left) && dead[2] == 0) {
//				Builder.move_x = -0.2;
//
//				if (Builder.move_y > 0 || Builder.move_y < 0) {
//					Builder.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Builder.LastKeyPressed = 2;
//
//
//				if (b_t == 1)
//				{
//					Thief.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_s == 1 && s_a == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_a == 1 && a_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_s == 1) {
//					Scientist.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_a == 1) {
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_a == 1 && a_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1) {
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_t == 1) {
//					Astronaut.move_x = -0.2;
//					Thief.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_s == 1) {
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//			}
//
//
//			if (Keyboard::isKeyPressed(Keyboard::Up) && dead[2] == 0) {
//				if (Builder.onground && b_t == 0 && b_s == 0 && b_a == 0) {
//
//					if (Builder.LastKeyPressed == 1) {
//						Builder.pico.setTextureRect(IntRect(56, 118, 45, 63));
//					}
//					if (Builder.LastKeyPressed == 2) {
//						Builder.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//					}
//
//					Builder.move_y = -0.4;
//					Builder.onground = false;
//
//				}
//			}
//
//			if (Builder.onground == false) {
//				Builder.move_y += (0.0007 * time);
//			}
//			Builder.onground = false;
//		
//	}
//
//	//Astronaut Movement
//	{
//
//		
//		if (Joystick::isConnected(1)) {
//
//
//
//			if (dPadX1 == 100) {
//				// D-pad right button is pressed
//
//			}
//			else if (dPadX1 == -100) {
//				// D-pad left button is pressed
//
//			}
//
//
//
//
//			if (Astronaut.LastKeyPressed == 1 && Astronaut.onground == true) {
//				Astronaut.pico.setTextureRect(IntRect(7, 118, 45, 61));
//			}
//
//			if (Astronaut.LastKeyPressed == 2 && Astronaut.onground == true) {
//				Astronaut.pico.setTextureRect(IntRect(7 + 45, 118, -45, 61));
//			}
//
//
//			
//			if (dPadX1 == 100 && dead[3] == 0)
//			{
//				Astronaut.move_x = 0.2;
//
//				if (Astronaut.move_y > 0 || Astronaut.move_y < 0) {
//					Astronaut.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//
//				Astronaut.LastKeyPressed = 1;
//
//
//				if (a_t == 1)
//				{
//					Thief.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_s == 1 && s_b == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_b == 1 && b_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_s == 1) {
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_b == 1) {
//					Builder.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1) {
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_s == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//			}
//
//
//			
//			if (dPadX1 == -100&& dead[3] == 0)
//			{
//				Astronaut.move_x = -0.2;
//
//				if (Astronaut.move_y > 0 || Astronaut.move_y < 0) {
//					Astronaut.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Astronaut.LastKeyPressed = 2;
//
//
//				if (a_t == 1)
//				{
//					Thief.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_s == 1 && s_b == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_b == 1 && b_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_s == 1) {
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_b == 1) {
//					Builder.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1) {
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_s == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//			}
//
//
//			
//			if (Joystick::isButtonPressed(1, 1)&& dead[3] == 0)
//			{
//				if (Astronaut.onground && a_t == 0 && a_b == 0 && a_s == 0) {
//					if (helmeton)
//					{
//						Astronaut.move_y = 0.4;
//
//						if (Astronaut.LastKeyPressed == 1) {
//							Astronaut.pico.setTextureRect(IntRect(56, 118, 45, 63));
//						}
//						if (Astronaut.LastKeyPressed == 2) {
//							Astronaut.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//						}
//					}
//					else {
//						Astronaut.move_y = -0.4;
//
//						if (Astronaut.LastKeyPressed == 1) {
//							Astronaut.pico.setTextureRect(IntRect(56, 118, 45, 63));
//						}
//						if (Astronaut.LastKeyPressed == 2) {
//							Astronaut.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//						}
//					}
//					Astronaut.onground = false;
//
//				}
//			}
//
//			if (Joystick::isButtonPressed(1, 2) && pagenum != 1 && pagenum != 4)
//			{
//				if (Astronaut.onground && helmeton == false && a_t == 0 && a_s == 0 && a_b == 0)
//				{
//					helmeton = true;
//					Astronaut.pico.setScale(0.8, -0.8);
//					hashelm = true;
//					nohelm = false;
//					helmtrue = 0;
//				}
//				else if (Astronaut.onground && helmeton == true)
//				{
//					helmeton = false;
//					Astronaut.pico.setScale(0.8, 0.8);
//					hashelm = false;
//					nohelm = true;
//					helmfalse = 0;
//				}
//			}
//
//		}
//		//inverted controls /////////
//
//
//		if (pagenum == 4) {
//			if (Keyboard::isKeyPressed(Keyboard::A)) {
//				Thief.move_x = 0.2;
//
//				if (Thief.move_y > 0 || Thief.move_y < 0) {
//					Thief.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//
//				Thief.LastKeyPressed = 1;
//
//
//				if (t_s == 1)
//				{
//					Scientist.move_x = 0.2;
//				}
//
//				if (t_s == 1 && s_b == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (t_s == 1 && s_b == 1 && b_a == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_s == 1 && s_a == 1) {
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_s == 1 && s_a == 1 && a_b == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_b == 1) {
//					Builder.move_x = 0.2;
//				}
//
//				if (t_b == 1 && b_s == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (t_b == 1 && b_s == 1 && s_a == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_b == 1 && b_a == 1) {
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_b == 1 && b_a == 1 && a_s == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_a == 1)
//				{
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_a == 1 && a_s == 1) {
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_a == 1 && a_s == 1 && s_b == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_a == 1 && a_b == 1) {
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (t_a == 1 && a_b == 1 && b_s) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//			}
//
//
//			if (Keyboard::isKeyPressed(Keyboard::D)) {
//				Thief.move_x = -0.2;
//
//				if (Thief.move_y > 0 || Thief.move_y < 0) {
//					Thief.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Thief.LastKeyPressed = 2;
//
//
//				if (t_s == 1)
//				{
//					Scientist.move_x = -0.2;
//				}
//
//				if (t_s == 1 && s_b == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (t_s == 1 && s_b == 1 && b_a == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_s == 1 && s_a == 1) {
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_s == 1 && s_a == 1 && a_b == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_b == 1) {
//					Builder.move_x = -0.2;
//				}
//
//				if (t_b == 1 && b_s == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (t_b == 1 && b_s == 1 && s_a == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_b == 1 && b_a == 1) {
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_b == 1 && b_a == 1 && a_s == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_a == 1)
//				{
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_a == 1 && a_s == 1) {
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_a == 1 && a_s == 1 && s_b == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_a == 1 && a_b == 1) {
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (t_a == 1 && a_b == 1 && b_s) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//			}
//
//			if (dPadX1 == -100) {
//				Astronaut.move_x = 0.2;
//
//				if (Astronaut.move_y > 0 || Astronaut.move_y < 0) {
//					Astronaut.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//
//				Astronaut.LastKeyPressed = 1;
//
//
//				if (a_t == 1)
//				{
//					Thief.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_s == 1 && s_b == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_t == 1 && t_b == 1 && b_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_s == 1) {
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_b == 1) {
//					Builder.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (a_s == 1 && s_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1) {
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_s == 1) {
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (a_b == 1 && b_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//			}
//
//
//			if (dPadX1 == 100) {
//				Astronaut.move_x = -0.2;
//
//				if (Astronaut.move_y > 0 || Astronaut.move_y < 0) {
//					Astronaut.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Astronaut.LastKeyPressed = 2;
//
//
//				if (a_t == 1)
//				{
//					Thief.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_s == 1 && s_b == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_t == 1 && t_b == 1 && b_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_s == 1) {
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_b == 1) {
//					Builder.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (a_s == 1 && s_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1) {
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_s == 1) {
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (a_b == 1 && b_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//			}
//
//			if (Keyboard::isKeyPressed(Keyboard::Left)) {
//				Builder.move_x = 0.2;
//
//				if (Builder.move_y > 0 || Builder.move_y < 0) {
//					Builder.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//
//				Builder.LastKeyPressed = 1;
//
//
//				if (b_t == 1)
//				{
//					Thief.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_s == 1 && s_a == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_t == 1 && t_a == 1 && a_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_s == 1) {
//					Scientist.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_a == 1) {
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_s == 1 && s_a == 1 && a_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1) {
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_t == 1) {
//					Astronaut.move_x = 0.2;
//					Thief.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_t == 1 && t_s == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_s == 1) {
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (b_a == 1 && a_s == 1 && s_t == 1) {
//					Thief.move_x = 0.2;
//					Scientist.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//			}
//
//
//			if (Keyboard::isKeyPressed(Keyboard::Right)) {
//				Builder.move_x = -0.2;
//
//				if (Builder.move_y > 0 || Builder.move_y < 0) {
//					Builder.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Builder.LastKeyPressed = 2;
//
//
//				if (b_t == 1)
//				{
//					Thief.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_s == 1 && s_a == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_t == 1 && t_a == 1 && a_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_s == 1) {
//					Scientist.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_a == 1) {
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_s == 1 && s_a == 1 && a_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1) {
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_t == 1) {
//					Astronaut.move_x = -0.2;
//					Thief.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_t == 1 && t_s == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_s == 1) {
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (b_a == 1 && a_s == 1 && s_t == 1) {
//					Thief.move_x = -0.2;
//					Scientist.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//			}
//
//			if (dPadX0 == -100) {
//				Scientist.move_x = 0.2;
//
//				if (Scientist.move_y > 0 || Scientist.move_y < 0) {
//					Scientist.pico.setTextureRect(IntRect(56, 118, 45, 63));
//				}
//
//				Scientist.LastKeyPressed = 1;
//
//
//				if (s_t == 1) {
//					Thief.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_b == 1 && b_a == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_t == 1 && t_a == 1 && a_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_b == 1) {
//					Builder.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_t == 1 && t_a == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_a == 1) {
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_b == 1 && b_a == 1 && a_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1) {
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_t == 1) {
//					Thief.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_t == 1 && t_b == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_b == 1) {
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//				if (s_a == 1 && a_b == 1 && b_t == 1) {
//					Thief.move_x = 0.2;
//					Builder.move_x = 0.2;
//					Astronaut.move_x = 0.2;
//				}
//
//			}
//
//
//			if (dPadX0 == 100) {
//				Scientist.move_x = -0.2;
//
//				if (Scientist.move_y > 0 || Scientist.move_y < 0) {
//					Scientist.pico.setTextureRect(IntRect(56 + 45, 118, -45, 63));
//				}
//
//				Scientist.LastKeyPressed = 2;
//
//
//				if (s_t == 1) {
//					Thief.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_b == 1 && b_a == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_t == 1 && t_a == 1 && a_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_b == 1) {
//					Builder.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_t == 1 && t_a == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_a == 1) {
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_b == 1 && b_a == 1 && a_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1) {
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_t == 1) {
//					Thief.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_t == 1 && t_b == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_b == 1) {
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//				if (s_a == 1 && a_b == 1 && b_t == 1) {
//					Thief.move_x = -0.2;
//					Builder.move_x = -0.2;
//					Astronaut.move_x = -0.2;
//				}
//
//			}
//
//
//
//		}
//		////////////////////////////
//
//
//
//
//
//		
//		
//
//
//		if (helmeton == false) {
//			if (Astronaut.onground == false) {
//				Astronaut.move_y += (0.0007 * time);
//			}
//			Astronaut.onground = false;
//		}
//
//		if (helmeton == true) {
//			Astronaut.move_y -= (0.0007 * time);
//			Astronaut.onground = false;
//		}
//
//		if (Keyboard::isKeyPressed(Keyboard::Escape) || Joystick::isButtonPressed(1, 9) || Joystick::isButtonPressed(0, 9)) {
//			pause = true;
//
//		}
//		
//		bool a_animation = 1, b_animation = 1, s_animation = 1, t_animation = 1;
//		if (t_a == 1 || s_a == 1 || b_a == 1) {
//			a_animation = 0;
//		}
//		if (a_t == 1 || s_t == 1 || b_t == 1) {
//			t_animation = 0;
//		}
//		if (t_s == 1 || a_s == 1 || b_s == 1) {
//			s_animation = 0;
//		}
//		if (a_b == 1 || s_b == 1 || t_b == 1) {
//			b_animation = 0;
//		}
//
//
//		if (pause == false) {
//			Astronaut.update(time, left_wall, right_wall, a_animation, true);
//			Thief.update(time, left_wall, right_wall, t_animation);
//			Scientist.update(time, left_wall, right_wall, s_animation);
//			Builder.update(time, left_wall, right_wall, b_animation);
//		}
//	}
//}