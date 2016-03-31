#include "include.hpp"
#include "saddres.hpp"

class sTCPClient{
public:
	sTCPClient();
	sTCPClient(sAddres _addr);
	sTCPClient(char* _domain, int _port)
protected:
	int sMainSock; //main socket
	sAddres addres;
};
