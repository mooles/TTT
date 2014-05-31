#include "ClickBox.h"
#include <SFML/Window/Mouse.hpp>

ClickBox::ClickBox(int x, int y, int w, int h)
{
	this->boundbox.left = x;
	this->boundbox.top = y;
	this->boundbox.width = w;
	this->boundbox.height = h;

	bounds.x = boundbox.left;
	bounds.y = boundbox.top;
}

void ClickBox::update(sf::RenderWindow window)
{
	if (boundbox.contains(sf::Mouse::getPosition(window)))
	{
		check();
	}
}

bool ClickBox::check()
{
	//fuck
	clickAction();
	return true;
}


sf::Vector2i ClickBox::clickAction()
{
	//return the vector
}