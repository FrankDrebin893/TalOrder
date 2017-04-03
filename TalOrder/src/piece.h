#pragma once

#include "stdafx.h"

enum PieceType
{
	QUEEN = 1,
	KING = 2,
	ROOK = 3,
	BISHOP = 4,
	KNIGHT = 5,
	PAWN = 6
};

class Piece
{
	Color m_color;
	PieceType m_type;
	Coordinates m_coordinates;

public:
	Piece(Coordinates);
	~Piece();
	Piece(Color, PieceType, Coordinates);

	Coordinates getCoordinates() const;
	void printPiece() const;

private:
};

inline Coordinates Piece::getCoordinates() const
{
	return m_coordinates;
}