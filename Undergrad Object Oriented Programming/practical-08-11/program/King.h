//  ***************************************************************************
//  *
//  *    King.h -- Header file for King class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:06:29 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below. Also see 'Piece.h' and 'Piece.cpp' for information on inherited
// functions and attributes.

#ifndef King_H
#define King_H

#include "Piece.h"

class King : public Piece // Derived from 'Piece' class
{
public:

  // Class Data & Service functions

  static int number_of_kings;
  static int get_number_of_kings();

  // Constructor & Destructor functions

  King();
  virtual ~King();

  // Set and Get functions

  virtual void set_piece_type( PieceType ) override;
  virtual PieceType get_piece_type() const override;

  virtual void set_piece_symbol() override;
  virtual std::vector< char > get_piece_symbol() const override;

  void set_has_castled( bool );
  bool get_has_castled() const;

  void set_has_moved( bool );
  bool get_has_moved() const;

  void set_in_check( bool );
  bool get_in_check() const;

  void set_checkmate( bool );
  bool get_checkmate() const;
  
  // Other Functions

  virtual void move_piece() override; 
  virtual Piece* capture_piece() override;
  void castle_kingside();
  void castle_queenside();
  
private:

  // Class attributes

  PieceType piece_type; // type of chess piece (eg. king)
  std::vector< char > piece_symbol = std::vector< char > (98);
                      // vector containing characters corresponding to
                      // a representation of the symbol for the given piece
  bool has_castled; // returns true if piece has castled
  bool has_moved; // returns true if piece has moved
  bool in_check; // returns true if king is in check
  bool checkmate; // returns true if king is in checkmate
};

#endif
