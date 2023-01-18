//  ***************************************************************************
//  *
//  *    Pawn.cpp -- Implementation file for Pawn class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:07:38 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Pawn.h"
using namespace std;

// number of instantiated pawns

int Pawn::number_of_pawns = 0;

// returns the number of instantiated pawns

int Pawn::get_number_of_pawns()
{
  return number_of_pawns;
}

// user-defined constructor

Pawn::Pawn()
{
  number_of_pawns++;

  set_piece_type(PieceType::Pawn);
  set_piece_name("pawn");
  set_piece_symbol();
  set_has_moved(false);
}

// user-defined destructor

Pawn::~Pawn()
{
  number_of_pawns--;
}

// function which sets the type of the piece

void Pawn::set_piece_type( PieceType type)
{
  piece_type = type;
}

// function which returns the type of the piece

PieceType Pawn::get_piece_type() const
{
  return piece_type;
}

// function defines an illustration of the associated piece symbol stored in
// a vector

void Pawn::set_piece_symbol()
{
  piece_symbol = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
}

// function returns the vector defining the symbol for the piece

vector< char > Pawn::get_piece_symbol() const
{
  return piece_symbol;
}

// set to true if the piece has moved; false if it has not

void Pawn::set_has_moved( bool moved )
{
  has_moved = moved;
}

// return whether or not the piece has moved (true if yes, false if no)

bool Pawn::get_has_moved() const
{
  return has_moved;
}

// function used to move a pawn appropriately if it reaches the eighth rank

Piece* Pawn::promote_pawn()
{
  // define this function
  Piece *temp_piece;
  return temp_piece;
}

// function which moves the pawn appropriately if 'en passant' is performed

void Pawn::en_passant()
{
  // define this function
}

// function which moves the pawn one square forward

void Pawn::move_one()
{
  // define this function
}

// function which moves the pawn two squares forward

void Pawn::move_two()
{
  // define this function
}

// function which replaces a promoted pawn with a piece chosen by the player

Piece* Pawn::promote_to()
{
  // define this function
  Piece *temp_piece;
  return temp_piece;
}

// function which moves the piece

void Pawn::move_piece()
{
  // DEFINE THIS FUNCTION!!!!!
}

// function which removes an opposing piece captured by this piece

Piece* Pawn::capture_piece() // NEED TO ADD AN ARGUMENT OF TYPE *PIECE????
{
  // define this function
  Piece *temp_piece;
  return temp_piece;  
}
  
