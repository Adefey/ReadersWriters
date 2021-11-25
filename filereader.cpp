#include "reader.h"
#include <cstring>
#include "filereader.h"

FileReader::FileReader(char *init_file_name)
    {
        strcpy(file_name, init_file_name);
    }

Reader& FileReader::operator>>(int value)
    {
        return *this;
    }

Reader& FileReader::operator>>(double value)
    {
        return *this;
    }

Reader& FileReader::operator>>(char* str)
    {
        return *this;
    }

FileReader::~FileReader()
{
}
