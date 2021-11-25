#include <iostream>
#include "stringreader.h"
#include "stringwriter.h"
#include "filereader.h"
#include "filewriter.h"

int main(int argc, char** argv)
{
    char c[10000];
    char newc[8] {"solesye"};
    StringReader sr(c);
    sr>>newc;
    std::cout<<c;
    return 0;
}
