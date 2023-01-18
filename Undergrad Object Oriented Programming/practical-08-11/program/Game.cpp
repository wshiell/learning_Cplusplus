//  ***************************************************************************
//  *
//  *    Game.cpp -- Implementation file for Game class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:06:04 2019
//  *
//  ***************************************************************************

#include <iostream>
#include <stdlib.h>
#include "Game.h"
using namespace std;

// number of instantiated games

int Game::number_of_games = 0;

// returns the number of instantiated games

int Game::get_number_of_games()
{
  return number_of_games;
}

// Total number of games played during a session (as opposed to
// the total number of currently instantiated games, which is
// recorded in the variable 'number_of games')

int Game::total_games_played = 0;

// returns the total number of games 

int Game::get_total_games_played()
{
  return total_games_played;    
}

// Indicates the current status of the game - ie. returning this
// variable tells the program whether the game is underway, is won,
// is lost, whether the turn is over, etc.

GameStatus Game::current_status = GameStatus::StartTurn;

// sets current game status

void Game::set_current_status( GameStatus status )
{
  current_status = status;
}

// returns current game status

GameStatus Game::get_current_status()
{
  return current_status;
}

// user-defined constructor

Game::Game()
{
  number_of_games++;
  total_games_played++;

  initialise_game();
}

// user-defined destructor

Game::~Game()
{
  number_of_games--;

  delete get_board();
  delete get_player(0);
  delete get_player(1);

  game_board = nullptr;
  player_array[0] = nullptr;
  player_array[1] = nullptr;
}

// initialises values of class attributes

void Game::initialise_game()
{
  Board *boardPtr = new Board();
  Player *playerPtr1 = new Player(); 
  Player *playerPtr2 = new Player();
  Player *tempPlayerPtr = new Player();

  playerPtr1->set_side_played(boardPtr->get_side(0));
  playerPtr1->get_side_played()->set_side_ID(1);
  playerPtr2->set_side_played(boardPtr->get_side(1));
  playerPtr2->get_side_played()->set_side_ID(2);
  
  set_player(playerPtr1, 0);
  set_player(playerPtr2, 1);
  set_board(boardPtr);
  set_winner(tempPlayerPtr);
  set_loser(tempPlayerPtr);
  set_drawn_game(false);
  set_turn_number(0);
  set_win_condition(false);

  for ( int i = 0; i < 4; i++ ) {
    move_coordinates[i] = 0;
  }
}

// assigns player pointer to specified element of array 'player_array'

void Game::set_player( Player *competitor, int element )
{
  player_array[element] = competitor;
}

// returns player pointer at specified element of array 'player_array'

Player* Game::get_player( int element ) const
{
  return player_array[element];
}

// assigns a new Board object to variable 'game_board'

void Game::set_board( Board *board )
{
  game_board = board;
}

// returns the Board pointer stored in 'game_board'

Board* Game::get_board() const
{
  return game_board;
}

// assigns a winning player to variable 'winner'

void Game::set_winner( Player *winning_player )
{
  winner = winning_player;
}

// returns the winning player

Player* Game::get_winner() const
{
  return winner;
}

// assigns a losing player to variable 'loser

void Game::set_loser( Player *losing_player )
{
  loser = losing_player;
}

// returns the losing player

Player* Game::get_loser() const
{
  return loser;
}

// records whether the game is a draw (true for yes, false for no)

void Game::set_drawn_game( bool draw )
{
  drawn_game = draw;
}

// returns whether the match is a draw (true for yes, false for no)

bool Game::get_drawn_game() const
{
  return drawn_game;
}

// records the current turn number

void Game::set_turn_number( int turn )
{
  turn_number = turn;
}

// returns the current turn number

int Game::get_turn_number() const
{
  return turn_number;
}

// sets the win condition 

void Game::set_win_condition( bool status )
{
  win_condition = status;
}

// returns the win condition

bool Game::get_win_condition() const
{
  return win_condition;
}

// sets the appropriate x or y coordinate passed to the function
// at the given element

void Game::set_coordinate( int element, int value )
{
  move_coordinates[element] = value;
}

