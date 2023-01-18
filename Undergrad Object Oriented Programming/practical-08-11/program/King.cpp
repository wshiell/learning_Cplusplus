//  ***************************************************************************
//  *
//  *    King.cpp -- Implementation file for King class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:06:38 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "King.h"
using namespace std;

// number of instantiated kings

int King::number_of_kings = 0;

// returns the number of instantiated kings

int King::get_number_of_kings()
{
  return number_of_kings;
}

// user-defined constructor

King::King()
{
  number_of_kings++;

  set_piece_type(PieceType::King);
  set_piece_name("king");
  set_piece_symbol();
  set_has_castled(false);
  set_has_moved(false);
  set_in_check(false);
  set_checkmate(false);
}

// user-defined destructor

King::~King()
{
  number_of_kings--;
}

// function which sets the type of the piece

void King::set_piece_type( PieceType type)
{
  piece_type = type;
}

// function which returns the type of the piece

PieceType King::get_piece_type() const
{
  return piece_type;
}

// function defines an illustration of the associated piece symbol stored in
// a vector

void King::set_piece_symbol()
{
  piece_symbol = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
}

// function returns the vector defining the symbol for the piece

vector< char > King::get_piece_symbol() const
{
  return piece_symbol;
}

// function which sets whether piece has castled (true if yes, false if no)

void King::set_has_castled( bool castled )
{
  has_castled = castled;
}

// function which returns whether piece has castled (true if yes, false if no)

bool King::get_has_castled() const
{
  return has_castled;
}

// function which sets whether piece has moved (true if yes, false if no)

void King::set_has_moved( bool moved )
{
  has_moved = moved;
}

// function which returns whether piece has moved (true if yes, false if no)

bool King::get_has_moved() const
{
  return has_moved;
}

// function which sets whether king is in check (true if yes, false if no)

void King::set_in_check( bool check )
{
  in_check = check;
}

// function which returns whether king is in check (true if yes, false if no)

bool King::get_in_check() const
{
  return in_check;
}

// function which sets whether king is checkmated (true if yes, false if no)

void King::set_checkmate( bool mate )
{
  checkmate = mate;
}

// function which returns whether king is checkmated (true if yes, false if no)

bool King::get_checkmate() const
{
  return checkmate;
}

// function which moves the piece

void King::move_piece()
{
  // DEFINE THIS FUNCTION!!!!!
}

// function which removes an opposing piece captured by this piece

Piece* King::capture_piece() // NEED TO ADD AN ARGUMENT OF TYPE *PIECE????
{
  // define this function
  Piece *temp_piece;
  return temp_piece;  
}

// function which moves king if it castles kingside

void King::castle_kingside()
{
  // define this function
}

// function which moves king if it castles queenside

void King::castle_queenside()
{
  // define this function
}
