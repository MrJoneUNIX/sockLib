# sockLib

sockLib - это библиотека для работы с сетью (Сокеты Беркли) в удобной обёртке и заготовлеными шаблонами
Создание клиента идё тпроще некуда:
```c++
   sTCPClient * client = new sTCPClient("127.0.0.1",7500);
   client.connect();
   client.send("Hello!!!");
   client.send(myByteArray);
```