// returns the appropriate x or y coordinate corresponding to
// the element passed as an argument

int Game::get_coordinate( int element ) const
{
  return move_coordinates[element];
}
  
// function which manages the running of a particular instance of Game class

void Game::run_game()
{
  while ( get_current_status() == GameStatus::StartTurn ) {
    int temp = get_turn_number();

    set_turn_number(temp++);
    clear_screen();    
    take_turn(get_player(0)); // first player takes their turn

    // game continuation condition is checked; program continues if
    // win condition has not changed
    if ( get_current_status() == GameStatus::StartTurn ) {
      clear_screen();
      take_turn(get_player(1)); // second player takes their turn
    }
  }

  // if the last turn resulted in stalemate, the game exits with an
  // appropriate message displayed
  if ( get_current_status() == GameStatus::Stalemate ) {
    cout << "** Stalemate ** " << endl;
  }

  // if player 1 wins, the game exits with an appropriate message displayed
  if ( get_winner() == get_player(0) ) {
    cout << "** Player 1 Wins **" << endl;
  }

  // if player 2 wins, the game exits with an appropriate message displayed  
  if ( get_winner() == get_player(1) ) {
    cout << "** Player 2 Wins **" << endl;
  }

  // if the last turn resulted in a draw, the game exits with an
  // appropriate message displayed (note: stalemate is also a draw)
  if ( get_drawn_game() ) {
    cout << "** Game Drawn ** " << endl;
  }
}

// function which manages the turn taken by a specific player

