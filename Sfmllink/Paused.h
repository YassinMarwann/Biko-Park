#pragma once
#include <SFML\Graphics.hpp>


using namespace std;
using namespace sf;

class Paused
{
public:

	Text pausemenu[3];

	Paused(float screenratio, int sel,int midx, int pagenum,bool death,bool& i, int midy=600);

	void draw(RenderWindow& window);

	void MoveUp();

	void MoveDown();

	void SetSelected(int n);

	int pressed() {
		return selected;
	}
	
	~Paused();
	

private:
	int selected;
	Font font;

};
