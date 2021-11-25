#include "writer.h"
#include <cstring>

class FileWriter : Writer
{
private:
    char *file_name;

public:
     FileWriter(const FileWriter&) = delete;

     FileWriter& operator=(const FileWriter&) = delete;

    FileWriter(char *init_file_name)
    {
        strcpy(file_name, init_file_name);
    }
};
