# Times Tables

* A simple CLI program to test your times tables.

# Prerequisites

* GCC
* Git

# How to Build

```Bash
git clone https://github.com/LanzoMA/times-tables
cd times-tables/
mkdir build
make
cd build
./times-tables
```

# How to Use

* When running the executable an optional argument can be specified to change the maximum number.

* For example, ...

```Bash
./times-tables 15
```

* ... will allow the program to give the times tables up to 15.

* The default value is 12.

* The program will ask random times tables until a wrong answer is given.
* At the end, a score will be provided on how many questions you were able to answer.