void Game::take_turn( Player *competitor )
{
  //  List relevant information about players choice options

  Square *chosenSquarePtr = new Square();
  string input; // holds input when player is prompted to enter data
  string move; // temporarily holds the value of the move the player chooses
  int choice; // player choice - offer draw/resign/move
  int draw; // draw acceptance - 0: not accepted, 1: accepted
  int valid = 0; // counts the number of valid selection variables
                 // (ie. choosing an integer, the program expects an integer
                 // value one character long (1), and of the appropriate values (2))

  // change the GameStatus to 'Continue' so program control will
  // stay in the function until a continuation condition determined
  // below is satisfied, and control exits the function
  set_current_status(GameStatus::Continue);

  // player chooses whether to resign, offer a draw or make their move
  cout << "** Player " << competitor->get_player_ID() << " **" << endl;
  cout << "Offer Draw (1); Resign from Game (2); Take Turn (3)" << endl
       << "> ";
  getline(cin, input);
  choice = (int) input[0] - 48; // player choice is converted from a string to
                                // an integer

  // this while loop (and similar while loops which follow) validate whether the
  // player's input is correct. It determines the appropriate format for player
  // input (ie. a single integer for choosing draw/resign/move) and prints an
  // error message if the input does not match what is expected, then asks the user
  // to re-enter their choice (note: the comments for this while loop will suffice
  // to describe each of the subsequent while loops, except where an additional
  // comment is required to explain a new feature).
  while ( valid != 2 ) { // two valid choices

    if ( input.size() == 1 ) { // valid choice #1 - single character
      valid++;
    }

    if ( choice == 1 || choice == 2 || choice == 3 ) { // valid choice #2
      valid++;                                         // 1, 2 or 3 only
    }

    // if the player's input is invalid, the program displays an error message
    // and prompts them to re-enter their choice
    if ( valid != 2 ) {
      valid = 0;
      clear_screen();
      cout << "** Player " << competitor->get_player_ID() << " **";
      cout << " INVALID CHOICE" << endl;
      cout << "Offer Draw (1); Resign from Game (2); Take Turn (3)" << endl
	   << "> ";
      getline(cin, input);
      choice = (int) input[0] - 48;
    }
  }
  valid = 0;

  // until a correct choice is made (ie. resign or make a valid move), the
  // GameStatus remains equal to 'Continue', and the player is prompted to
  // enter data as directed
  while ( get_current_status() == GameStatus::Continue ) {

    // switch statement selects between three choices:
    // (1): offer draw
    // (2): resign from game
    // (3): make move
    switch (choice) {

    case 1: // offer draw    
      clear_screen();
      cout << "** Player " << competitor->get_player_ID() << " **" << endl;
      cout << "Draw offered. Is draw accepted? (0 - no, 1 - yes)" << endl
	   << "> ";
      getline(cin, input);
      draw = (int) input[0] - 48;
 
      while ( valid != 2 ) {

	if ( input.size() == 1 ) {
	  valid++;
	}

	if ( draw == 0 || draw == 1 ) {
	  valid++;
	}

	if ( valid != 2 ) {
	  valid = 0;
	  clear_screen();
	  cout << "** Player " << competitor->get_player_ID() << " **";
	  cout << " INVALID CHOICE" << endl;
          cout << "Draw offered. Is draw accepted? (0 - no, 1 - yes)" << endl
	       << "> ";
	  getline(cin, input);
	  draw = (int) input[0] - 48;
	}
      }
      valid = 0;

      // draw is accepted
      if ( draw == 1 ) {
	clear_screen();
	cout << "** Player " << competitor->get_player_ID() << " **" << endl;
	cout << "Draw accepted." << endl;
  	set_current_status(GameStatus::Draw); // GameStatus set to 'Draw', and
	                                      // control will exit function when
	                                      // while loop terminates
      }
      // draw not accepted. Player will be prompted to enter a new choice (see below)
      else {
	clear_screen();
	cout << "** Player " << competitor->get_player_ID() << " **" << endl;
	cout << "Drawn not accepted." << endl;
      }
      break;
    
    case 2: // resign from game
      set_current_status(GameStatus::Resign);
      break;
    
    case 3: // make move
      clear_screen();
      cout << "** Player " << competitor->get_player_ID() << " **" << endl;
      cout << "Enter move (eg. H3-G4, q to quit move):" << endl << "> ";
      getline(cin, move);
      decompose_move(move); // control passes to function 'decompose move'
                            // (see comments above the function definition)
  
      while ( valid != 2 ) {

	// if the player changes their mind about wanting to move after
	// having chosen option '3', they can return to the choice menu by
	// entering either 'q' or 'Q' (note: only 'q' is given as an option for
	// the player, but in case they enter a capital 'Q' the program will also
	// interpret that as a direction to return to the choice menu)
	if ( move == "q" || move == "Q" ) {
	  set_current_status(GameStatus::Continue);
	  valid = 2;
	}
	
	if ( move.size() == 5 ) { // program expects a string 5 characters long
	  valid++;
	}
 
	if ( validate_choice(chosenSquarePtr, competitor) ) { // program
	  valid++;               // determines whether the values for origin
	}                        // and destination squares are valid (see function
	                         // description for 'validate_choice()')

	if ( valid != 2 ) {
	  valid = 0;
	  clear_screen();
	  cout << "** Player " << competitor->get_player_ID() << " **";
	  cout << " INVALID MOVE" << endl;
	  cout << "Enter move (eg. H3-G4, q to quit move):" << endl << "> ";
	  getline(cin, move);
	  decompose_move(move);
	}
      }
      valid = 0;

      // determine whether the move chosen by the player adheres to the rules of chess
      while ( competitor->validate_move() ) {
        competitor->make_move();
      }

      // tests to see if the move made by the player has resulted in checkmate
      if ( competitor->test_checkmate() ) {
        set_current_status(GameStatus::Checkmate);
      }
      
      // tests to see if the move made by the player has resulted in stalemate
      if ( competitor->test_stalemate() ) {
	set_current_status(GameStatus::Stalemate);
      }

      // when program control reaches this point, the player has chosen a valid
      // move and GameStatus is set to 'StartTurn', allowing control to exit
      // function 'take_turn'
      set_current_status(GameStatus::StartTurn);	      
      break;

      // a default option should not strictly be necessary if the input options
      // have all been appropriately tested above, but is included for completeness
    default:
      clear_screen();
      cout << "** Player " << competitor->get_player_ID() << " **" << endl;
      cout << "Invalid choice. Please re-enter" << endl << "> ";
    }

    // control should only enter this if statement if a player offered their
    // opponent a draw, and that draw was not accepted. The following if statement
    // allows the player to make a new choice (which can also include the option to
    // offer a draw again - in theory this could result in an infinite loop, but we
    // make the assumption that a player will eventually get tired of offering draws)
    // The remaining statements in this function are just repeats of those above near
    // the beginning of the function
    if ( get_current_status() == GameStatus::Continue ) {
      clear_screen();
      cout << "** Player " << competitor->get_player_ID() << " **" << endl;
      cout << "Offer Draw (1); Resign from Game (2); Take Turn (3)" << endl
	   << "> ";
      getline(cin, input);
      choice = (int) input[0] - 48;
 
      while ( valid != 2 ) {

	if ( input.size() == 1 ) {
	  valid++;
	}

	if ( choice == 1 || choice == 2 || choice == 3 ) {
	  valid++;
	}

	if ( valid != 2 ) {
	  valid = 0;
	  clear_screen();
	  cout << "** Player " << competitor->get_player_ID() << " **";
	  cout << " INVALID CHOICE" << endl;
	  cout << "Offer Draw (1); Resign from Game (2); Take Turn (3)" << endl
	       << "> ";
	  getline(cin, input);
	  choice = (int) input[0] - 48;
	}
      }
      valid = 0;      
    }
  }
}

