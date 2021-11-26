#include "reader.h"
#include <cstring>
#include "stringreader.h"
#include <cstdio>
#include <stdlib.h>

StringReader::StringReader(char *init_string) : string_ptr{init_string}
    {
    }

Reader& StringReader::operator>>(int &value)
    {
        value = atoi(string_ptr);
        return *this;
    }

Reader& StringReader::operator>>(double &value)
    {
         value = atof(string_ptr);
        return *this;
    }

Reader& StringReader::operator>>(char* str)
    {
        strcat(str, string_ptr);
        return *this;
    }

StringReader::~StringReader()
    {
    }
