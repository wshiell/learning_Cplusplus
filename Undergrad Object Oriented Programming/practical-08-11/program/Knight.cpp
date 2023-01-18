//  ***************************************************************************
//  *
//  *    Knight.cpp -- Implementation file for Knight class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:06:54 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Knight.h"
using namespace std;

// number of instantiated knights

int Knight::number_of_knights = 0;

// returns the number of instantiated knights

int Knight::get_number_of_knights()
{
  return number_of_knights;
}

// user-defined constructor

Knight::Knight()
{
  number_of_knights++;

  set_piece_type(PieceType::Knight);
  set_piece_name("knight");
  set_piece_symbol();
  set_promoted_piece(false);
}

// user-defined destructor

Knight::~Knight()
{
  number_of_knights--;
}

// function which sets the type of the piece

void Knight::set_piece_type( PieceType type)
{
  piece_type = type;
}

// function which returns the type of the piece

PieceType Knight::get_piece_type() const
{
  return piece_type;
}

// function defines an illustration of the associated piece symbol stored in
// a vector

void Knight::set_piece_symbol()
{
  piece_symbol = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', '*', '*', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
}

// function returns the vector defining the symbol for the piece

vector< char > Knight::get_piece_symbol() const
{
  return piece_symbol;
}
  
// function which sets whether or not the piece is a promoted pawn

void Knight::set_promoted_piece( bool promoted )
{
  promoted_piece = promoted;
}

// function which returns true if the piece is a promoted pawn

bool Knight::get_promoted_piece() const
{
  return promoted_piece;
}

// function which moves the piece

void Knight::move_piece()
{
  // DEFINE THIS FUNCTION!!!!!
}

// function which removes an opposing piece captured by this piece

Piece* Knight::capture_piece() // NEED TO ADD AN ARGUMENT OF TYPE *PIECE????
{
  // define this function
  Piece *temp_piece;
  return temp_piece;
}