// prints the board as it exists at any given moment. Takes into account the
// colour of the squares and the colour of the side of a particular piece.

void Game::print_board( Board *board )
{
  Square *dummySquarePtr = new Square();
  
  // dummy square value created so that the function has access to
  // private data in Square class (ie. square height and width). It
  // is not necessary to delete dummySquarePtr because it will be
  // automatically deleted when the function goes out of scope
  
  int cell_number = 0; // number of the 'cell' (ie 'sub-square') being printed
  int sub_rows = dummySquarePtr->get_square_height(); // sub-row of square
  int sub_columns = dummySquarePtr->get_square_width(); // sub-column of square

  for ( int i = 0; i < ROWS; i++ ) {

    for ( int j = 0; j < sub_rows; j++ ) {

      for ( int k = 0; k < COLUMNS; k++ ) {
      
	for ( int l = 0; l < sub_columns; l++ ) {

	  // if the square being printed is black, set the background colour
	  // to brown
	  if ( board->get_square(i, k)->get_colour() == Colour::Brown ) {
	    cout << "\033[48;5;94m";
	  }
	  // if the square being printed is white, set the background colour
	  // to tan
	  else {
	    cout << "\033[48;5;222m";
	  }

	  // pointer assigned to piece occupying the square being printed
	  Piece *tempPiecePtr = board->get_square(i, k)->get_occupying_piece();

	  int m = sub_columns * j + l;

	  // if the character in the piece symbol is not a blank space,
	  if ( tempPiecePtr->get_piece_symbol()[m] == '*' ) {

	    // if the side ID of the piece is equal to one, set the
	    // background colour to dark grey
	    if ( ( tempPiecePtr )->get_side_ID() == 1 ) {
	      cout << "\033[48;5;238m";
	    }
	    // if the side ID of the piece is not equal to one, set the
	    // background colour to grey
	    else {
	      cout << "\033[48;5;248m";
	    }
	  }

	  cout << " "; // print a space character
	  
	  cout << "\033[0m"; // reset the colours to default values

	  cell_number++;
	}
      }

      // WILL NEED TO ADD A SWITCH/IF STATEMENT HERE TO DECIDE
      // WHICH OF THE STATS/START/END SCREENS TO PRINT. IE -
      // USE GAMESTATUS TO DETERMINE WHICH (IF GAMESTATUS IS 'START'
      // THEN PRINT START SCREEN (THEN CHANGE GAMESTATUS?)), IF
      // GAMESTATUS IS NOT START AND IS NOT END, PRINT STATS,
      // AND IF GAMESTATUS IS 'END', PRINT END SCREEN. WORK THIS OUT.
      
      // if the end of a row has been reached, go to a new line
      if ( ( cell_number % COLUMNS * sub_columns ) == 0 ) {
      	cout << endl;
      }
    }
  }
}

// decomposes the move passed as a string into approproate x, y
// co-ordinates (integers) (note: this function does *not* test whether the input
// made was a valid move, it only assigns coordinates based on the argument passed
// to it - see function 'validate_choice' for information of choice validation)

