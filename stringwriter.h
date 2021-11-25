#pragma once
#include "writer.h"
#include <cstring>

class StringWriter : Writer
{
private:
    char *string_ptr;

public:
     StringWriter(const StringWriter&) = delete;

     StringWriter& operator=(const StringWriter&) = delete;

    StringWriter(char *init_string);

    Writer& operator<<(int value) override;

    Writer& operator<<(double value) override;

    Writer& operator<<(char* str) override;

   ~StringWriter() override;
};
