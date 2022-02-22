#ifndef INIFILE_INIREADER_H
#define INIFILE_INIREADER_H

class IniReader
{
public:
    IniReader(char* szFileName);
    int ReadInteger(char* szSection, char* szKey, int iDefaultValue);
    float ReadFloat(char* szSection, char* szKey, float fltDefaultValue);
    bool ReadBoolean(char* szSection, char* szKey, bool bolDefaultValue);
    char* ReadString(char* szSection, char* szKey, const char* szDefaultValue);
private:
    char m_szFileName[255];
};

#endif