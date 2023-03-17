#include <Windows.h>
#include <iostream>
#include <filesystem>
#include <fstream>


auto main() -> int
{
     std::string key;
     std::cout << ("Key: ");
     std::cin >> key;
     if (key == "yourkey")
     {
          ofstream file;
          file.open("filepath.txt");
          file << key;
          file.close();
     }
}
