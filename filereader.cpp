#include "reader.h"
#include <cstring>

class FileReader : Reader
{
private:
    char *file_name;

public:
     FileReader(const FileReader&) = delete;

     FileReader& operator=(const FileReader&) = delete;

    FileReader(char *init_file_name)
    {
        strcpy(file_name, init_file_name);
    }
};
