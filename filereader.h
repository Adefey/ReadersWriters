#pragma once
#include "reader.h"
#include <cstring>

class FileReader : Reader
{
private:
    char *file_name;

public:
     FileReader(const FileReader&) = delete;

     FileReader& operator=(const FileReader&) = delete;

    FileReader(char *init_file_name);

    Reader& operator>>(int value) override;

    Reader& operator>>(double value) override;

    Reader& operator>>(char* str) override;

    ~FileReader() override;
};
