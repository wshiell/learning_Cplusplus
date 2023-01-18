//  ***************************************************************************
//  *
//  *    Pawn.h -- Header file for Pawn class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:07:27 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below. Also see 'Piece.h' and 'Piece.cpp' for information on inherited
// functions and attributes.

#ifndef Pawn_H
#define Pawn_H

#include "Piece.h"

class Pawn : public Piece // Derived from 'Piece' class
{
public:

  // Class Data & Service functions

  static int number_of_pawns;
  static int get_number_of_pawns();

  // Constructor & Destructor functions

  Pawn();
  virtual ~Pawn();

  // Set and Get functions

  virtual void set_piece_type( PieceType ) override;
  virtual PieceType get_piece_type() const override;

  virtual void set_piece_symbol() override;
  virtual std::vector< char > get_piece_symbol() const override;

  void set_has_moved( bool );
  bool get_has_moved() const;

  // Other Functions

  virtual void move_piece() override; 
  virtual Piece* capture_piece() override;
  Piece* promote_pawn();
  void en_passant();
  void move_one();
  void move_two();
  Piece* promote_to();
  
private:

  // Class attributes

  PieceType piece_type; // type of chess piece (eg. king)
  std::vector< char > piece_symbol = std::vector< char > (98);
                      // vector containing characters corresponding to
                      // a representation of the symbol for the given piece
  bool has_moved; // returns true if the pawn has moved
};

#endif
