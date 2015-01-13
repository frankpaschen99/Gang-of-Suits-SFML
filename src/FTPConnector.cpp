#include "ftp_manager.h"

ftp::ftp(bool _FTPEnabled)
    : isFileTransferEnabled{_FTPEnabled} {}

void ftp::init()
{
    cout << "-----[FTP]-----\n";
    if (isFileTransferEnabled)
    {
        sf::Ftp ftp;
        cout << "Attemping to connect to FTP server...\n";
        ftp.connect("myipaddress.com", 21, sf::seconds(10));
        sf::Ftp::Response response = ftp.login("username", "password");
        if (response.isOk())
            cout << "Connected successfully to FTP server!\n";
        else
            cout << "Failed to connect to FTP server! Using local files instead...\n";
    } else {
        cout << "FTP disabled! Using local files instead...\n";
    }
    cout << "-----[FTP]-----\n\n";
}
