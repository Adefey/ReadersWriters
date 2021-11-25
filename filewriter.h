#pragma once
#include "writer.h"
#include <cstring>

class FileWriter : Writer
{
private:
    char *file_name;

public:
     FileWriter(const FileWriter&) = delete;

     FileWriter& operator=(const FileWriter&) = delete;

    FileWriter(char *init_file_name);

    Writer& operator<<(int value) override;

    Writer& operator<<(double value) override;

    Writer& operator<<(char* str) override;

    ~FileWriter() override;
};
