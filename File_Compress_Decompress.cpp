#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void compressFile(const string& inputFile, const string& compressedFile) {
    ifstream input(inputFile);
    ofstream output(compressedFile);

    char currentChar, lastChar;
    int charCount = 0;

    if (!input) {
        cerr << "Err Unable to open" << endl;
        return;
    }

    input.get(lastChar);
    while (input.get(currentChar)) {
        if (currentChar == lastChar) {
            charCount++;
        } else {
            output << charCount + 1 << lastChar;
            lastChar = currentChar;
            charCount = 0;
        }
    }
    output << charCount + 1 << lastChar;

    cout << "Compression complete. Compressed data written to \"" << compressedFile << "\"." << endl;
}

void decompressFile(const string& compressedFile, const string& decompressedFile) {
    ifstream input(compressedFile);
    ofstream output(decompressedFile);

    char currentChar;
    int charCount;

    if (!input) {
        cerr << "Err Unable to open" << endl;
        return;
    }

    while (input >> charCount >> currentChar) {
        for (int i = 0; i < charCount; ++i) {
            output << currentChar;
        }
    }

    cout << "Decompression complete. Decompressed data written to \"" << decompressedFile << "\"." << endl;
}

int main() {
    string inputFile = "input.txt";
    string compressedFile = "compressed.txt";
    string decompressedFile = "decompressed.txt";

    compressFile(inputFile, compressedFile);
    decompressFile(compressedFile, decompressedFile);

    return 0;
}
