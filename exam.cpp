// exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>


using namespace std;

void SetFont(int size = 30) {
    CONSOLE_FONT_INFOEX cfi;
    cfi.cbSize = sizeof cfi;
    cfi.nFont = 0;
    cfi.dwFontSize.X = 0;
    cfi.dwFontSize.Y = size;  //���������С
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL; //�����ϸ FW_BOLD
    wcscpy_s(cfi.FaceName, L"����");  //�������壬�����ǿ���̨���е�
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    //��õ�ǰ����
    //HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    //CONSOLE_FONT_INFO consoleCurrentFont;
    //GetCurrentConsoleFont(handle, FALSE, &consoleCurrentFont);
}

void topic();

int main()
{
    SetFont(30);
    //std::cout << "����س�����һ��!\n";
    while (1)
    {
        system("cls");
        topic();
    }
   
    getchar();
    
    return 0;
  
}

void topic()
{
    char data[100];
   // char path[200] = "D:/desktop/test/vs2019/C++/exam/x64/Release/��������ԭ��1-100.txt";
    cout << "\n               �������ļ�������׺��.�س���ʼ\n               ";
   
    string path;
    getline(cin, path);
    
     std::ifstream  fin;
     fin.open(path, ios::in);
     std::cout << "               ����ɹ�,����س�����һ��!\n               ";
     
     //fin.open("D:/desktop/test/vs2019/C++/exam/x64/Release/��������ԭ��1-100.txt", ios::in);
    //fin.open("��������ԭ��1-100.txt", ios::in);


    int count = 0;
    while (fin.getline(data, sizeof(data) * 3))
    {

        if (count % 3 == 0)
        {

             _getch();
             system("cls");

        }
        cout << "\n               ";
        std::cout << data << std::endl;
        count++;

    }


}



