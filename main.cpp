#include <iostream>
#include <stdio.h>
#include <fstream>



int main()
{    
    char full[30];
    std::ofstream fpath("C:\\GB\\Lsn 6\\fpart.txt");
    char first[]={"Almost "};
    fpath.write(first,7);
    

    std::ofstream spath("C:\\GB\\Lsn 6\\spart.txt");
    char second[]={"understood."};
    spath.write(second,11);
    

    std::ifstream fpath1("C:\\GB\\Lsn 6\\fpart.txt");
    fpath1.getline(full,30);
    std::ifstream spath1("C:\\GB\\Lsn 6\\spart.txt");
    spath1.getline(full,30);
    fpath.close();
    spath.close();





    

    

    return 0;
}