//  ***************************************************************************
//  *
//  *    Board.cpp -- Implementation file for Board class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:04:44 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Board.h"

using namespace std;

// number of instantiated boards

int Board::number_of_boards = 0;

// returns the number of instantiated boards

int Board::get_number_of_boards()
{
  return number_of_boards;
}

// user-defined constructor

Board::Board()
{
  number_of_boards++;

  initialise_board();
}

// user-defined destructor

Board::~Board()
{
  number_of_boards--;

  for ( int i = 0; i < Side::number_of_sides; i++ ) {
    delete get_side(i);
    side_array[i] = nullptr;
  }
  
  for ( int i = 0; i < ROWS; i++ ) {
    
    for ( int j = 0; j < COLUMNS; i++ ) {  
      delete game_board[i][j];

      game_board[i][j] = nullptr;
    }
  }
}

// initialises values of class attributes

void Board::initialise_board()
{

  // assign memory for two Side objects to Side pointers. Set the colour of
  // each side, then assign them to the vector 'side_array'

  Side *side1 = new Side();

  side1->set_colour(Colour::Brown);
  set_side(Side::number_of_sides - 1, side1);
  
  Side *side2 = new Side();

  side2->set_colour(Colour::Tan);
  set_side(Side::number_of_sides - 1, side2);

  // initialise the chess board (see 'set_board' below)
  
  set_board(side_array);
}

// function which loads the board with default squares (ie. squares which
// have been assigned default pieces/values - see function 'reset_board')
// then assigns pieces from the sides allocated to the board to their correct
// squares

void Board::set_board( vector< Side* >  sides )
{
  // assign 64 default squares to the game board

  reset_board();
  
  // assign pieces to relevant squares

  for ( int a = 0; a < 2; a++ ) {

    // if side colour is black
    if ( side_array[a]->get_colour() == Colour::Brown ) {

      for ( int b = 0; b < 2; b++ ) {

      	for ( int c = 0; c < 8; c++ ) {
	  // assign piece in correct element of side_array to temp pointer
      	  Piece *tempPiecePtr = side_array[a]->get_piece(8 * b + c);

	  //assign piece in temp pointer to the correct square on chess board
      	  game_board[b][c]->set_occupying_piece(tempPiecePtr);
      	}
      }
    }
    // if side colour is black
    else {

      for ( int b = 0; b < 2; b++ ) {

      	for ( int c = 0; c < 8; c++ ) {
	  // assign piece in correct element of side_array to temp pointer
      	  Piece *tempPiecePtr = side_array[a]->get_piece(8 * b + c);
      	  side_array[a]->get_piece(8 * b + c);
	  
	  //assign piece in temp pointer to the correct square on chess board
	  game_board[7 - b][c]->set_occupying_piece(tempPiecePtr);
      	}
      }
    }
  }
}

// returns a pointer to the chess board

Square* Board::get_board() const
{
  return game_board[0][0];
}

// assigns a given square to a particular location on the chess board
// (ie. assigns a given square to an element of 'game_board') array

void Board::set_square( Square *squarePtr, int row, int column )
{
  game_board[row][column] = squarePtr;
}

// returns the square corresponding to board position (row, column)

Square* Board::get_square( int row, int column ) const
{
  return game_board[row][column];
}

// assigns a side to the array 'side_array'

void Board::set_side( int side_number, Side *team )
{
  side_array[side_number] = team;
}

// returns the Side object in the array 'side_array' corresponding
// to the element specified by 'side_number'

Side* Board::get_side( int side_number ) const
{
  return side_array[side_number];
}

// initialises the board with default squares, and assigns colour values
// to the squares passed to the board as appropriate for their position

void Board::reset_board()
{
  int colour_count = 0; // variable to aid in determinining square colour
  
  for ( int i = 0; i < 8; i++ ) {

    for ( int j = 0; j < 8; j++ ) {
      Square *defaultSquarePtr = new Square();  

      // ensures that subsequent squares are assigned the correct
      // colour, taking into account whether it is a new row
      if ( colour_count % 2 == 0 ) {
  	defaultSquarePtr->set_colour(Colour::Tan);
  	set_square(defaultSquarePtr, i, j);
      }
      else {
  	defaultSquarePtr->set_colour(Colour::Brown);
  	set_square(defaultSquarePtr, i, j);
      }
      colour_count++;
    }
    colour_count++;
  }
}

