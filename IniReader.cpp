#include "IniReader.h"
#include <iostream>
#include <Windows.h>

IniReader::IniReader(char* szFileName)
{
    memset(m_szFileName, 0x00, 255);
    memcpy(m_szFileName, szFileName, strlen(szFileName));
}
int IniReader::ReadInteger(char* szSection, char* szKey, int iDefaultValue)
{
    int iResult = GetPrivateProfileInt(szSection,  szKey, iDefaultValue, m_szFileName);
    return iResult;
}
float IniReader::ReadFloat(char* szSection, char* szKey, float fltDefaultValue)
{
    char szResult[255];
    char szDefault[255];
    float fltResult;
    sprintf(szDefault, "%f",fltDefaultValue);
    GetPrivateProfileString(szSection,  szKey, szDefault, szResult, 255, m_szFileName);
    fltResult =  atof(szResult);
    return fltResult;
}
bool IniReader::ReadBoolean(char* szSection, char* szKey, bool bolDefaultValue)
{
    char szResult[255];
    char szDefault[255];
    bool bolResult;
    sprintf(szDefault, "%s", bolDefaultValue? "True" : "False");
    GetPrivateProfileString(szSection, szKey, szDefault, szResult, 255, m_szFileName);
    bolResult =  (strcmp(szResult, "True") == 0 ||
                  strcmp(szResult, "true") == 0) ? true : false;
    return bolResult;
}
char* IniReader::ReadString(char* szSection, char* szKey, const char* szDefaultValue)
{
    char* szResult = new char[255];
    memset(szResult, 0x00, 255);
    GetPrivateProfileString(szSection,  szKey,
                            szDefaultValue, szResult, 255, m_szFileName);
    return szResult;
}