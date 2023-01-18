//  ***************************************************************************
//  *
//  *    Player.cpp -- Implementation file for Player class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:08:42 2019
//  *
//  ***************************************************************************

#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

// number of instantiated players

int Player::number_of_players = 0;

// returns the number of instantiated players

int Player::get_number_of_players()
{
  return number_of_players;
}

// user-defined constructor

Player::Player()
{
  number_of_players++;

  initialise_player();
}

// user-defined destructor

Player::~Player()
{
  number_of_players--;

  delete get_side_played();
}

// initialises values of class attributes

void Player::initialise_player()
{
  Side *tempSidePtr = new Side();
  
  set_player_ID();
  set_player_name("");
  set_side_played(tempSidePtr);
  set_move_number();
  set_choice_status(false);
  set_move_status(false);
  set_is_check(false);
  set_is_checkmate(false);
  set_is_stalemate(false);
}

// sets the players ID number

void Player::set_player_ID()
{
  player_ID = number_of_players;;
}

// returns the players ID number

int Player::get_player_ID() const
{
  return player_ID;
}

// sets the players name

void Player::set_player_name( const string name )
{
  player_name = name;
}

// returns the players name

string Player::get_player_name() const
{
  return player_name;
}

// sets the side being played

void Player::set_side_played( Side *played )
{
  side_played = played;
}

// returns the side being played

Side* Player::get_side_played() const
{
  return side_played;
}

// sets the current move number IS THIS FUNCTION NECESSARY - IE Move::number_of_moves instead?

void Player::set_move_number()
{
  move_number = Move::number_of_moves;
}

// returns the current move number SEE ABOVE FUNCTION, ALSO NOT NEEDED?

int Player::get_move_number() const
{
  return move_number;
}

// sets whether the choice made is valid

void Player::set_choice_status( bool choice )
{
  choice_status = choice;
}

// returns whether the choice made is valid

bool Player::get_choice_status() const
{
  return choice_status;
}

// sets whether the move made is valid

void Player::set_move_status( bool move )
{
  move_status = move;
}

// returns whether the move made is valid

bool Player::get_move_status() const
{
  return move_status;
}

// sets whether the player is in check

void Player::set_is_check( bool check )
{
  is_check = check;
}

// returns whether the player is in check

bool Player::get_is_check() const
{
  return is_check;
}

// sets whether the player is in checkmate

void Player::set_is_checkmate( bool checkmate )
{
  is_checkmate = checkmate;
}

// returns whether the player is in checkmate

bool Player::get_is_checkmate() const
{
  return is_checkmate;
}

// sets whether the game has resulted in stalemate

void Player::set_is_stalemate( bool stalemate )
{
  is_stalemate = stalemate;
}

// returns whether the game has resulted in stalemate

bool  Player::get_is_stalemate() const
{
  return is_stalemate;
}

// Adds the current move to the end of the moves_array list

void Player::set_moves( Move selection)
{
  moves_array[Move::number_of_moves] = selection;
}

// returns the list of moves made

Move Player::get_moves() const
{
  return *moves_array;
}

Piece* Player::make_choice( Square *position )
{
  return position->get_occupying_piece();
}

bool Player::validate_choice()
{
  return 0;
}

void Player::make_move()
{
  
}

bool Player::validate_move()
{
  return 0;
}

bool Player::test_checkmate()
{
  return 0;
}

bool Player::test_stalemate()
{
  return 0;
}
