#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string path = "/home/student/Desktop/Файлы данных для выполнения лабораторных работ/Тема6/data_v18.txt";
    ifstream fin;
    fin.open(path);
    double sr;
    double n;
    int i=0;
    if (fin.is_open()) {
         cout<<"Файл используется"<<endl;
            while (!fin.eof()) {
                if (n==0) {} else {
                    cout<<n<<endl;
                    i++;
                    sr +=n;
                }
                fin>>n;
            }
            sr = sr/i;
            cout<<"Среднее арифметическое :"<<endl;
            cout<<sr<<endl;
            fin.close();
    }else {
            cout<<"Файла не существует в данной директории"<<endl;
        }
        return 0;
}
