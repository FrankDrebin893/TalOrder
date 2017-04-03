#pragma once
#include "stdafx.h"

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

void Coordinates::printCoordinates() const
{
	std::cout << "File: " << m_fileNum << std::endl;
	std::cout << "Rank: " << m_rankNum << std::endl;
}

void Coordinates::setCoordinates(int fileNum, int rankNum) {
	m_fileNum = fileNum;
	m_rankNum = rankNum;
}