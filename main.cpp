#include <iostream>
#include "stringreader.h"
#include "stringwriter.h"
#include "filereader.h"
#include "filewriter.h"

int main(int argc, char** argv)
{
    char c[100]="";
    StringReader sr(c);
    StringWriter sw(c);

    sw<<2.123;
    sw<<"a";
    sw<<14565;
    std::cout<<c<<"\n";
    int a = 0;
    sr>>a;
    std::cout<<a<<"\n";
    return 0;
}
