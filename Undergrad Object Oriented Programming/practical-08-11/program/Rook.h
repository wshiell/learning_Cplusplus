//  ***************************************************************************
//  *
//  *    Rook.h -- Header file for Rook class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:09:06 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below. Also see 'Piece.h' and 'Piece.cpp' for information on inherited
// functions and attributes.

#ifndef Rook_H
#define Rook_H

#include "Piece.h"

class Rook : public Piece // Derived from 'Piece' class
{
public:

  // Class Data & Service functions

  static int number_of_rooks;
  static int get_number_of_rooks();

  // Constructor & Destructor functions

  Rook();
  virtual ~Rook();

  // Set and Get functions

  virtual void set_piece_type( PieceType ) override;
  virtual PieceType get_piece_type() const override;

  virtual void set_piece_symbol() override;
  virtual std::vector< char > get_piece_symbol() const override;

  void set_has_castled ( bool );
  bool get_has_castled() const;

  void set_has_moved( bool );
  bool get_has_moved() const;

  void set_promoted_piece( bool );
  bool get_promoted_piece() const;
  
  // Other Functions

  void castle_kingside();
  void castle_queenside();
  virtual void move_piece() override; 
  virtual Piece* capture_piece() override;
  
private:

  // Class attributes

  PieceType piece_type; // type of chess piece (eg. king)
  std::vector< char > piece_symbol = std::vector< char > (98);
                      // vector containing characters corresponding to
                      // a representation of the symbol for the given piece
  bool has_castled; // returns true if piece has castled
  bool has_moved; // returns true if piece has moved
  bool promoted_piece; // returns true if this piece is a promoted pawn
};

#endif
