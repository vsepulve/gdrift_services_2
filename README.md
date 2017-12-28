# gdrift_services_2
Temporary repository for the proposed version 2 of Gdrift Services.

Build
-----
```
g++ src/test.cpp -o bin/test -I/usr/local/include/gdrift++ -std=c++11 -lgdrift++
g++ src/test.cpp src/SimulationConfig.cpp -o bin/test -I./include -I/usr/local/include/gdrift++ -std=c++11 -lgdrift++
g++ src/*.cpp -o bin/test -I./include -I/usr/local/include/gdrift++ -std=c++11 -lgdrift++
g++ src/*.cpp -o bin/test -I./include -I/usr/local/include/gdrift++ -I/usr/local/include/nlohmann -std=c++11 -lgdrift++
```
