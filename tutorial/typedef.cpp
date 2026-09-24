#include <iostream>

typedef std::string text_t;
using num_t = int;

int main()
{

    // typedef is a reserved keyword used to create an additional name for a data type.
    // typedef std::string text_t; // we can now write text_t instead of std::string.
    // we generally end this new name/alias with _t.
    // nowadays we mostly use "using"
    // using text_t= std::string;
    // used for complex data types, as in vector librabry or more.

    num_t i = 2;
    text_t hello = " hello world!";

    return 0;
}