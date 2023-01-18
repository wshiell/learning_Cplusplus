//  ***************************************************************************
//  *
//  *    Move.cpp -- Implementation file for Move class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:07:11 2019
//  *
//  ***************************************************************************

#include <iostream>
#include "Move.h"
using namespace std;

// number of instantiated move objects

int Move::number_of_moves = 0;

// returns the number of instantiated move objects

int Move::get_number_of_moves()
{
  return number_of_moves;
}

// user-defined constructor

Move::Move()
{
  number_of_moves++;
}

// user-defined destructor

Move::~Move()
{
  number_of_moves--;
}

void Move::set_moved_piece( Piece* moved )
{
  
}

Piece* Move::get_moved_piece() const
{
  return moved_piece;
}

void Move::set_captured_piece( Piece* captured )
{
  
}

Piece* Move::get_captured_piece() const
{
  return captured_piece;
}

void Move::set_origin_square( Square origin )
{
  
}

Square* Move::get_origin_square() const
{
  return origin_square;
}

void Move::set_destination_square( Square destination )
{
  
}

Square* Move::get_destination_square() const
{
  return destination_square;
}

void Move::set_castled_pieces( Piece* castled )
{
  
}

Piece* Move::get_castled_pieces() const
{
  return **castled_pieces;
}

void Move::set_castled_origin( Piece* cast_orig )
{
  
}

Piece* Move::get_castled_origin() const
{
  return *castled_origin;
}

void Move::set_castled_destination( Piece* cast_dest )
{
  
}

Piece* Move::get_castled_destination() const
{
  return *castled_destination;
}

bool Move::validate_choice( Piece* valid_choice )
{
  return true;  
}

bool Move::validate_move( Square valid_move )
{
  return true;
}

Piece* Move::remove_piece( Piece* target )
{
  return target;
}
Square* Move::move_piece( Piece* target )
{
  Square *temp_square = new Square();
  return temp_square;
}

Piece* Move::select_piece( Square selection)
{
  Piece *temp_piece;
  return temp_piece;
}

bool Move::is_check()
{
  return true;
}

bool Move::is_checkmate()
{
  return true;
}

bool Move::is_stalemate()
{
  return true;
}
  
