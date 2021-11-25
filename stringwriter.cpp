#include "writer.h"
#include <cstring>
#include "stringwriter.h"

StringWriter::StringWriter(char *init_string)
    {
        string_ptr = init_string;
    }

Writer& StringWriter::operator<<(int value)
    {
        return *this;
    }

Writer& StringWriter::operator<<(double value)
    {
        return *this;
    }

Writer& StringWriter::operator<<(char* str)
    {
        return *this;
    }

StringWriter::~StringWriter()
    {
    }
