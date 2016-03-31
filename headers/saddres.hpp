#include "include.hpp"

class sAddres{
public:
    sAddres();
    sAddres(char* _domain, int _port, int _family);
        /*
            Второй конструктор даёт возможность
            инициализации класса при его создании
        */
    void setAddr(char* _domain, int _port, int _family);
    void getAddr(struct sockaddr_in &_addres);
        //возвращает структуру addr
protected:
    struct sockaddr_in addr;
};
