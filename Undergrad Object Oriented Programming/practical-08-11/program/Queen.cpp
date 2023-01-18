//  ***************************************************************************
//  *
//  *    Queen.cpp -- Implementation file for Queen class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:08:59 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Queen.h"
using namespace std;

// number of instantiated queens

int Queen::number_of_queens = 0;

// returns the number of instantiated queens

int Queen::get_number_of_queens()
{
  return number_of_queens;
}

// user-defined constructor

Queen::Queen()
{
  number_of_queens++;

  set_piece_type(PieceType::Queen);
  set_piece_name("queen");
  set_piece_symbol();
  set_promoted_piece(false);
}

// user-defined destructor

Queen::~Queen()
{
  number_of_queens--;
}

// function which sets the type of the piece

void Queen::set_piece_type( PieceType type)
{
  piece_type = type;
}

// function which returns the type of the piece

PieceType Queen::get_piece_type() const
{
  return piece_type;
}

// function defines an illustration of the associated piece symbol stored in
// a vector

void Queen::set_piece_symbol()
{
  piece_symbol = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  		   ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
}

// function returns the vector defining the symbol for the piece

vector< char > Queen::get_piece_symbol() const
{
  return piece_symbol;
}

// function which sets whether or not the piece is a promoted pawn

void Queen::set_promoted_piece( bool promoted )
{
  promoted_piece = promoted;
}

// function which returns true if the piece is a promoted pawn

bool Queen::get_promoted_piece() const
{
  return promoted_piece;
}

// function which moves the piece

void Queen::move_piece()
{
  // DEFINE THIS FUNCTION!!!!!
}

// function which removes an opposing piece captured by this piece

Piece* Queen::capture_piece() // NEED TO ADD AN ARGUMENT OF TYPE *PIECE????
{
  // define this function
  Piece *temp_piece;
  return temp_piece;
}
  
