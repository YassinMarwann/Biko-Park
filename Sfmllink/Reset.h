#pragma once
#include "Initialization.h"

void Reset() {
	
	left_wall = 117.5;
	right_wall = 100000;

	button_ispressedforwall = false;
	button_ispressed = false;
	button_ispressed2 = false;
	button_ispressed3 = false;
	button_ispressed4 = false;
	button_ispressed5 = false;
	button_ispressed6 = false;
	button_fakeispressed3 = false;
	button_fakeispressed1 = false;
	button_fakeispressed2 = false;
	button_ispressedforwall2 = false;
	button_ispressedforwall3 = false;
	button_ispressedforground = false;
	button_ispressedforground2 = false;
	button_ispressedcamera1 = false;
	button_ispressedcamera2 = false;

	maskon = false;
	helmeton = false;

	isunlocked = false;
	whoisTouching = 0;

	pause = false;
	sel = 0;
	i = true;

	laser_on = false;
	diagonal_laser_on1 = false;
	diagonal_laser_on2 = false;
	kills_thief = false;

	deathscreen = false;
	dead[0] = 0;
	dead[1] = 0;
	dead[2] = 0;
	dead[3] = 0;

	playsound = 0;
	doorsound = 0;
	deathsound = 0;
	hiddenbutton = 0;
	masktrue = 0;
	maskfalse = 1;
	helmtrue = 0;
	helmfalse = 1;
	tele1 = 0;
	tele2 = 1;

	Tdeathsound = 0;
	Sdeathsound = 0;
	Bdeathsound = 0;
	Adeathsound = 0;

	dooropen = false;
	fell = false;
	burn = false;
	stomped = false;
	hasmask = false;
	nomask = false;
	hashelm = false;
	nohelm = false;
	firsttele = false;
	secondtele = false;
	drawls = false;
	Tfell = false;
	Tburn = false;
	Tstomped = false;
	Sfell = false;
	Sburn = false;
	Sstomped = false;
	Bfell = false;
	Bburn = false;
	Bstomped = false;
	Afell = false;
	Aburn = false;
	Astomped = false;

	admin_powers = 0;
}

void mainmenureset() {
	freeplay = false;
	hard = false;
	easy = false;
	medium = false;

	left_wall = 117.5;
	right_wall = 100000;

	button_ispressedforwall = false;
	button_ispressed = false;
	button_ispressed2 = false;
	button_ispressed3 = false;
	button_ispressed4 = false;
	button_ispressed5 = false;
	button_ispressed6 = false;
	button_fakeispressed3 = false;
	button_fakeispressed1 = false;
	button_fakeispressed2 = false;
	button_ispressedforwall2 = false;
	button_ispressedforwall3 = false;
	button_ispressedforground = false;
	button_ispressedforground2 = false;
	button_ispressedcamera1 = false;
	button_ispressedcamera2 = false;

	maskon = false;
	helmeton = false;

	isunlocked = false;
	whoisTouching = 0;

	pause = false;
	sel = 0;
	i = true;

	laser_on = false;
	diagonal_laser_on1 = false;
	diagonal_laser_on2 = false;
	kills_thief = false;

	deathscreen = false;
	dead[0] = 0;
	dead[1] = 0;
	dead[2] = 0;
	dead[3] = 0;

	playsound = 0;
	doorsound = 0;
	deathsound = 0;
	hiddenbutton = 0;
	masktrue = 0;
	maskfalse = 1;
	helmtrue = 0;
	helmfalse = 1;
	tele1 = 0;
	tele2 = 1;

	Tdeathsound = 0;
	Sdeathsound = 0;
	Bdeathsound = 0;
	Adeathsound = 0;

	dooropen = false;
	fell = false;
	burn = false;
	stomped = false;
	hasmask = false;
	nomask = false;
	hashelm = false;
	nohelm = false;
	firsttele = false;
	secondtele = false;

	Tfell = false;
	Tburn = false;
	Tstomped = false;
	Sfell = false;
	Sburn = false;
	Sstomped = false;
	Bfell = false;
	Bburn = false;
	Bstomped = false;
	Afell = false;
	Aburn = false;
	Astomped = false;
	drawls = false;
	admin_powers = 0;

}

void soundreset() {
	playsound = 0;
	doorsound = 0;
	deathsound = 0;
	hiddenbutton = 0;
	masktrue = 0;
	maskfalse = 1;
	helmtrue = 0;
	helmfalse = 1;
	tele1 = 0;
	tele2 = 1;
	kills_thief = false;
	drawls = false;
	Tdeathsound = 0;
	Sdeathsound = 0;
	Bdeathsound = 0;
	Adeathsound = 0;

	dooropen = false;
	fell = false;
	burn = false;
	stomped = false;
	hasmask = false;
	nomask = false;
	hashelm = false;
	nohelm = false;
	firsttele = false;
	secondtele = false;

	Tfell = false;
	Tburn = false;
	Tstomped = false;
	Sfell = false;
	Sburn = false;
	Sstomped = false;
	Bfell = false;
	Bburn = false;
	Bstomped = false;
	Afell = false;
	Aburn = false;
	Astomped = false;

}