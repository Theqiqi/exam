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
    cfi.dwFontSize.Y = size;  //设置字体大小
    cfi.FontFamily = FF_DONTCARE;
    cfi.FontWeight = FW_NORMAL; //字体粗细 FW_BOLD
    wcscpy_s(cfi.FaceName, L"黑体");  //设置字体，必须是控制台已有的
    SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);
    //获得当前字体
    //HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    //CONSOLE_FONT_INFO consoleCurrentFont;
    //GetCurrentConsoleFont(handle, FALSE, &consoleCurrentFont);
}

void topic();

int main()
{
    SetFont(30);
    //std::cout << "点击回车键下一题!\n";
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
   // char path[200] = "D:/desktop/test/vs2019/C++/exam/x64/Release/计算机组成原理1-100.txt";
    cout << "\n               请输入文件名带后缀名.回车开始\n               ";
   
    string path;
    getline(cin, path);
    
     std::ifstream  fin;
     fin.open(path, ios::in);
     std::cout << "               进入成功,点击回车键下一题!\n               ";
     
     //fin.open("D:/desktop/test/vs2019/C++/exam/x64/Release/计算机组成原理1-100.txt", ios::in);
    //fin.open("计算机组成原理1-100.txt", ios::in);


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



