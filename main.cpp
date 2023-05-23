#include <iostream>
#include <string>

void beginnerInfo()
{
    std::string beginner_info = "Welcome to my c++ CheatSheet";

    std::cout << beginner_info << std::endl;

}

//** Main Function **//

int main() {

    beginnerInfo();

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
    int my_int = 100'000;

    //8 bytes = 64 bits(2^64 = 18446744073709551616) - (also von -9223372036854775808 bis 9223372036854775807)
    long long my_long_long = 5'000'000'000;

    //4 bytes = 32 bits(2^32 = 4294967296) - (also von -2147483648 bis 2147483647)
    float my_float = 3.14;

    //8 bytes = 64 bits(2^64 = 18446744073709551616) - (also von -9223372036854775808 bis 9223372036854775807)
    double my_double = 500'000'000'000.14;


    //unsigned = nur positive Zahlen

    //1 byte = 8 bits(2^8 = 256) - (also von 0 bis 255)
    unsigned char my_unsigned_char = 10;

    //2 bytes = 16 bits(2^16 = 65536) - (also von 0 bis 65535)
    unsigned short my_unsigned_short = 300;

    //4bytes = 32 bits(2^32 = 4294967296) - (also von 0 bis 4294967295)
    unsigned int my_unsigned_int = 100'000;

    //8 bytes = 64 bits(2^64 = 18446744073709551616) - (also von 0 bis 18446744073709551615)
    unsigned long long my_unsigned_long_long = 5'000'000'000;



}