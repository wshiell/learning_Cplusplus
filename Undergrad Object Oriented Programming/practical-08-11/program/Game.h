//  ***************************************************************************
//  *
//  *    Game.h -- Header file for Game class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:05:53 2019
//  *
//  ***************************************************************************

// See implementation file of this class for details on the functions listed
// below.

#ifndef Game_H
#define Game_H

#include <string>
#include "GameStatus.h"
#include "Colour.h"
#include "PieceType.h"
#include "Player.h"
#include "Board.h"

class Game
{
 public:
  
  // Class Data & Service functions

  static int number_of_games;
  static int get_number_of_games();
  static int total_games_played;
  static int get_total_games_played();
  static GameStatus current_status;
  static void set_current_status( GameStatus );
  static GameStatus get_current_status();


  // Constructor & Destructor functions

  Game();
  ~Game();

  // Set and Get functions

  void set_player( Player*, int );
  Player* get_player( int ) const;

  void set_board( Board* );
  Board* get_board() const;

  void set_winner( Player* );
  Player* get_winner() const;

  void set_loser( Player* );
  Player* get_loser() const;

  void set_drawn_game( bool );
  bool get_drawn_game() const;

  void set_turn_number( int );
  int get_turn_number() const;
  
  void set_win_condition( bool );
  bool get_win_condition() const;

  void set_coordinate( int, int );
  int get_coordinate( int ) const;
  
  // Other functions

  void run_game();
  
private:

  // Utility functions
  
  void initialise_game();
  void take_turn( Player* );
  void print_board( Board* );
  bool decompose_move( std::string );
  bool validate_choice( Square*, Player* );
  void clear_screen();
  void print_game_stats() const; // not on class diagram
  void print_start_screen( Board* ) const;
  void print_end_screen( Board* ) const;

  // Class attributes

  Player *player_array[2]; // holds pointers to the game Player objects
  Board *game_board; // pointer to Game object
  Player *winner; // assigned pointer to winning player
  Player *loser; // assigned pointer to losing player
  bool drawn_game; // returns true if the game was a draw (including stalemate)
  int turn_number; // records the current turn number in the game
  bool win_condition; // true if the win condition has beeen met
                      // (returning true does not mean the game is won,
                      // just that a condition has been satisfied to
                      // determinewhether the game is won, lost or drawn
                      // - ie. possible to be won)
  int move_coordinates[4]; // lists the x & y co-ordinates for the origin and
                           // destination squares [x_1, x_2, y_1, y_2]
};

#endif
