//  ***************************************************************************
//  *
//  *    Move.h -- Header file for Move class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:07:04 2019
//  *
//  ***************************************************************************

#ifndef Move_H
#define Move_H

#include "Colour.h"
#include "PieceType.h"
#include "Piece.h"
#include "Square.h"

class Move
{
 public:

  // Class Data & Service functions

  static int number_of_moves;
  static int get_number_of_moves();

  // Constructor & Destructor functions

  Move();
  ~Move();

  // Set and Get functions

  void set_moved_piece( Piece* );
  Piece* get_moved_piece() const;

  void set_captured_piece( Piece* );
  Piece* get_captured_piece() const;

  void set_origin_square( Square );
  Square* get_origin_square() const;

  void set_destination_square( Square );
  Square* get_destination_square() const;

  void set_castled_pieces( Piece* );
  Piece* get_castled_pieces() const;

  void set_castled_origin( Piece* );
  Piece* get_castled_origin() const;

  void set_castled_destination( Piece* );
  Piece* get_castled_destination() const;

  // Other functions

  bool validate_choice( Piece* );
  bool validate_move( Square );
  Piece* remove_piece( Piece* );
  Square* move_piece( Piece* );
  Piece* select_piece( Square );
  bool is_check();
  bool is_checkmate();
  bool is_stalemate();
  
private:

  // Class attributes

  Piece *moved_piece;
  Piece *captured_piece;
  Square *origin_square;
  Square *destination_square;
  Piece **castled_pieces[2];
  Piece *castled_origin[2]; // Check comments in class diagram?
  Piece *castled_destination[2]; // Check comments in class diagram?
};

#endif
