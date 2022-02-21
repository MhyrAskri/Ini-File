#ifndef INIFILE_INIWRITER_H
#define INIFILE_INIWRITER_H


class IniWriter
{
public:
    IniWriter(char* szFileName);
    void WriteInteger(char* szSection, char* szKey, int iValue);
    void WriteFloat(char* szSection, char* szKey, float fltValue);
    void WriteBoolean(char* szSection, char* szKey, bool bolValue);
    void WriteString(char* szSection, char* szKey, char* szValue);
private:
    char m_szFileName[255];
};


#endif
