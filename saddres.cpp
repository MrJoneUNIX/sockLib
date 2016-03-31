#include "headers/saddres.hpp"

sAddres::sAddres(char* _domain, int _port, int _family)
{
    if (_port < 65536 || _port == 0)
        return;
    this->addr.sin_family = _family;
    this->addr.sin_port = htons(_port);
    this->addr.sin_addr.s_addr = init_addr(_domain);
}

sAddres::sAddres()
{

}
