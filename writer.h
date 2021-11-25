#pragma once

class Writer
{
public :
    virtual Writer& operator<<(int value) = 0;
    virtual Writer& operator<<(double value) = 0;
    virtual Writer& operator<<(char* str) = 0;

    virtual ~Writer() {}
};

