//  ***************************************************************************
//  *
//  *    Piece.h -- Header file for Piece class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:07:53 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below. 

#ifndef Piece_H
#define Piece_H

#include <vector>
#include "Colour.h"
#include "PieceType.h"
#include "Square.h"

class Piece
{
 public:

  // Class Data & Service functions

  static int number_of_pieces;
  static int get_number_of_pieces();

  // Constructor & Destructor functions

  Piece();
  virtual ~Piece();

  // Set and Get functions

  void set_piece_name( const std::string );
  std::string get_piece_name() const;
  
  void set_side_ID( int );
  int get_side_ID() const;
  
  void set_current_square( Square );
  Square* get_current_square() const;

  void set_previous_square( Square );
  Square* get_previous_square() const;

  void set_captured( bool );
  bool get_captured() const;

  void set_attacked( bool );
  bool get_attacked() const;
  
  // Other functions

  // ** Pure virtual functions - make the class abstract. Not implemented
  //    as part of the Piece class. See derived classes for further information
  //    about these functions **
  
  virtual void set_piece_type( PieceType ) = 0; // pure virtual
  virtual PieceType get_piece_type() const = 0; // pure virtual 
  virtual void set_piece_symbol() = 0; // pure virtual 
  virtual std::vector< char > get_piece_symbol() const = 0; // pure virtual 
  virtual void move_piece() = 0; // pure virtual 
  virtual Piece* capture_piece() = 0; // pure virtual 
  
 private:

  // Class attributes

  std::string piece_name; // String representing name of piece
  int side_ID; // ID number representing side to which piece belongs
  Square *current_square; // current square the piece occupies
  Square *previous_square; // previous square the piece occupied
  bool captured; // returns true if the piece has been captured
  bool attacked; // returns true if the piece is currently being attacked
};

#endif
