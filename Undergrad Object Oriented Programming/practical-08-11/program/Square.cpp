//  ***************************************************************************
//  *
//  *    Square.cpp -- Implementation file for Square class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:09:48 2019
//  *
//  ***************************************************************************

class Move; // Forward declaration. For more information of forward
            // declaration, see 'Square.h'

#include <iostream>
#include "Square.h"
#include "Default_Piece.h"
#include "Move.h"

using namespace std;

// number of instantiated squares

int Square::number_of_squares = 0;

// returns the number of instantiated squares

int Square::get_number_of_squares()
{
  return number_of_squares;
}

// user-defined constructor

Square::Square()
{
  number_of_squares++;

  initialise_square();
}

// user-defined destructor

Square::~Square()
{
  number_of_squares--;

  delete get_occupying_piece();

  occupying_piece = nullptr;
}

// initialises values of class attributes

void Square::initialise_square()
{
  Piece *defaultPtr = new Default_Piece(); // ** Polymorphism **

  set_square_ID();
  set_colour(Colour::Black);
  set_is_occupied(false);
  set_is_attacked(false);
  set_occupying_piece(defaultPtr);
  set_square_height(7);
  set_square_width(14);
}

// sets the ID number for the square

void Square::set_square_ID()
{
  square_ID = number_of_squares;;
}

// returns the ID number for the square

int Square::get_square_ID() const
{
  return square_ID;
}

// sets the colour for the square

void Square::set_colour( Colour colour )
{
  square_colour = colour;
}

// returns the colour for the square

Colour Square::get_colour() const
{
  return square_colour;
}

// sets whether the square is occupied (true if yes, false if no)

void Square::set_is_occupied( bool occupied )
{
  is_occupied = occupied;
}

// returns whether the square is occupied (true if yes, false if no)

bool Square::get_is_occupied() const
{
  return is_occupied;;
}

// sets whether the square is being attacked (true if yes, false if no)

void Square::set_is_attacked( bool attacked )
{
  is_attacked = attacked;
}

// returns whether the square is being attacked (true if yes, false if no)

bool Square::get_is_attacked() const
{
  return is_attacked;
}

// assigns the functions argument as the piece occupying the square

void Square::set_occupying_piece( Piece* occupyPtr )
{
  occupying_piece = occupyPtr;
  //  set_occupation_history(occupyPtr);
}

// returns the piece occupying the square

Piece* Square::get_occupying_piece() const
{
  return occupying_piece;
}

// adds/removes pieces from the 'attacking_pieces' array as the
// specific pieces attacking the square changes

void Square::set_attacking_pieces( Piece* attackingPtr )
{
  // define this portion
    
  // Need to cycle through all pieces on the board; check if they are
  // attacking the square. If they aren't already on the list and they
  // are attacking the square, add them. If they are on the list, and
  // they are still attacking the square, leave them. If they are on the
  // list and they are no longer attacking the square, remove them from
  // the list
}

// returns the vector of pieces attacking the square

vector< Piece* > Square::get_attacking_pieces() const
{
  // returns the vector containing the list of attacking pieces
  
  return attacking_pieces;
}

// sets the height of the square (in printed rows)

void Square::set_square_height( int height )
{
  square_height = height;
}

// returns the height of the square (in printed rows)

int Square::get_square_height() const
{
  return square_height;
}

// sets the width of the square (in printed rows)

void Square::set_square_width( int width )
{
  square_width = width;
}

// returns the width of the square (in printed rows)

int Square::get_square_width() const
{
  return square_width;
}

// adds a piece to the end of the 'occupation_history' vector if it
// moves into the square

void Square::set_occupation_history( Piece* occupyPtr )
{
  // When a piece occupies a square, add that piece (by value) to the
  // end of the occupation_history vector.  
  
  occupation_history[Move::number_of_moves - 1] = occupyPtr;
}

// returns the vector 'occupation_history'

vector< Piece* > Square::get_occupation_history() const
{
  return occupation_history;;
}

// removes a piece from a square (replaces it with 'Default_Piece')

Piece* Square::vacate()
{
  Piece *defaultPtr = new Default_Piece();
  Piece *tempPiecePtr = get_occupying_piece();

  set_occupying_piece(defaultPtr);

  return tempPiecePtr;
}