bool Game::decompose_move( string candidate )
{
  int count = 0;
  
  for ( int i = 0; i < 5; i++ ) {

    if ( i != 2 ) { // skips the hyphen in 'X#-Y@'
      
      // determines whether the character being considered corresponds to
      // the columns of the board, and treats it appropriately
      if ( candidate[i] == 'A' || candidate[i] == 'B' ||
	   candidate[i] == 'C' || candidate[i] == 'D' ||
	   candidate[i] == 'E' || candidate[i] == 'F' ||
           candidate[i] == 'G' || candidate[i] == 'H' ) {
	   
      	move_coordinates[count] = candidate[i] - 65;
      }
      // the following statment assumes that the character input is an integer of the
      // appropriate range - it will not test to determine whether it is a valid choice
      else {
	move_coordinates[count] = (candidate[i] - 1) - 48;
      }
      count++;
    }
  }

  return true;

  // ** note: this function does not discriminate between choices such as 'A1-B2'
  // and '2B-1B' which will potentially cause errors. This needs to be fixed.
}

// validates the choice made by the player

bool Game::validate_choice( Square *squarePtr, Player *competitor )
{
  // *** ORIGIN TEST ***
  // the following if statements test whether the choice made for the
  // origin square is appropriate (ie. whether the player has chosen
  // their own piece, whether they have chosen an empty square, etc.)

  // sets the origin square according to the choice made by the player
  squarePtr = get_board()->get_square(get_coordinate(1),
				      get_coordinate(0));
  
  // tests whether the chosen square is on the board
  if ( move_coordinates[0] < 0 || move_coordinates[0] > 7 ||
       move_coordinates[1] < 0 || move_coordinates[1] > 7 ) {
    return false;
  }
  
  // tests whether the chosen square is empty
  if ( squarePtr->get_occupying_piece()->get_piece_type() ==
       PieceType::Default_Piece ) {
    return false;
  }

  // tests whether the chosen square has a piece belonging to player  
  if ( squarePtr->get_occupying_piece()->get_side_ID() !=
       competitor->get_side_played()->get_side_ID() ) {
     return false;
  }

  // *** DESTINATION TEST ***
  // the following if statements test whether the choice made for the
  // destination square is appropriate (ie. whether the player is moving
  // their chosen piece onto a square occupied by one of their pieces,
  // whether the piece is on the board, etc.)

  // sets the desintation square according to the choice made by the player     
  squarePtr = get_board()->get_square(get_coordinate(3),
				      get_coordinate(2));
								
  // tests whether the chosen square is on the board
  if ( move_coordinates[2] < 0 || move_coordinates[2] > 7 ||
       move_coordinates[3] < 0 || move_coordinates[3] > 7 ) {
    return false;
  }

  // if piece exists at destination, test to see whether it belongs
  // to the player  
  if ( squarePtr->get_occupying_piece()->get_piece_type() !=
       PieceType::Default_Piece ) {

    if ( squarePtr->get_occupying_piece()->get_side_ID() ==
  	 competitor->get_side_played()->get_side_ID() ) {
      return false;
    }
  }
  
  return true;  
}

// clears screen and prints board & statistics

void Game::clear_screen()
{
  cout << "\033[2J\033[1;1H";
  print_board(get_board());  
}

// function which prints statistics relevant to a completed game

void Game::print_game_stats() const
{
  // THIS IS WHERE I WRITE STUFF ABOUT THE BIG 'CELL' ON THE
  // RIGHT HAND SIDE OF THE SCREEN  
}

// function which prints startup screen

void Game::print_start_screen( Board *board ) const
{
  // THIS IS WHERE I WRITE STUFF ABOUT THE BIG 'CELL' ON THE
  // RIGHT HAND SIDE OF THE SCREEN
}

// function which prints end screen

void Game::print_end_screen( Board *board ) const
{
  // THIS IS WHERE I WRITE STUFF ABOUT THE BIG 'CELL' ON THE
  // RIGHT HAND SIDE OF THE SCREEN  
}
