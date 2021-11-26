#include <iostream>
#include "stringreader.h"
#include "stringwriter.h"
#include "filereader.h"
#include "filewriter.h"

int main()
{
    char test[] = "test";
    int a;
    double b;
    char c[100];

    char str[100]="";
    StringReader sr(str);
    StringWriter sw(str);
    sw<<1.123;
    sw<<test;
    sw<<256;
    std::cout<<"Content of the string inside of Reader/Writer: "<<str<<"\n";
    sr>>a;
    sr>>b;
    sr>>c;
    std::cout<<"String reader/writer: \n"<<"int: "<<a<<"\n"<<"double: "<<b<<"\n"<<"char* :"<<c<<"\n";

    a = 0;
    b = 0.0;
    strcpy(c, "");
    char file_name[100]="text.txt";
    FileWriter fw(file_name);
    FileReader fr(file_name);
    fw<<1.123;
    fw<<test;
    fw<<256;
    fr>>a;
    fr>>b;
    fr>>c;
    std::cout<<"File reader/writer: \n"<<"int: "<<a<<"\n"<<"double: "<<b<<"\n"<<"char* :"<<c<<"\n";

    return 0;
}
