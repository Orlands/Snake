#include <iostream>

#include "Controller.hpp"

Controller::Controller(int xVal, int yVal)
{
  (void)xVal;
  (void)yVal;
  this->_currentDirection = EMPTY;
}

Controller::~Controller()
{
}

bool Controller::makeMap()
{
  this->_map = new Map(10, 10);
  return (true);
}

bool Controller::keyPressed()
{
  return (true);
}

void Controller::gameOver()
{
  std::cout << "Game Over" << std::endl;
}

bool Controller::startGame()
{
  if (this->makeMap() == false)
    return (false);
  for (;;) // Make a loop and wait a key event
    {
      if (this->keyPressed() == false)
	{
	  this->gameOver();
	  return (false);
	}
    }
  return (true);
}
