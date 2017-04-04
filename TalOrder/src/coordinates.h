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

