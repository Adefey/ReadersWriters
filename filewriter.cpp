#include "writer.h"
#include <cstring>
#include "filewriter.h"

FileWriter::FileWriter(char *init_file_name)
    {
        strcpy(file_name, init_file_name);
    }

Writer& FileWriter::operator<<(int value)
    {
        return *this;
    }

Writer& FileWriter::operator<<(double value)
    {
        return *this;
    }

Writer& FileWriter::operator<<(char* str)
    {
        return *this;
    }

FileWriter::~FileWriter()
{
}
