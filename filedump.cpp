#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
#include <cerrno>
using namespace std;
int main (int argc,char *argv[]){
string args(argv[1]);
string filecont;
fstream file;
file.open("args",ios::in);
cout<<"\nDumping..."<<endl;
cout<<args<<endl;
file.close();
return 0;
}
