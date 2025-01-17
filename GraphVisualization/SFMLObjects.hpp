#pragma once

#include "SFML/Graphics.hpp"
class SFMLObjects {
public :
	SFMLObjects();
private :
	const int WINDOW_WIDTH = 800;
	const int WINDOW_HEIGHT = 800;
	sf::RenderWindow * window;
	sf::Clock* clock;
	sf::Mouse* mouse;
	
public :
	sf::RenderWindow * getWindow();
	const int getWindowHeight();
	const int getWindowWidth();
	sf::Clock* getClock();
	sf::Mouse* getMouse();
};
inline SFMLObjects sfmlObjects;