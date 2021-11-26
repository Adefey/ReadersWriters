#include "writer.h"
#include <cstring>
#include "stringwriter.h"
#include <stdlib.h>
#include <cstdio>

StringWriter::StringWriter(char *init_string) : string_ptr{init_string}
    {
    }

Writer& StringWriter::operator<<(int value)
    {
        char buffer[32];
        snprintf(buffer, sizeof(buffer), "%i", value);
        strcat(string_ptr, buffer);
        return *this;
    }

Writer& StringWriter::operator<<(double value)
    {
        char buffer[32];
        snprintf(buffer, sizeof(buffer), "%g", value);
        strcat(string_ptr, buffer);
        return *this;
    }

Writer& StringWriter::operator<<(char* str)
    {
        strcat(string_ptr, str);
        return *this;
    }

StringWriter::~StringWriter()
    {
    }
