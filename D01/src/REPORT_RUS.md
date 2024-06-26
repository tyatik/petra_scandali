# Отчет по выполненным задачам D01_Linux-1.

<p align ="center"><img src="./img/devOps.png" style="width:100% height:auto"></p>

> *Дорогие ревьюеры, из этого репорта вы узнаете: как я нашел выход из лабиринта настроек, как избежал падения в черную дыру багов и как не потерял себя в мире командной строки, пока ходил по этому мирному острову стабильности без запинки и смеха!* :neckbeard:
## Part 1. Установка ОС  
- Cкриншот с выводом команды: 'cat /etc/issue'
    <p align ="center"><img src="./img/part1.png" style="width:50%; height:auto;"></p>

## Part 2. Создание пользователя  
- Скриншот команды: 'sudo useradd -g adm newuser'
     > *создаем нового пользователя 'newuser' и добавляем в группу 'adm'*
    <p align ="center"><img src="./img/part2.1.png" style="width:50%; height:auto;"></p>  
- Скриншот команды:'cat /etc/passwd'
    <p align ="center"><img src="./img/part2.2.png" style="width:50%; height:auto;"></p>

## Part 3. Настройка сети ОС
- Установка названия машины вида 'user-1'
    <p align ="center"><img src="./img/part3.1.png" style="width:50%; height:auto;"></p>
- Установка временной зоны, соответствующей текущему местоположению
    <p align ="center"><img src="./img/part3.2.png" style="width:50%; height:auto;"></p>
- Вывод названия сетевых интерфейсов с помощью консольной команды.
    > - *Интерфейс lo - это виртуальный сетевой интерфейс, используется для общения процессов сетевого стека на компе.  Имеет IP-адрес 127.0.0.1. "inet6" указывает на то, что следующие параметры относятся к адресу IPv6.'::1/128' - это сам IPv6 адрес и его префиксная длина (длина префикса подсети). 'scope host' указывает на ограничение области видимости адреса, в данном случае - только для локального хоста.*
    > - *Интерфейс enp0s3: link/ether - указывает на тип интерфейса (Ethernet) и его MAC-адрес, 'brd' указывает на широковещательный (broadcast) MAC-адрес для этого интерфейса, 'inet' указывает на IPv4-адрес интерфейса и его префиксную длину (24 бита, что соответствует подсети с маской 255.255.255.0), 'scope global' указывает на область видимости (scope) этого IP-адреса, обозначая, что он является глобальным IP-адресом. "dynamic" указывает, что этот IP-адрес был назначен динамически с использованием протокола DHCP.*
    <p align ="center"><img src="./img/part3.3.png" style="width:50%; height:auto;"></p>    
- Скриншот использование команд, для получения ip адреса устройства от DHCP сервера
    > - *dhclient -v - для получения IP-адреса устройства от DHCP-сервера, флаг -v для более подробной информаци.*
    > - *DHCP это протокол динамической конфигурации хоста, т.е. сетевой протокол, который позволяет устройствам автоматически получать IP-адрес, подсетевую маску, адрес шлюза и другие сетевые параметры от DHCP-сервера, что позволяет упростить процесс настройки сети и управления IP-адресами в компьютерных сетях.*
    <p align ="center"><img src="./img/part3.4.png" style="width:50%; height:auto;"></p>    
- Скриншот - внешний ip-адрес шлюза (ip) и внутренний IP-адрес шлюза, он же ip-адрес по умолчанию (gw)
    > *ip route - отображает полную таблицу маршрутизации, включая внешний IP-адрес шлюза и внутренний IP-адрес шлюза по умолчанию.*
    <p align ="center"><img src="./img/part3.5.png" style="width:50%; height:auto;"></p>     
### Задай статичные (заданные вручную, а не полученные от DHCP сервера) настройки ip, gw, dns (используй публичный DNS серверы, например 1.1.1.1 или 8.8.8.8).
> *Редактируем файл настройки сети /etc/netplan/00-installer-config.yaml*    
- Вывод заданных настроек
    <p align ="center"><img src="./img/part3.6.png" style="width:50%; height:auto;"></p>
- После перезагрузки - sudo reboot и сетевые настройки
    >  *Статичные сетевые настройки (ip, gw, dns) соответствуют заданным*   
    <p align ="center"><img src="./img/part3.7.png" style="width:50%; height:auto;"></p>   
- Вывод команды: systemd-resolve --status    
    >  *можно посмотреть текущие настройки DNS-серверов*   
    <p align ="center"><img src="./img/part3.7.1.png" style="width:50%; height:auto;"></p>    
- Успешно пропингуй удаленные хосты 1.1.1.1 и ya.ru и вставь в отчёт скрин с выводом команды.
  > *В выводе команды должна быть фраза «0% packet loss».*     
  - вывод комманд: 'ping 8.8.8.8' и 'ping 1.1.1.1'
    <p align ="center"><img src="./img/part3.8.1.png" style="width:50%; height:auto;"></p>   
  - вывод комманд: 'ping ya.ru'
    <p align ="center"><img src="./img/part3.8.2.png" style="width:50%; height:auto;"></p>   

