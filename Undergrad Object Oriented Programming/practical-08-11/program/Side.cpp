//  ***************************************************************************
//  *
//  *    Side.cpp -- Implementation file for Side class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:09:30 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Side.h"
using namespace std;

// number of instantiated sides

int Side::number_of_sides = 0;

// returns the number of instantiated sides

int Side::get_number_of_sides()
{
  return number_of_sides;
}

// user-defined constructor

Side::Side()
{
  number_of_sides++;

  initialise_side();
}

// user-defined destructor

Side::~Side()
{
  number_of_sides--;

  for ( int i = 0; i < PIECE_TYPES; i++ ) {
    delete piece_array[i];
    piece_array[i] = nullptr;
  }
  cout << "check" << endl;
}

// initialises values of class attributes

void Side::initialise_side()
{
  set_colour(Colour::Black);
  set_side_ID(number_of_sides);
  set_remaining_pieces(16);

  // *** Demonstrate polymorphism ***
  // --------------------------------
  // Memory to objects corresponding to concrete objects of derived
  // piece classes is allocated to pointers of the base 'Piece' class.
  // These base pointers are then used throughout the program to
  // manipulate the instantiated objects of the derived classes.
  
  Piece *piecePtrArray[PIECE_TYPES];
  
  piecePtrArray[0] = new King();
  piecePtrArray[1] = new Queen();
  piecePtrArray[2] = new Rook();
  piecePtrArray[3] = new Bishop();
  piecePtrArray[4] = new Knight();
  piecePtrArray[5] = new Pawn();

  // objects of the derived classes corresponding to specific pieces on
  // a given side are assigned to the piece_array vector in descending value
  // order (see variable description in Side.h)

  // assigns K, Q, R (x2), B (x2) and N (x2)
  
  set_piece(0, piecePtrArray[2]);
  set_piece(1, piecePtrArray[4]);
  set_piece(2, piecePtrArray[3]);
  set_piece(3, piecePtrArray[1]);
  set_piece(4, piecePtrArray[0]);
  set_piece(5, piecePtrArray[3]);
  set_piece(6, piecePtrArray[4]);
  set_piece(7, piecePtrArray[2]);

  // assigns P (x8)  
  
  for ( int i = 8; i < 16; i++ ) {
    set_piece(i, piecePtrArray[5]);
  }

  // assigns an ID number to each piece corresponding to the side the piece
  // belongs to
  
  for ( int i = 0; i < 16; i++ ) {
    get_piece(i)->set_side_ID(number_of_sides);
  }  
}

// sets the colour of the side

void Side::set_colour( Colour hue )
{
  colour = hue;
}

// returns the colour of the side

Colour Side::get_colour() const
{
  return colour;
}

// sets the sides ID number

void Side::set_side_ID( int ID )
{
  side_ID = ID;
}

// returns the sides ID number

int Side::get_side_ID() const
{
  return side_ID;
}


// sets number of pieces remaining (not captured) on side

void Side::set_remaining_pieces( int remaining )
{
  remaining_pieces = remaining;
}

// returns number of pieces remaining (not captured)

int Side::get_remaining_pieces() const
{
  return remaining_pieces;
}

// assigns piece to a specific element of vector 'piece_array'

void Side::set_piece( int element, Piece* piecePtr )
{
  piece_array[element] = piecePtr;
}

// returns piece in specific element of vector 'piece_array'

Piece* Side::get_piece( int element ) const
{
  return piece_array[element];
}

// swaps piece in specified element of vector 'piece_array' for piece passed
// to function as argument; returns the piece previously occupying that
// element. Used when promoting pawns.

Piece* Side::swap_piece( int element, Piece* swapPtr )
{
  Piece *tempPiecePtr = get_piece(element); // pointer created in function:
                                            // will returning it cause issues?

  set_piece(element, swapPtr);

  return tempPiecePtr;
}

// removes piece from specified element in vector 'piece_array' and replaces
// it with a default piece. Used when a piece is captured. Reduces number
// of pieces remaining on a side by one.

Piece* Side::remove_piece( int element )
{
  int temp_remaining;
  Piece *defaultPtr = new Default_Piece();
  Piece *tempPiecePtr = get_piece(element); // pointer created in function:
                                            // will returning it cause issues?

  set_piece(element, defaultPtr);
  temp_remaining = remaining_pieces - 1;
  set_remaining_pieces(temp_remaining);

  return tempPiecePtr;
}
