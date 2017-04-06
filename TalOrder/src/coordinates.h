#pragma once

#include <iostream>

class Coordinates
{
    int m_fileNum;
    int m_rankNum;

public:
    Coordinates();
    Coordinates(int, int);
    ~Coordinates();

    void PrintCoordinates() const;
    void set_coordinates(int, int);

private:

};

inline void Coordinates::set_coordinates(int fileNum, int rankNum) {
	m_fileNum = fileNum;
	m_rankNum = rankNum;
}