## Part 4. Обновление ОС   
- Обновление системных пакетов    
    > - *Комманды: sudo apt update, sudo apt upgrade*   
    <p align ="center"><img src="./img/part4.png" style="width:50%; height:auto;"></p>  
## Part 5. Использование команды **sudo**
- скрин с изменённым hostname от имени пользователя: 'newuser'    
    > *Истинное назначение команды sudo - состоит в том, что она дает разрешение пользователю на выполнение определенной команды с правами суперпользователя (root) без необходимости входа в учетную запись root.  Обеспечивает безопасное управление системой, поскольку пользователь может получать доступ к суперпользовательским привилегиям только при необходимости;*   
    <p align ="center"><img src="./img/part5.png" style="width:50%; height:auto;"></p>  
## Part 6. Установка и настройка службы времени
- Настройка службы автоматической синхронизации времени    
    > *Вывод времени часового пояса. Вывод команды содержит `NTPSynchronized=yes`*   
    <p align ="center"><img src="./img/part6.png" style="width:50%; height:auto;"></p>  
## Part 7. Установка и использование текстовых редакторов 
- Установка текстовых редакторов **VIM** (**NANO**, **MCEDIT**)   
	@@ -71,48 +78,48 @@
    > *Напиcал свой никнейм, и закрыл файл с сохранением изменений.*
     - **VIM:**
         > *закрытие - 'esc' ':' 'w' 'q'* 
         <p align ="center"><img src="./img/part7.1.1.png" style="width:50%; height:auto;"></p>  
     - **NANO:**
         > *закрытие - 'ctrl' 'x' 'y'* 
         <p align ="center"><img src="./img/part7.1.2.png" style="width:50%; height:auto;"></p>  
     - **MCEDIT:**
         > *закрытие - 'esc' 'yes'* 
         <p align ="center"><img src="./img/part7.1.3.png" style="width:50%; height:auto;"></p>  
- Используя каждый из трех редакторов, отредактируй файлы *test_X.txt*, где X -- название редактора.
    > *отредактировал файл, заменив никнейм на строку «21 School 21», закрыл файл без сохранения изменений.
     - **VIM:**
         > - *редактирование - 'esc' ':' '%s/woodysyl/21 School/g'*
         > - *закрытие - 'esc' ':' 'q' '!'* 
         <p align ="center"><img src="./img/part7.2.1.png" style="width:50%; height:auto;"></p>  
     - **NANO:**
         > - *редактирование -  'ctrl' '\' 'woodysyl' '21 Schoo 21' Y*
         > - *закрытие - 'ctrl' 'x' 'n'* 
         <p align ="center"><img src="./img/part7.2.2.png" style="width:50%; height:auto;"></p>  
     - **MCEDIT:**
         > -  *редактирование -  F4 'woodysyl' '21 Schoo 21'*
         > - *закрытие - 'esc' 'no'* 
         <p align ="center"><img src="./img/part7.2.3.png" style="width:50%; height:auto;"></p>      
## Part 8. Установка и базовая настройка сервиса **SSHD**
- Установка 'SSHd'.  
    > *комманда: sudo apt-get install openssh-server*
- Установка автозапуска службы при загрузке системы.
    > *комманда: sudo systemctl enable ssh*
    <p align ="center"><img src="./img/part8.1.png" style="width:50%; height:auto;"></p>  
- Перенастройка 'SSHd' на порт 2022.
    - Редактируем файл /etc/ssh/sshd_config.
      > *комманда: sudo vim /etc/ssh/sshd_config*
      <p align ="center"><img src="./img/part8.2.png" style="width:50%; height:auto;"></p>     
    - перезагрузка 'SSHd'
      > *комманда: sudo systemctl restart ssh*
- Показ наличия процесса sshd.
    > *команда: ps aux | grep sshd -  выводит список всех процессов и отображаем только связанные с SSH-сервером*
    <p align ="center"><img src="./img/part8.3.png" style="width:50%; height:auto;"></p>
- Перезагрузка системы.
    > *команда: sudo reboot*
- Установка  'net-tools' для работы с сетью.
    > *команда: sudo apt install net-tools*
    <p align ="center"><img src="./img/part8.4.1.png" style="width:50%; height:auto;"></p>
- Вывод команды netstat -tan.
    > - *Команда netstat -tan отображает список всех открытых сетевых соединений и портов в формате таблицы.* 
    > - *Значения ключей:*
	@@ -125,7 +132,7 @@
      > - *oreign Address: удаленный адрес и порт*
      > - *State: текущее состояние соединения (например, ESTABLISHED, LISTEN, etc.)*
      > - *Значение 0.0.0.0 в столбце Local Address указывает на то, что сервер "слушает" все доступные сетевые интерфейсы и адреса на указанном порту. Это означает, что сервер готов принимать входящие соединения с любого доступного адреса.*
    <p align ="center"><img src="./img/part8.4.2.png" style="width:50%; height:auto;"></p>
