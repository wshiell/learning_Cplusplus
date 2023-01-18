//  ***************************************************************************
//  *
//  *    Square.h -- Header file for Square class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:09:40 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below. 

#ifndef Square_H
#define Square_H

 // ** Forward declaration: because 'Piece' class has not yet been compiled
 //    and therefore is not known to the program when the object code
 //    for 'Square' class is generated, a forward declaration is necessary
 //    so that the program knows of the existence of the 'Piece' class and
 //    will not produce errors **

class Piece;

#include <vector>
#include "Colour.h"
#include "PieceType.h"

const int MAX_MOVES = 1000; // defines value for the size of the array
                            // recording the occupation history of the square
                            // (see below - 'occupation_history')

class Square
{
 public:

  // Class Data & Service functions

  static int number_of_squares;
  static int get_number_of_squares();

  // Constructor & Destructor functions

  Square();
  ~Square();

  // Set and Get functions

  void set_square_ID();
  int get_square_ID() const;
  
  void set_colour( Colour );
  Colour get_colour() const;

  void set_square_symbol( Piece* );
  std::vector< char > get_square_symbol() const ;

  void set_is_occupied( bool );
  bool get_is_occupied() const;

  void set_is_attacked( bool );
  bool get_is_attacked() const;

  void set_occupying_piece( Piece* );
  Piece* get_occupying_piece() const;

  void set_attacking_pieces( Piece* );
  std::vector< Piece* > get_attacking_pieces() const;

  void set_square_height( int );
  int get_square_height() const;

  void set_square_width( int );
  int get_square_width() const;

  void set_occupation_history( Piece* );
  std::vector< Piece* > get_occupation_history() const;
  
  // Other functions

  void initialise_square();
  
 private:

  // Utility functions
  
  Piece* vacate();
  
  // Class attributes
  // Note: are the vectors below initialised with null/zero values by default?

  int square_ID; // number of square relative to all other Square objects
  Colour square_colour; // colour of square
  bool is_occupied; // returns true if the square is occupied by a piece
  bool is_attacked; // returns true if the square is being attacked
  Piece* occupying_piece; // specifies the piece occupying the square
  std::vector< Piece* > attacking_pieces = std::vector< Piece* > (32);
                        // contains a list of all pieces currently
                        // attacking the square. Note: this is also the same
                        // as a list of all pieces which can occupy the square
                        // except for kings in certain situations
                        // ie. king can't move into check
  int square_height; // specifies height of square (# of printed rows)
  int square_width;  // specifies width of square (# of printed columns)
  std::vector< Piece* > occupation_history = std::vector< Piece* > (MAX_MOVES);
                        // contains a list of all pieces which previously
                        // occupies this square and the move(s) during which
                        // the occupation took place
};

#endif
