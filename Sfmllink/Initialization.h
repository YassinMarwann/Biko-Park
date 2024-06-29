#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Window.hpp>
#include <SFML\System.hpp>
#include <SFML\Audio.hpp>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <random>
#include <iomanip>
#include <vector>
#include <Windows.h>
#include <thread>
#include <chrono>
#include <fstream>
#include <string>





using namespace sf;
using namespace std;

float left_wall = 117.5;
float  right_wall = 100000;

bool isunlocked = false;
bool button_ispressedforwall = false;
bool button_ispressed = false; //laser
bool button_ispressed2 = false;
bool button_ispressed3 = false;
bool button_ispressed4 = false;
bool button_ispressed5 = false;
bool button_ispressed6 = false;
bool button_fakeispressed1 = false;
bool button_fakeispressed2 = false;
bool button_fakeispressed3 = false;
bool button_ispressedforwall2 = false;
bool button_ispressedforwall3 = false;
bool button_ispressedforground = false;
bool button_ispressedforground2 = false;
bool button_ispressedcamera1 = false;
bool button_ispressedcamera2 = false;

bool gotomenu = false;

bool maskon = false;
bool helmeton = false;
int whoisTouching = 0;
int how_many_touching = 0;

bool pause = false;
int sel = 0;

int pagenum = 1000;

int timer1 = 0;
int timer2 = 0;

int rotation = 0;

bool deathscreen = false;

// first under second
bool t_s = 0, t_b = 0, t_a = 0;
bool s_t = 0, s_b = 0, s_a = 0;
bool b_t = 0, b_s = 0, b_a = 0;
bool a_t = 0, a_b = 0, a_s = 0;

bool i = true;

bool display = false;

bool easy = false;
bool medium = false;
bool hard = false;
bool fp = false;

bool dead[4] = { 0,0,0,0 };

Clock clock2;

//astronaut -> 0
//scientist -> 1
//thief     -> 2
//builder   -> 3
float dPadX0 = Joystick::getAxisPosition(0, Joystick::PovX);
float dPadX1 = Joystick::getAxisPosition(1, Joystick::PovX);
float dPadY0 = Joystick::getAxisPosition(0, Joystick::PovY);
float dPadY1 = Joystick::getAxisPosition(1, Joystick::PovY);
float dPadY2 = Joystick::getAxisPosition(2, Joystick::PovY);
float dPadX2 = Joystick::getAxisPosition(2, Joystick::PovX);
float dPadY3 = Joystick::getAxisPosition(3, Joystick::PovY);
float dPadX3 = Joystick::getAxisPosition(3, Joystick::PovX);

int progress;
string difficult;
bool freeplay = false;

bool laser_on;
bool diagonal_laser_on1 = false;
bool diagonal_laser_on2 = false;

//for laser 1&2&3 in level 10
bool kills_thief = false;

// sounds

int playsound = 0;
int doorsound = 0;
int hiddenbutton = 0;
int deathsound = 0;
int masktrue = 0;
int maskfalse = 1;
int helmtrue = 0;
int helmfalse = 1;
int tele1 = 0;
int tele2 = 1;


int Tdeathsound = 0;
int Sdeathsound = 0;
int Bdeathsound = 0;
int Adeathsound = 0;



bool dooropen = false;
bool fell = false;
bool burn = false;
bool stomped = false;
bool hasmask = false;
bool nomask = false;
bool hashelm = false;
bool nohelm = false;
bool firsttele = false;
bool secondtele = false;


bool Tfell = false;
bool Tburn = false;
bool Tstomped = false;
bool Tpoisoned = false;

bool Sfell = false;
bool Sburn = false;
bool Sstomped = false;
bool Spoisoned = false;

bool Bfell = false;
bool Bburn = false;
bool Bstomped = false;
bool Bpoisoned = false;

bool Afell = false;
bool Aburn = false;
bool Astomped = false;
bool Apoisoned = false;

float screenratio= 1.125;

string inputText;
string desiredWord = "admin";

bool admin_powers = false;

bool scroll = true;

///////// 
int control[4] = { 0 , 1 , 0 , 2 };
//i = 0  is for thief			  0 -> keyboard     1 ->ps    2->xbox
//i = 1  is for scientist		                    1 ->ps    2->xbox
//i = 2  is for builder			  0 -> keyboard     1 ->ps    2->xbox
//i = 3  is for astro						        1 ->ps    2->xbox

int car_x = 7300, car_y = 540;

bool drawls = false;