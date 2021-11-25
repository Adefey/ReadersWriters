#pragma once

class Reader
{
public :
    virtual Reader& operator>>(int value) = 0;
    virtual Reader& operator>>(double value) = 0;
    virtual Reader& operator>>(char* str) = 0;

    virtual ~Reader() {}
};

