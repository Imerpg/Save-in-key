#include <iostream>
#include <dirent.h>

using namespace std;

void inKey()
{

}

void inPC()
{

}

int main(int argc, char const *argv[])
{
    DIR* rep = opendir("save");

    if ( rep != NULL )
    {
        struct dirent* ent;

        while ( (ent = readdir(rep) ) != NULL )
        {
            cout << ent->d_name << endl;
        }

        closedir(rep);
    }
    return 0;
}
