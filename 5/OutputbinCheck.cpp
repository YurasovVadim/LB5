#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
 ifstream f1("/home/student/Desktop/Файлы данных для выполнения лабораторных работ/Тема6/data_v18.bin", ios::binary);
    ofstream f2("/home/student/Desktop/Example/Output.bin", ios::out | ios::binary);
    int s;
    f1.seekg (0, std::ios::end);
    s = f1.tellg();
    f1.seekg(0,ios::beg);
    int l = s / 8;
    double A[l];
    f1.read((char*)&A, sizeof(A));
    float B[l];
    for (int i = 0; i < l; i++) {
        B[i] = 1/A[i];
    }
    f2.write((char*)&B, sizeof(B));
    f1.close();
    f2.close();
    return 0;
}
