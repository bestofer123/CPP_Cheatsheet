#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>
#include "functions.h"
int DeleteConsole()
{
    //Check OS
    #ifdef _WIN32
    std::string clearCommand = "cls";
    #else
    std::string clearCommand = "clear";
    #endif

    //Clear screen depending on OS
    int result = std::system(clearCommand.c_str());
    if (result != 0)
    {
        std::cerr << "Fehler beim Löschen des Bildschirms." << std::endl;
        return 1;
    }
    //Output --help/-h Command }
    return 0;

}

void StartupLoadingScreen(int time)
{
    for (int i = 0; i < time; i++)
    {
        DeleteConsole();
        std::cout << "Loading." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        DeleteConsole();
        std::cout << "Loading.." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        DeleteConsole();
        std::cout << "Loading..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        DeleteConsole();
    }

}

void Beginner()
{
    DeleteConsole();
    std::cout << "1. If Check" << std::endl;
    std::cout << "2. Switch-Case" << std::endl;
    std::cout << "3. Operators" << std::endl;
    std::cout << "4. For-Loops" << std::endl;
    std::cout << "5. While-Loops" << std::endl;
    std::cout << "6. Do-While-Loops" << std::endl;
}

void Advanced()
{
    DeleteConsole();
    std::cout << "1. Sorting Algorithms" << std::endl;
    std::cout << "2. Searching Algorithms" << std::endl;
}

void Expert()
{
    DeleteConsole();
}

void Overall()
{
    std::cout << "1. Data Types" << std::endl;
    std::cout << "2. Data Size" << std::endl;
    std::cout << "3. Data Type Conversion" << std::endl;

    int choice;
    std::cin >> choice;
    switch (choice)
    {
        case 1:
            Data_Types();
            break;
        case 2:
            Data_Size();
            break;
        case 3:
            Data_Type_Conversion();
            break;
        default:
            std::cout << "Please choose a number between 1 and 3" << std::endl;
            break;
    }
}

void Exit()
{
    std::cout << "Are you Sure you want to Exit? \n\n1. Yes\n2.No\n" << std::endl;
    int choice;
    std::cin >> choice;
    DeleteConsole();
    if (choice == 1)
        std::cout << "Goodbye" << std::endl;
    else if (choice == 2)
        StartUpMenu();
    else
        std::cout << "Please choose a number between 1 and 2" << std::endl;
}

void Creator_Knowledge()
{
    DeleteConsole();
    std::cout << "Created by\n\nMarcel Ndrecaj\n\nLicensed Under GPL_v3" << std::endl;
    std::cout << "\n\n1. Return to Menu\n2. Exit Programm" << std::endl;
    unsigned int choice;
    std::cin >> choice;
    DeleteConsole();
    if (choice == 1)
        StartUpMenu();
    else if (choice == 2)
        Exit();
    else
        std::cout << "Please choose a number between 1 and 2" << std::endl;

}

void StartUpMenu()
{
    std::cout << "1. Beginner" << std::endl;
    std::cout << "2. Advanced" << std::endl;
    std::cout << "3. Expert" << std::endl;
    std::cout << "4. Overall Information" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << "6. Creator Knowledge\n" << std::endl;
    std::cout << "Please choose a number: " << std::endl;
    unsigned int choice;
    std::cin >> choice;
    switch (choice)
    {
        case 1:
            Beginner();
            break;
        case 2:
            Advanced();
            break;
        case 3:
            Expert();
            break;
        case 4:
            Overall();
            break;
        case 5:
            Exit();
            break;
        case 6:
            Creator_Knowledge();
            break;
        default:
            std::cout << "Please choose a number between 1 and 6" << std::endl;
            break;
    }



    std::cin >> choice;
    DeleteConsole();
}



//** Main Function **//

int main() {

    StartupLoadingScreen(1);
    StartUpMenu();
    std::cout << "Return Succesfull" << std::endl;

}
//* End Main Function *//




