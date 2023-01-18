//  ***************************************************************************
//  *
//  *    chess_program.cpp -- Driver file for Chess Program
//  *    --
//  *    Author: Wade Shiell
//  *    Wed May 15 14:17:49 2019
//  *
//  ***************************************************************************

#include "Test_Class.h"
#include "Game.h"

using namespace std;

int main()
{
  Game *gamePtr = new Game(); // Instantiate a game object

  gamePtr->run_game(); // Start the game

  // delete gamePtr; // Delete the game pointer
}
