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
    std::cout << "7. Arrays" << std::endl;
    std::cout << "8. Functions" << std::endl;
    unsigned int choice;
    std::cin >> choice;
    switch (choice)
    {
        case 1:
            Check_If();
            break;
        case 2:
            Switch_Case();
            break;
        case 3:
            Operators();
            break;
        case 4:
            For_Loop();
            break;
        case 5:
            While_Loop();
            break;
        case 6:
            Do_While_Loop();
            break;
        case 7:
            Arrays();
            break;
        case 8:
            Functions();
            break;
        default:
            std::cout << "Please choose a number between x and y" << std::endl;
            break;
    }
}

void Advanced()
{
    DeleteConsole();
    std::cout << "1. Sorting Algorithms" << std::endl;
    std::cout << "2. Searching Algorithms" << std::endl;
    std::cout << "3. Pointers" << std::endl;
    std::cout << "4. Structs" << std::endl;
    std::cout << "5. Classes" << std::endl;
    std::cout << "6. Inheritance" << std::endl;
    std::cout << "7. Polymorphism" << std::endl;
    std::cout << "8. Templates" << std::endl;
    std::cout << "9. Exception Handling" << std::endl;
    std::cout << "10. File Handling" << std::endl;
    std::cout << "11. Recursion" << std::endl;
    std::cout << "12 Unit Testing" << std::endl;
    unsigned int choice;
    std::cin >> choice;
    switch (choice) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        default:
            std::cout << "Please choose a number between x and y" << std::endl;
            break;
    }
}

void Expert()
{
    std::cout << "1. Dynamic Memory Allocation" << std::endl;
    std::cout << "2. Linked Lists" << std::endl;
    std::cout << "3. Stacks" << std::endl;
    std::cout << "4. Queues" << std::endl;
    std::cout << "5. Trees" << std::endl;
    std::cout << "6. Graphs" << std::endl;
    std::cout << "7. Hashing" << std::endl;
    std::cout << "8. Bit Manipulation" << std::endl;
    std::cout << "9. Preprocessor Directives" << std::endl;
    std::cout << "10. Multithreading" << std::endl;
    std::cout << "11. Networking" << std::endl;
    std::cout << "12. Smart Pointers" << std::endl;
    std::cout << "13. Regular Expressions" << std::endl;
    DeleteConsole();
    unsigned int choice;
    std::cin >> choice;
    switch (choice) {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        case 5:

            break;
        case 6:

            break;
        default:
            std::cout << "Please choose a number between x and y" << std::endl;
            break;
    }
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
    DeleteConsole();
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
    DeleteConsole();
}



//** Main Function **//

int main() {
    bool debug = false;
    if (debug)
        StartupLoadingScreen(1);
    else
        std::cout << "Debug Mode Enabled\n\n" << std::endl;
    StartUpMenu();
    std::cout << "Return Succesfull" << std::endl;

}
//* End Main Function *//



