#include "iostream"
#include "IniWriter.h"
#include "IniReader.h"
int main(int argc, char * argv[])
{
    IniWriter iniWriter(".\\Logger.ini");
    iniWriter.WriteString("Setting", "Name", "mhyr");
    iniWriter.WriteInteger("Setting", "Age", 22);
    iniWriter.WriteFloat("Setting", "Height", 1.82f);
    iniWriter.WriteBoolean("Setting", "Marriage", false);

    IniReader iniReader(".\\Logger.ini");
    char *szName = iniReader.ReadString("Setting", "Name", "");
    int iAge = iniReader.ReadInteger("Setting", "Age", 0);
    float fltHieght = iniReader.ReadFloat("Setting", "Height", 0.0f);
    bool bMarriage = iniReader.ReadBoolean("Setting", "Marriage", true);

    std::cout<<"Name:"<<szName<<std::endl
             <<"Age:"<<iAge<<std::endl
             <<"Height:"<<fltHieght<<std::endl
             <<"Marriage:"<<bMarriage<<std::endl;
    delete szName;
    return 1;
}