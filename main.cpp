#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <stdlib.h>


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

}

void LoadingScreen(int time)
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
    std::cout << "1. If Check" << std::endl;
    std::cout << "2. Switch-Case" << std::endl;
    std::cout << "3. Operators" << std::endl;
    std::cout << "4. For-Loops" << std::endl;
    std::cout << "5. While-Loops" << std::endl;
    std::cout << "6. Do-While-Loops" << std::endl;
}

void Advanced()
{
    std::cout << "1. Sorting Algorithms" << std::endl;
    std::cout << "2. Searching Algorithms" << std::endl;
}

void Expert()
{

}

void Overall()
{
    std::cout << "1. Data Types" << std::endl;
    std::cout << "2. Data Size" << std::endl;
    std::cout << "3. Data Type Conversion" << std::endl;
}

void Exit()
{
    std::cout << "Exit Successful" << std::endl;
    DeleteConsole();

}

void Creator_Knowledge()
{
    std::cout << "Created by\n\nMarcel Ndrecaj\n\n\nLicensed Under GPL_v3" << std::endl;
    DeleteConsole();
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

    LoadingScreen(1);
    StartUpMenu();
    std::cout << "Return Succesfull" << std::endl;

}
//* End Main Function *//



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