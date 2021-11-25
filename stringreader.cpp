#include "reader.h"
#include <cstring>
#include "stringreader.h"

StringReader::StringReader(char *init_string)
    {
        string_ptr = init_string;
    }

Reader& StringReader::operator>>(int value)
    {
        return *this;
    }

Reader& StringReader::operator>>(double value)
    {
        return *this;
    }

Reader& StringReader::operator>>(char* str)
    {
        strcat(string_ptr, str);
        return *this;
    }

StringReader::~StringReader()
    {
    }
