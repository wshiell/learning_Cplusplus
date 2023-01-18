//  ***************************************************************************
//  *
//  *    Player.h -- Header file for Player class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:08:31 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below.

#ifndef Player_H
#define Player_H

#include <string>
#include "GameStatus.h"
#include "Colour.h"
#include "PieceType.h"
#include "Side.h"
#include "Square.h"
#include "Move.h"
#include "Piece.h"

class Player
{
public:

  // Class Data & Service functions

  static int number_of_players;
  static int get_number_of_players();

  // Constructor & Destructor functions

  Player();
  ~Player();

  // Set and Get functions

  void set_player_ID();
  int get_player_ID() const;

  void set_player_name( const std::string );
  std::string get_player_name() const;
  
  void set_side_played( Side* );
  Side* get_side_played() const;

  void set_move_number();
  int get_move_number() const;

  void set_choice_status( bool );
  bool get_choice_status() const;

  void set_move_status( bool );
  bool get_move_status() const;

  void set_is_check( bool );
  bool get_is_check() const;

  void set_is_checkmate( bool );
  bool get_is_checkmate() const;

  void set_is_stalemate( bool );
  bool get_is_stalemate() const;

  void set_moves( Move ); // Sets move in array
  Move get_moves() const; // Gets move from array

  // Other functions

  void initialise_player();
  Piece* make_choice( Square* );
  bool validate_choice();
  void make_move();
  bool validate_move();
  bool test_checkmate();
  bool test_stalemate();

private:

  // Class attributes
  
  int player_ID; // player number (ie. player #1 or player #2)
  std::string player_name; // player's name
  Side *side_played; // which side is being played (#1 or #2)
  int move_number; // the number of the current move
  bool choice_status;
  bool move_status;
  bool is_check;
  bool is_checkmate;
  bool is_stalemate;
  Move moves_array[MAX_MOVES];
};

#endif
