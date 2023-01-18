//  ***************************************************************************
//  *
//  *    Piece.cpp -- Implementation file for Piece class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:08:02 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Piece.h"
using namespace std;

// number of instantiated Piece objects
// note: this will always be zero, as this is an abstract class

int Piece::number_of_pieces = 0;

// returns the number of instantiated pieces

int Piece::get_number_of_pieces() 
{
  return number_of_pieces;
}

// user-defined constructor

Piece::Piece()
{
  number_of_pieces++;

  // need to create 'empty' square so current/previous position set to 'null'?
  set_side_ID(0);
  set_captured(false);
  set_attacked(false);
}

// user-defined destructor

Piece::~Piece()
{
  number_of_pieces--;
}

// sets the name of the piece (ie. king = "K"). Can set the name of an
// abstract 'Piece' even though it cannot be instantiated

void Piece::set_piece_name( const string name )
{
  piece_name = name;
}

// returns the name of the piece

string Piece::get_piece_name() const
{
  return piece_name;
}
  
// assigns an ID number to the piece corresponding to the side to which
// the piece belongs

void Piece::set_side_ID( int ID )
{
  side_ID = ID;  
}

// returns the ID number of the side to which the piece belongs

int Piece::get_side_ID() const
{
  return side_ID;  
}

// sets the square currently occupied by the piece

void Piece::set_current_square( Square current )
{
  current_square = &current;
}

// returns the square currently occupied by the piece

Square* Piece::get_current_square() const
{
  return current_square;
}

// sets the square previously occupied by the piece

void Piece::set_previous_square( Square previous )
{
  previous_square = &previous;
}

// returns the square previously occupied by the piece

Square* Piece::get_previous_square() const
{
  return previous_square;
}

// set whether the piece has been captured (true if yes, false if no)

void Piece::set_captured( bool taken )
{
  captured = taken;
}

// return whether the piece has been captured (true if yes, false if no)

bool Piece::get_captured() const
{
  return captured;
}

// set whether the piece is being attacked (true if yes, false if no)

void Piece::set_attacked( bool menaced )
{
  attacked = menaced;
}

// returns whether the piece is being attacked (true if yes, false if no)

bool Piece::get_attacked() const
{
  return attacked;
}
