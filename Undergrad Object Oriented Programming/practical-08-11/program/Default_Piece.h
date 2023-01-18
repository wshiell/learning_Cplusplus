//  ***************************************************************************
//  *
//  *    Default_Piece.h -- Header file for Default_Piece class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 14:42:52 2019
//  *
//  ***************************************************************************

// ** Default pieces can be instantiated, and represent a 'null' piece
//    - ie. a piece which has no symbol and cannot be used by a player,
//    but which exists to ensure that squares unoccupied by standard pieces
//    are not filled with garbage data. **

// See implementation file of this class for details on the functions listed
// below. Also see 'Piece.h' and 'Piece.cpp' for information on inherited
// functions and attributes.

#ifndef Default_Piece_H
#define Default_Piece_H

#include "Piece.h"

class Default_Piece : public Piece // Derived from 'Piece' class
{
 public:

  // Class Data & Service functions

  static int number_of_default_pieces;
  static int get_number_of_default_pieces();

  // Constructor & Destructor functions

  Default_Piece();
  virtual ~Default_Piece();

  // Set and Get functions

  virtual void set_piece_type( PieceType ) override;
  virtual PieceType get_piece_type() const override;

  virtual void set_piece_symbol() override;
  virtual std::vector< char > get_piece_symbol() const override;

  // Other functions

  virtual void move_piece() override; 
  virtual Piece* capture_piece() override;

 private:

  // Class attributes

  PieceType piece_type; // type of chess piece (eg. king)
  std::vector< char > piece_symbol = std::vector< char > (98);
                      // vector containing characters corresponding to
                      // a representation of the symbol for the given piece
};

#endif
