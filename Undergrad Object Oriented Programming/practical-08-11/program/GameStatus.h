//  ***************************************************************************
//  *
//  *    GameStatus.h -- Header file for GameStatus class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:05:00 2019
//  *
//  ***************************************************************************

// Enumeration class containing game status values. Used to make comparisons in functions
// regarding game status changes

#ifndef GAMESTATUS_H
#define GAMESTATUS_H

enum class GameStatus
{
  StartTurn,
  EndTurn,
  Continue,
  Won,
  Lost,
  Resign,
  Checkmate,
  Stalemate,
  Draw
};

#endif
