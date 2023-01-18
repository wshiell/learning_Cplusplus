//  ***************************************************************************
//  *
//  *    Side.h -- Header file for Side class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:09:23 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below.

#ifndef Side_H
#define Side_H

#include <vector>
#include "Colour.h"
#include "PieceType.h"
#include "Piece.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishop.h"
#include "Knight.h"
#include "Pawn.h"
#include "Default_Piece.h"

const int PIECE_TYPES = 6; // Number of different types of chess pieces
                           // (not including default pieces)
class Side
{
 public:

  // Class Data & Service functions

  static int number_of_sides;
  static int get_number_of_sides();

  // Constructor & Destructor functions

  Side();
  ~Side();

  // Set and Get functions

  void set_colour( Colour );
  Colour get_colour() const;

  void set_side_ID( int );
  int get_side_ID() const;
  
  void set_remaining_pieces( int );
  int get_remaining_pieces() const;

  void set_piece( int, Piece* );
  Piece* get_piece( int ) const;
  
  // Other functions

  void initialise_side();
  Piece* swap_piece( int, Piece* );
  Piece* remove_piece( int );
  
 private:

  // Class attributes

  Colour colour; // specifies the colour of a Side object
  int side_ID; // specifies the ID of the side being played
  int remaining_pieces; // specifies how many (non-captured) pieces remain
  std::vector< Piece* > piece_array = std::vector< Piece* > (16);
                        // contains the pieces assigned to a Side object in
                        // descending order of value
                        // (K->Q->R->R->B->B->N-N->P->......->P)
};

#endif