void Data_Types()
{
    DeleteConsole();
    std::cout << "Boolean\n\t True/False"
                 "\n\t You can calculate with it"
                 "\n\t Declared by using bool" << std::endl;
    std::cout << "Character\n\t Numbers from -128 to 127"
                 "\n\t You can't calculate with it"
                 "\n\t Declared by using char" << std::endl;
    std::cout << "Short\n\t Numbers from -32768 to 32767"
                 "\n\t You can calculate with it"
                 "\n\t Declared by using char" << std::endl;
    std::cout << "Integer\n\t Numbers from -2147483648 to 2147483647"
                 "\n\t You can calculate with it"
                 "\n\t Declared by using int" << std::endl;
    std::cout << "Long\n\t Numbers from -9223372036854775808 to 9223372036854775807"
                 "\n\t You can calculate with it"
                 "\n\t Declared by using long long" << std::endl;
    std::cout << "Float\n\t Numbers from 1.2E-38 to 3.4E+38"
                 "\n\t You can calculate with it"
                 "\n\t Declared by using float" << std::endl;
    std::cout << "Double\n\t Numbers from 2.3E-308 to 1.7E+308"
                 "\n\t You can calculate with it"
                 "\n\t Declared by using double" << std::endl;
    std::cout << "\n\n 1. To exit to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Overall();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void Data_Size()
{
    DeleteConsole();
    std::cout << "Boolean\n\t 1 Byte / 8 Bits" << std::endl;
    std::cout << "Character\n\t 1 Byte / 8 Bits" << std::endl;
    std::cout << "Short\n\t 2 Byte / 16 Bits" << std::endl;
    std::cout << "Integer\n\t 4 Byte / 32 Bits" << std::endl;
    std::cout << "Long\n\t 8 Byte / 64 Bits" << std::endl;
    std::cout << "Float\n\t 4 Byte / 32 Bits" << std::endl;
    std::cout << "Double\n\t 8 byte / 64 Bits" << std::endl;
    std::cout << "\n\n 1. To exit to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Overall();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}

void Data_Type_Conversion()
{
    DeleteConsole();
    std::cout << "Boolean\n\t"
                 "Casting  always 1 or 0\n" << std::endl;
    std::cout << "Character\n\t"
                 "Casting results in ASCII-Type cast\n" << std::endl;
    std::cout << "Short\n\t"
                 "Casting results in Same Number\n" << std::endl;
    std::cout << "Integer\n\t"
                 "Casting results in Same Number\n" << std::endl;
    std::cout << "Long\n\t"
                 "Casting results in Same Number\n" << std::endl;
    std::cout << "Float\n\t"
                 "Casting Cuts out all Numbers after .\n"
                 "\tNOTE: IT DOESN´T ROUND UP\n" << std::endl;
    std::cout << "Double\n\t"
                 "Casting Cuts out all Numbers after .\n"
                 "\tNOTE: IT DOESN´T ROUND UP\n" << std::endl;
    std::cout << "\n\n 1. To exit to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        StartUpMenu();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}

void Bytes_Of_Data_Types()
{
    // 1 byte = 8 bits (Theoretisch reicht auch 1 Bit aber ist so effizienter)
    bool my_bool1 = true;
    bool my_bool2 = false;

    // 1 byte = 8 bits(2^8 = 256) - (also von -128 bis 127)
    char my_char = 10;

    //2 bytes = 16 bits(2^16 = 65536) - (also von -32768 bis 32767)
    short my_short = 300;

    //4 bytes = 32 bits(2^32 = 4294967296) - (also von -2147483648 bis 2147483647)
    int my_int = 100000;

    //8 bytes = 64 bits(2^64 = 18446744073709551616) - (also von -9223372036854775808 bis 9223372036854775807)
    long long my_long_long = 5000000000;

    //4 bytes = 32 bits(2^32 = 4294967296) - (also von -2147483648 bis 2147483647)
    float my_float = 3.14;

    //8 bytes = 64 bits(2^64 = 18446744073709551616) - (also von -9223372036854775808 bis 9223372036854775807)
    double my_double = 500000000000.14;


    //unsigned = nur positive Zahlen

    //1 byte = 8 bits(2^8 = 256) - (also von 0 bis 255)
    unsigned char my_unsigned_char = 10;

    //2 bytes = 16 bits(2^16 = 65536) - (also von 0 bis 65535)
    unsigned short my_unsigned_short = 300;

    //4bytes = 32 bits(2^32 = 4294967296) - (also von 0 bis 4294967295)
    unsigned int my_unsigned_int = 100000;

    //8 bytes = 64 bits(2^64 = 18446744073709551616) - (also von 0 bis 18446744073709551615)
    unsigned long long my_unsigned_long_long = 5000000000;

}