//  ***************************************************************************
//  *
//  *    PieceType.h -- Header file for PieceType class.
//  *    -- 
//  *    Author: Wade Shiell
//  *    Thu May 16 12:08:14 2019
//  *
//  ***************************************************************************

// Enumeration class used to make comparisons between different piece types

#ifndef PieceType_H
#define PieceType_H

enum class PieceType
{
  King = 'K',
  Queen = 'Q',
  Rook = 'R',
  Bishop = 'B',
  Knight = 'N',
  Pawn = 'P',
  Default_Piece = 'D'
};

#endif
