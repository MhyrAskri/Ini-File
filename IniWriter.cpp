#include "IniWriter.h"
#include <iostream>
#include <Windows.h>
IniWriter::IniWriter(char* szFileName)
{
    memset(m_szFileName, 0x00, 255);
    memcpy(m_szFileName, szFileName, strlen(szFileName));
}
void IniWriter::WriteInteger(char* szSection, char* szKey, int iValue)
{
    char szValue[255];
    sprintf(szValue, "%d", iValue);
    WritePrivateProfileString(szSection,  szKey, szValue, m_szFileName);
}
void IniWriter::WriteFloat(char* szSection, char* szKey, float fltValue)
{
    char szValue[255];
    sprintf(szValue, "%f", fltValue);
    WritePrivateProfileString(szSection,  szKey, szValue, m_szFileName);
}
void IniWriter::WriteBoolean(char* szSection, char* szKey, bool bolValue)
{
    char szValue[255];
    sprintf(szValue, "%s", bolValue ? "True" : "False");
    WritePrivateProfileString(szSection,  szKey, szValue, m_szFileName);
}
void IniWriter::WriteString(char* szSection, char* szKey, char* szValue)
{
    WritePrivateProfileString(szSection,  szKey, szValue, m_szFileName);
}