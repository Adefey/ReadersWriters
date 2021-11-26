#pragma once
#include "reader.h"
#include <cstring>

class StringReader : Reader
{
private:
    char *string_ptr;

public:
     StringReader(const StringReader&) = delete;

     StringReader& operator=(const StringReader&) = delete;

    StringReader(char *init_string);

    Reader& operator>>(int &value) override;

    Reader& operator>>(double &value) override;

    Reader& operator>>(char* str) override;

    ~StringReader() override;
};
