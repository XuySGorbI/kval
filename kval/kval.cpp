#include <iostream>
#include <fstream>
#include <string>
#include<Windows.h>
#include<vector>



void file(std::string file_in)
{
    const std::string fileName = "морзе.txt";
    const size_t size = 10;
    std::string arrayOfChars(size, '\0');

    std::ofstream outFile;
    outFile.open(fileName);

    if (outFile.is_open())
    {
        outFile << file_in;
        outFile.close();
        std::cout << "Файл успешно создан и заполнен данными!" << std::endl;
    }
    else
    {
        std::cerr << "Ошибка при создании файла!" << std::endl;
    }
}

void file_m(std::string file_in)
{
    const std::string fileName = "ква.txt";
    const size_t size = 10;
    std::string arrayOfChars(size, '\0');

    std::ofstream outFile;
    outFile.open(fileName);

    if (outFile.is_open())
    {
        outFile << file_in;
        outFile.close();
        std::cout << "Файл успешно создан и заполнен данными!" << std::endl;
    }
    else
    {
        std::cerr << "Ошибка при создании файла!" << std::endl;
    }
}

std::string morze(std::string morz)
{
    std::string tk_tr;

    for (int i = 0; i < morz.length(); i++)
    {
        switch (morz[i])
        {



        case 'а':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            break;
        }
        case 'б':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'в':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'г':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            break;
        }
        case 'д':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'е':
        {
            tk_tr.push_back('.');
            break;
        }
        case 'ж':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            break;
        }
        case 'з':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'и':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'й':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'к':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            break;
        }
        case 'л':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'м':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'н':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            break;
        }
        case 'о':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'п':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            break;
        }
        case 'р':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            break;
        }
        case 'с':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'т':
        {
            tk_tr.push_back('-');
            break;
        }
        case 'у':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            break;
        }
        case 'ф':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            break;
        }
        case 'х':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'ц':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            break;
        }
        case 'ч':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            break;
        }
        case 'ш':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'щ':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            break;
        }
        case 'ъ':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'ы':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'ь':
        {
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            break;
        }
        case 'э':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            break;
        }
        case 'ю':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('-');
            break;
        }
        case 'я':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('-');

        }
        case ' ':
        {
            tk_tr.push_back('~');
        }
        case '~':
        {
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('.');
            tk_tr.push_back('-');
            tk_tr.push_back('.');
            tk_tr.push_back('-');

        }
        default: 
            break;
        }

        tk_tr.push_back(' ');

    }
    

    return tk_tr;
}

std::string kva(std::string morze)
{
    std::string kva;

    for (int i = 0; i < morze.length(); i++)
    {
        switch (morze[i])
        {
        case'.': {
            kva.push_back('к');
            kva.push_back('в');
            kva.push_back('а');
            kva.push_back(' ');
            break;
        }
        case'-': {
            kva.push_back('к');
            kva.push_back('в');
            kva.push_back('а');
            kva.push_back('а');
            kva.push_back(' ');
            break;
        }
        case'~': {
            kva.push_back(',');

        }

        default:
            break;
        }
        
    }
    return kva;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "ru");

    std::string name;
  
     std::cout << "Введите предложение: ";

    while (true) {
        std::string sentence;
       
        std::cin >> sentence;

        if (sentence == "`") {
            break;
        }
        for (int i = 0; i < sentence.length(); i++)
        {
            name.push_back(sentence[i]);
        }
        
        name.push_back(' ');
    }
        
    name = morze(name);
    file(name);

    name = kva(name);
    file_m(name);

    return 0;
}