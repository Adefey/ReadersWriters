#include "reader.h"
#include <cstring>
#include "filereader.h"
#include <stdio.h>

FileReader::FileReader(char *init_file_name) : file_name{init_file_name}
    {
    }

Reader& FileReader::operator>>(int &value)
    {
        FILE *f;
        if ((f = fopen(file_name, "r")))
        {
            fscanf(f, "%i", &value);
        }
        fclose(f);
        return *this;
    }

Reader& FileReader::operator>>(double &value)
    {
        FILE *f;
        if ((f = fopen(file_name, "r")))
        {
            fscanf(f, "%lf", &value);
        }
        fclose(f);
        return *this;
    }

Reader& FileReader::operator>>(char* str)
    {
        FILE *f;
        if ((f = fopen(file_name, "r")))
        {
            fscanf(f, "%s", str);
        }
        fclose(f);
        return *this;
    }

FileReader::~FileReader()
{
}
