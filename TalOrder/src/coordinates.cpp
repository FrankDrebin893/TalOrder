#include "stdafx.h"
#pragma once


Coordinates::Coordinates() {
	m_fileNum = 1;
	m_rankNum = 2;
}


Coordinates::Coordinates(int fileNum, int rankNum)
{
	m_fileNum = fileNum;
	m_rankNum = rankNum;
}

Coordinates::~Coordinates()
{
}

void Coordinates::PrintCoordinates() const
{
	std::cout << "File: " << m_fileNum << std::endl;
	std::cout << "Rank: " << m_rankNum << std::endl;
}