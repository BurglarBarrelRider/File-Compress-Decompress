# File-Compress-Decompress

This project implements a simple file compression and decompression system in C++. It includes programs for compressing and decompressing text files using the Run-Length Encoding (RLE) algorithm. The purpose of this project is to gain hands-on experience with data compression techniques and file manipulation in C++.

Compression Algorithm: Run-Length Encoding (RLE)
Run-Length Encoding (RLE) is a basic compression technique that replaces consecutive repeated characters in a string with a single character followed by the count of its occurrences. For example, the string "AAABBCCC" can be compressed to "3A2B3C". RLE is simple and easy to implement, making it suitable for educational purposes and for compressing certain types of data with repeating patterns.


Для Geany, вам нужно выполнить следующие шаги для компиляции программ сжатия и декомпрессии:

Откройте Geany: Запустите Geany на вашем компьютере.
Откройте файлы с исходным кодом: Откройте файлы compress.cpp и decompress.cpp в Geany.
Компиляция программы сжатия:
Нажмите на меню "Build".
Выберите "Set Build Commands" и укажите следующую команду компиляции в поле "Compile" (если еще не указано):
g++ -std=c++11 -Wall -Wextra -pedantic -o compress compress.cpp
Проверка сжатого файла: Убедитесь, что файл compressed_test.txt создан и содержит сжатые данные.

Декомпрессия файла: Запустите программу декомпрессии, передав в качестве входного файла compressed_test.txt, а в качестве выходного файла decompressed_test.txt. Это можно сделать следующей командой:
g++ -std=c++11 -Wall -Wextra -pedantic -o decompress decompress.cpp
Проверка декомпрессированного файла: Убедитесь, что файл decompressed_test.txt создан и содержит текст, идентичный исходному файлу test_input.txt.
