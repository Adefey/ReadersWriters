#include <iostream>
#include "stringreader.h"
#include "stringwriter.h"
#include "filereader.h"
#include "filewriter.h"

int main(int argc, char** argv)
{
    char str[100]="";
    StringReader sr(str);
    StringWriter sw(str);
    char str2[] = "test";

    sw<<2.123;
    sw<<str2;
    sw<<14565;
    std::cout<<str<<"\n";
    int a = 0;
    sr>>a;
    double b = 0.0;
    sr>>b;
    char c[100];
    sr>>c;
    std::cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    return 0;
}
