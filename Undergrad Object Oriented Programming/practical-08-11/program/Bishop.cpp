//  ***************************************************************************
//  *
//  *    Bishop.cpp -- Implementation file for Bishop class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 14:43:05 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Bishop.h"
using namespace std;

// number of instantiated bishops

int Bishop::number_of_bishops = 0;

// returns the number of instantiated bishops

int Bishop::get_number_of_bishops()
{
  return number_of_bishops;
}

// user-defined constructor

Bishop::Bishop()
{
  number_of_bishops++;

  set_piece_type(PieceType::Bishop);
  set_piece_name("bishop");
  set_piece_symbol();
  set_promoted_piece(false);
}

// user-defined destructor

Bishop::~Bishop()
{
  number_of_bishops--;
}

// function which sets the type of the piece

void Bishop::set_piece_type( PieceType type)
{
  piece_type = type;
}

// function which returns the type of the piece

PieceType Bishop::get_piece_type() const
{
  return piece_type;
}

// function defines an illustration of the associated piece symbol stored in
// a vector

void Bishop::set_piece_symbol()
{
  piece_symbol = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
}

// function returns the vector defining the symbol for the piece

vector< char > Bishop::get_piece_symbol() const
{
  return piece_symbol;
}

// function which sets whether or not the piece is a promoted pawn

void Bishop::set_promoted_piece( bool promoted )
{
  promoted_piece = promoted;
}

// function which returns true if the piece is a promoted pawn

bool Bishop::get_promoted_piece() const
{
  return true;
}

// function which moves the piece

void Bishop::move_piece()
{
  // DEFINE THIS FUNCTION!!!!!
}

// function which removes an opposing piece captured by this piece

Piece* Bishop::capture_piece() // NEED TO ADD AN ARGUMENT OF TYPE *PIECE????
{
  // define this function
  Piece *temp_piece;
  return temp_piece;
}
  
