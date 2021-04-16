#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string path = "/home/student/Desktop/Example/Ex1.txt";
    ifstream fin;
    fin.open(path);
    string  s1;
    string n;
    if (fin.is_open()) {
         cout<<"Файл используется"<<endl;
            while (!fin.eof()) {
               s1=n;
               n="";
               getline(fin,n);
                }
            }
else {
            cout<<"Файла не существует в данной директории"<<endl;
        }
         string pytb = "/home/student/Desktop/Example/Ex2.txt";
    ofstream fout;
    fout.open(pytb, ofstream::app);
    if (fout.is_open()) {
        fout<<s1;
    } else {
        cout<<"Файла не существует в данной директории"<<endl;
    }
    fout.close();
    ifstream f;
    string l;
    f.open(pytb);
    if (f.is_open()) {
        cout<<"Файл используется"<<endl;
        cout<<"Вывод правильной записи строки: "<<endl;
        while (!f.eof()) {
            l= "";
            getline(f, l);
            cout<<l<<endl;
        }
    } else {
        cout<<"Файла не существует в данной директории "<<endl;
        }
        fin.close();
        f.close();
    return 0;
}