## Part 9. Установка и использование утилит **top**, **htop**
- Вывод команды top.
	@@ -137,30 +144,30 @@
    > - *загрузку памяти: 3919,5 total 3248,0 free 176,4 used 495,11 buff/cache*
    > - *pid процесса занимающего больше всего памяти: 1*
    > - *pid процесса, занимающего больше всего процессорного времени: 1277*
    <p align ="center"><img src="./img/part9.1.png" style="width:50%; height:auto;"></p>
   
- В отчёт вставь скрин с выводом команды htop:
  - отсортированному по:
      - PID
      <p align ="center"><img src="./img/part9.2.1.1.png" style="width:50%; height:auto;"></p>
      
      - PERCENT_CPU
      <p align ="center"><img src="./img/part9.2.1.2.png" style="width:50%; height:auto;"></p>
      
      - PERCENT_MEM
      <p align ="center"><img src="./img/part9.2.1.3.png" style="width:50%; height:auto;"></p>
      
      - TIME
      <p align ="center"><img src="./img/part9.2.1.4.png" style="width:50%; height:auto;"></p>
      
  - отфильтрованному для процесса sshd  
  <p align ="center"><img src="./img/part9.2.2.png" style="width:50%; height:auto;"></p>

  - с процессом syslog, найденным, используя поиск  
  <p align ="center"><img src="./img/part9.2.3.png" style="width:50%; height:auto;"></p>

  - с добавленным выводом hostname, clock и uptime  
  <p align ="center"><img src="./img/part9.2.4.png" style="width:50%; height:auto;"></p>

## Part 10. Использование утилиты **fdisk**

	@@ -169,20 +176,20 @@
    > - *размер: 25GiB*
    > - *количество секторов: 52428800*
    > - *размер swap: 2.2Gi*
    <p align ="center"><img src="./img/part10.png" style="width:50%; height:auto;"></p>
## Part 11. Использование утилиты **df**  
- Запуск команды df
  > - *1K-block - единица измерения размера данных или хранения в Linux, составляет 1024 байта или 1 килобайт.*
  <p align ="center"><img src="./img/part11.1.png" style="width:50%; height:auto;"></p>
  > - *размер раздела: 11758760 1K-blocks (1kB)*
  > - *размер занятого пространства: 4982920 1K-blocks (1kB)*
  > - *размер свободного пространства: 6156732 1K-blocks (1kB)*
  > - *процент использования: 45%*
- Запустк команды df -Th.
   > - *тип файловой системы для раздела ext4*
  <p align ="center"><img src="./img/part11.2.png" style="width:50%; height:auto;"></p>
  
  > - *размер раздела: 12G*
  > - *размер занятого пространства: 4.8G*
	@@ -191,44 +198,43 @@
## Part 12. Использование утилиты **du**   
- Запустк команды du.
  <p align ="center"><img src="./img/part12.1.png" style="width:50%; height:auto;"></p>

- Вывод размеров папок /home, /var, /var/log (в байтах, в человекочитаемом виде).
  <p align ="center"><img src="./img/part12.2.png" style="width:50%; height:auto;"></p>

- Вывод размеров всего содержимого в /var/log (не общее, а каждого вложенного элемента, используя *).   
  <p align ="center"><img src="./img/part12.3.png" style="width:50%; height:auto;"></p>

## Part 13. Установка и использование утилиты **ncdu**   
- Установка утилиты ncdu   
  <p align ="center"><img src="./img/part13.1.png" style="width:50%; height:auto;"></p>

- Вывод размеров папок /home, /var, /var/log   
  <p align ="center"><img src="./img/part13.2.png" style="width:50%; height:auto;"></p>

## Part 14. Работа с системными журналами
- Вывод время последней успешной авторизации, имя пользователя и метод входа в систему
  > *Mar 22 01:22:28 user-2 sudo: woodysyl : TTY=tty1 : PWD=/home/woodysyl*  
  > *Mar 22 01:22:28 user-2  sudo: pam_unix(sudo:session): session opened for user root by woodysyl*  
  <p align ="center"><img src="./img/part14.1.png" style="width:50%; height:auto;"></p>
- Cообщение о рестарте службы SSHd
  > *команда: sudo systemctl restart sshd*  
  <p align ="center"><img src="./img/part14.2.png" style="width:50%; height:auto;"></p> 
## Part 15. Использование планировщика заданий **CRON**

- Используя планировщик заданий, запусти команду uptime через каждые 2 минуты.
  >Вывод на экран списка текущих заданий для CRONt
  <p align ="center"><img src="./img/part15.1.png" style="width:50%; height:auto;"></p> 
  
- Найди в системных журналах строчки (минимум две в заданном временном диапазоне)
  > *Демон запускаетсячерз две минуты, но: сообщение "no MTA installed, discarding output" означает, что в системе не установлен компонент MTA, который обычно используется для отправки вывода выполненных заданий cron на почту администратору системы.*
  <p align ="center"><img src="./img/part15.2.png" style="width:50%; height:auto;"></p> 

- Удали все задания из планировщика заданий.
  <p align ="center"><img src="./img/part15.3.png" style="width:50%; height:auto;"></p> 

  <p align ="center"><a><img src="./img/finish.png" style="width:100%; height:auto;"></a><a><img src="./img/end.png" style="width:15%; height:auto;"></a></p>