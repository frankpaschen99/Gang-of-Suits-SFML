#ifndef FTP_MANAGER_H_INCLUDED
#define FTP_MANAGER_H_INCLUDED

#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <iostream>

using namespace std;

class ftp {
public:
    ftp(bool _FTPEnabled);
    void init();
private:
    bool isFileTransferEnabled = false;
};

#endif // FTP_MANAGER_H_INCLUDED
