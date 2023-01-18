//  ***************************************************************************
//  *
//  *    Bishop.h -- Header file for Bishop class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 14:42:52 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below. Also see 'Piece.h' and 'Piece.cpp' for information on inherited
// functions and attributes.

#ifndef Bishop_H
#define Bishop_H

#include "Piece.h"

class Bishop : public Piece // Derived from 'Piece' class
{
public:

  // Class Data & Service functions

  static int number_of_bishops;
  static int get_number_of_bishops();

  // Constructor & Destructor functions

  Bishop();
  virtual ~Bishop();

  // Set and Get functions

  virtual void set_piece_type( PieceType ) override;
  virtual PieceType get_piece_type() const override;

  virtual void set_piece_symbol() override;
  virtual std::vector< char > get_piece_symbol() const override;

  void set_promoted_piece( bool );
  bool get_promoted_piece() const;
  
  // Other Functions

  virtual void move_piece() override; 
  virtual Piece* capture_piece() override;
  
 private:

  // Class attributes

  PieceType piece_type; // type of chess piece (eg. king)
  std::vector< char > piece_symbol = std::vector< char > (98);
                      // vector containing characters corresponding to
                      // a representation of the symbol for the given piece
  bool promoted_piece; // returns true if this piece is a promoted pawn
};

#endif
