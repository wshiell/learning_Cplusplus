//  ***************************************************************************
//  *
//  *    Board.h -- Header file for Board class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:04:27 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below.

#ifndef Board_H
#define Board_H

#include <vector>
#include "Colour.h"
#include "PieceType.h"
#include "Square.h"
#include "Side.h"

const int NUMBER_SIDES = 2; // defines the number of sides on the board
const int ROWS = 8; // defines the number of rows on the board
const int COLUMNS = 8; // defines the number of columns on the board

class Board
{
 public:

  // Class Data & Service functions

  static int number_of_boards;
  static int get_number_of_boards();

  // Constructor & Destructor functions

  Board();
  ~Board();

  // Set and Get functions

  void set_board( std::vector< Side* > );
  Square* get_board() const;

  void set_square( Square*, int, int );
  Square* get_square( int, int ) const;
  
  void set_side( int, Side* );
  Side* get_side( int ) const;
  
  // Other functions

  void initialise_board();
  void reset_board();

private:

  // Class attributes

  // note: an array is being used here as opposed to a vector, as a two
  // dimensional array seems a more natural way to represent a chess board
  Square* game_board[8][8]; // contains 64 Square objects corresponding
                            // to the squares on a chess board
  std::vector< Side* > side_array = std::vector< Side* > (NUMBER_SIDES);
                       // contains the sides assigned to the chess board
};

#endif
