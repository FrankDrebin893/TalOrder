// TalOrder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

int main()
{
	Coordinates coordinates(4, 4);
	Piece piece(WHITE, KING, coordinates);
	piece.PrintPiece();
	std::cout << "Hello" << std::endl;


	int i;
	std::cin >> i;
    return 0;
}