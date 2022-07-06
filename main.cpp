#include<iostream>
#include<string>
using namespace std;

int main() {
    string file = "aren.jar";
    char* appdata = std::getenv("APPDATA");
    string gameDir = "\\Aren";
    string install = string("cd ") + appdata + gameDir + string(" && start javaw -jar ") + file ;

    system(install.c_str());
	return 0;
}