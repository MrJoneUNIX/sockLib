#include <sys/socket.h>

class sTCPClient{
public:
	sTCPClient();
	//sTCPClient(sTCPClient _s);
	//sTCPClient(char*_addr,int _port);
        //overloaded construct
	int connect();
		//connect to server
	void setAddres(char * _addr);
		//setup server addres
    void setPort(int _port);
        //setup server port
    void setBuffSize(int _size);
        //setup size recive buffer
    int getBuffSize();
protected:
	int sMainSock; //main socket
	int sPort;
	char* sBuff;
	struct sockaddr_in sAddr; //addres server
};
