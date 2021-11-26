#include "writer.h"
#include <cstring>
#include "filewriter.h"
#include <cstdio>

FileWriter::FileWriter(char *init_file_name) : file_name{init_file_name}
    {
    }

Writer& FileWriter::operator<<(int value)
    {
        FILE *f;
        if ((f = fopen(file_name, "a")))
        {
            fprintf(f, "%i", value);
        }
        fclose(f);
        return *this;
    }

Writer& FileWriter::operator<<(double value)
    {
        FILE *f;
        if ((f = fopen(file_name, "a")))
        {
            fprintf(f, "%lf", value);
        }
        fclose(f);
        return *this;
    }

Writer& FileWriter::operator<<(char* str)
    {
        FILE *f;
        if ((f = fopen(file_name, "a")))
        {
            fprintf(f, "%s", str);
        }
        fclose(f);
        return *this;
    }

FileWriter::~FileWriter()
{
}
