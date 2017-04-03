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

    void printCoordinates() const;
    void setCoordinates(int, int);

private:
    
};

