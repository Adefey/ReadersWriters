#include "writer.h"
#include <cstring>

class StringWriter : Writer
{
private:
    char *string;

public:
     StringWriter(const StringWriter&) = delete;

     StringWriter& operator=(const StringWriter&) = delete;

    StringWriter(char *init_string)
    {
        strcpy(string, init_string);
    }
};
