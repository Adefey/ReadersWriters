#include "reader.h"
#include <cstring>

class StringReader : Reader
{
private:
    char *string;

public:
     StringReader(const StringReader&) = delete;

     StringReader& operator=(const StringReader&) = delete;

    StringReader(char *init_string)
    {
        strcpy(string, init_string);
    }
};