//* Beginner *//
void Check_If()
{
    DeleteConsole();
    std::cout << "Typical If Statement:"
                 "\n\ncondition;"
                 "\nIf (True condition)"
                 "\n\t  Do This"
                 "\n\t  exit"
                 "\nelse if (True condition)"
                 "\n\t  If this instead Do This"
                 "\n\t  exit"
                 "\nelse"
                 "\n\t  If none of that, Do This"
                 "\n\t  exit"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void Switch_Case()
{
    DeleteConsole();
    std::cout << "Typical Switch Case Statement:"
                 "\n\ncondition(Full_Number);"
                 "\nswitch (Condition)"
                 "\n\t  case 1:"
                 "\n\t\t   Do This"
                 "\n\t\t   break"
                 "\n\t  case 2:"
                 "\n\t\t   Do This"
                 "\n\t\t   break"
                 "\n\t  case X-Y"
                 "\n\t\t   ..."
                 "\n\t\t   break"
                 "\n\t  default:"
                 "\n\t\t   Do This"
                 "\n\t\t   break"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void Operators()
{
    DeleteConsole();
    std::cout << "Most used Mathematical Operators:"
                 "\n+\tAddition"
                 "\n\t 1+1 = 2\n"
                 "\n-\tSubtraction"
                 "\n\t 2-1 = 1\n"
                 "\n*\tMultiplication"
                 "\n\t 2*4 = 8\n"
                 "\n/\tDivision"
                 "\n\t 6/2 = 3\n"
                 "\n%\tModulo"
                 "\n\t 7/3 = (2 Rest)1\n"
                 "\n=\tAssignment"
                 "\n\t a = 2\n"
                 "\n==\tEqual to"
                 "\n\t (1 == 1) = true\n"
                 "\n!=\tNot Equal to"
                 "\n\t (1 != 2) = true\n"
                 "\n>\tGreater than"
                 "\n\t (2 > 1) = true\n"
                 "\n<\t Less than"
                 "\n\t (2 < 2) = false\n"
                 "\n>=\tGreater than or Equal to"
                 "\n\t (2 >= 2) = true\n"
                 "\n<=\tLess than or Equal to"
                 "\n\t (2 <= 4) = true\n"
                 "\n&&\tLogical AND"
                 "\n\t true && true = true\n"
                 "\n||\tLogical OR"
                 "\n\t (true || false) = true\n"
                 "\n!\tLogical NOT"
                 "\n\t !false = true\n"
                 "\n++\tIncrement"
                 "\n\t 1++ = 2\n"
                 "\n--\tDecrement"
                 "\n\t 1-- = 0\n"
                 "\n+=\tAddition Assignment"
                 "\n\t (3 += 4) = 7\n"
                 "\n-=\tSubtraction Assignment"
                 "\n\t (3-=2) = 1"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void For_Loop()
{
    DeleteConsole();
    std::cout << "Typical For Loop Statement:"
                 "\n\nint counter;"
                 "\nfor (int i = 0; i < counter; i++)"
                 "\n{"
                 "\n\t  Do This *counter* times"
                 "\n}*End Of Loop*"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void While_Loop()
{
    DeleteConsole();
    std::cout << "Typical If Statement:"
                 "\n\ncondition;"
                 "\nIf (True condition)"
                 "\n\t  Do This"
                 "\n\t  exit"
                 "\nelse if (True condition)"
                 "\n\t  If this instead Do This"
                 "\n\t  exit"
                 "\nelse"
                 "\n\t  If none of that, Do This"
                 "\n\t  exit"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void Do_While_Loop()
{
    DeleteConsole();
    std::cout << "Typical If Statement:"
                 "\n\ncondition;"
                 "\nIf (True condition)"
                 "\n\t  Do This"
                 "\n\t  exit"
                 "\nelse if (True condition)"
                 "\n\t  If this instead Do This"
                 "\n\t  exit"
                 "\nelse"
                 "\n\t  If none of that, Do This"
                 "\n\t  exit"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void Arrays()
{
    DeleteConsole();
    std::cout << "Typical If Statement:"
                 "\n\ncondition;"
                 "\nIf (True condition)"
                 "\n\t  Do This"
                 "\n\t  exit"
                 "\nelse if (True condition)"
                 "\n\t  If this instead Do This"
                 "\n\t  exit"
                 "\nelse"
                 "\n\t  If none of that, Do This"
                 "\n\t  exit"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
void Functions()
{
    DeleteConsole();
    std::cout << "Typical If Statement:"
                 "\n\ncondition;"
                 "\nIf (True condition)"
                 "\n\t  Do This"
                 "\n\t  exit"
                 "\nelse if (True condition)"
                 "\n\t  If this instead Do This"
                 "\n\t  exit"
                 "\nelse"
                 "\n\t  If none of that, Do This"
                 "\n\t  exit"
                 "\n\n 1. Return to Menu" << std::endl;
    int choice;
    std::cin >> choice;
    if (choice == 1)
        Beginner();
    else
        std::cout << "Please type in 1. to Exit." << std::endl;
    DeleteConsole();
}
//*** End Beginner ***//


//*** Advanced ***//

//*** End Advanced ***//


//*** Expert ***//

//*** End Expert ***//


//*** Overall Information ***//

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