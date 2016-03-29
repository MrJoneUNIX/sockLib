#include "tcpclient.hpp"

sTCPClient::sTCPClient()
{
	sMainSock = socket(AF_INET, SOCK_STREAM, 0);
	sPort = 88;
}

void sTCPClient::setPort(int _port)
{
    if (_port > 0 && _port < 65536)
        this.sPort = _port;
}
