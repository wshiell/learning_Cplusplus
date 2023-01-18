//  ***************************************************************************
//  *
//  *    Rook.cpp -- Implementation file for Rook class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:09:14 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Rook.h"
using namespace std;

// number of instantiated rooks

int Rook::number_of_rooks = 0;

// returns the number of instantiated rooks

int Rook::get_number_of_rooks()
{
  return number_of_rooks;
}

//user-defined constructor

Rook::Rook()
{
  number_of_rooks++;

  set_piece_type(PieceType::Rook);
  set_piece_name("rook");
  set_piece_symbol();
  set_has_castled(false);
  set_has_moved(false);
  set_promoted_piece(false);
}

// user-defined destructor

Rook::~Rook()
{
  number_of_rooks--;
}

// function which sets the type of the piece

void Rook::set_piece_type( PieceType type)
{
  piece_type = type;
}

// function which returns the type of the piece

PieceType Rook::get_piece_type() const
{
  return piece_type;
}

// function defines an illustration of the associated piece symbol stored in
// a vector

void Rook::set_piece_symbol()
{
  piece_symbol = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', ' ', ' ', 
  		   ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', };
}

// function returns the vector defining the symbol for the piece

vector< char > Rook::get_piece_symbol() const
{
  return piece_symbol;
}

// function which sets whether piece has castled (true if yes, false if no)

void Rook::set_has_castled ( bool castled )
{
  has_castled = castled;
}

// function which returns whether piece has castled (true if yes, false if no)

bool Rook::get_has_castled() const
{
  return has_castled;
}

// function which sets whether piece has moved (true if yes, false if no)

void Rook::set_has_moved( bool moved )
{
  has_moved = moved; 
}

// function which returns whether piece has moved (true if yes, false if no)

bool Rook::get_has_moved() const
{
  return has_moved;
}

// function which sets whether or not the piece is a promoted pawn

void Rook::set_promoted_piece( bool promoted )
{
  promoted_piece = promoted;
}

// function which returns true if the piece is a promoted pawn

bool Rook::get_promoted_piece() const
{
  return promoted_piece;
}
  
// function which moves rook if it castles kingside

void Rook::castle_kingside()
{
  // define this function
}

// function which moves rook if it castles queenside

void Rook::castle_queenside()
{
  // define this function
}

// function which moves the piece

void Rook::move_piece()
{
  // DEFINE THIS FUNCTION!!!!!
}

// function which removes an opposing piece captured by this piece

Piece* Rook::capture_piece() // NEED TO ADD AN ARGUMENT OF TYPE *PIECE????
{
  // define this function
  Piece *temp_piece;
  return temp_piece;
}
  
