//  ***************************************************************************
//  *
//  *    Default_Piece.cpp -- Implementation file for Default_Piece class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 14:43:05 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Default_Piece.h"
using namespace std;

// number of instantiated default pieces

int Default_Piece::number_of_default_pieces = 0;

// returns the number of instantiated default pieces

int Default_Piece::get_number_of_default_pieces()
{
  return number_of_default_pieces;
}

// user-defined constructor

Default_Piece::Default_Piece()
{
  set_piece_type(PieceType::Default_Piece);
  set_piece_name("default piece");
  set_piece_symbol();
  number_of_default_pieces++;
}

// user-defined destructor

Default_Piece::~Default_Piece()
{
  number_of_default_pieces--;
}

// function which sets the type of the piece

void Default_Piece::set_piece_type( PieceType type)
{
  piece_type = type;
}

// function which returns the type of the piece

PieceType Default_Piece::get_piece_type() const
{
  return piece_type;
}

// function defines an illustration of the associated piece symbol stored in
// a vector

void Default_Piece::set_piece_symbol()
{
  piece_symbol = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
}

// function returns the vector defining the symbol for the piece

vector< char > Default_Piece::get_piece_symbol() const
{
  return piece_symbol;
}

// function which moves the piece

void Default_Piece::move_piece()
{
  // DEFINE THIS FUNCTION!!!!!
}

// function which removes an opposing piece captured by this piece

Piece* Default_Piece::capture_piece()
{
  Piece *temp_piece;
  return temp_piece;
}
  
