#include "stdafx.h"

#include<iostream>

Piece::Piece(Coordinates coordinates)
{
	m_color = WHITE;
	m_coordinates = coordinates;
	m_type = PAWN;
}

Piece::~Piece()
{

}

Piece::Piece(Color color, PieceType type, Coordinates coordinates) {
	m_type = type;
	m_color = color;
	m_coordinates = coordinates;
}

void Piece::printPiece() const
{
	std::cout << "******" << std::endl;
	std::cout << "Color:" << std::endl;
	std::cout << m_color << std::endl;
	std::cout << "Type:" << std::endl;
	std::cout << m_type << std::endl;
	m_coordinates.printCoordinates();
	std::cout << "******" << std::endl;
}
