#include<stdio.h>
#include<stdint.h> // thường sẽ dùng thư viện này trong ngành nhúng.


// khi mà lập trình nhúng thì k có khai báo kiểu:
// int a = 10;
// uint8_t bien = 255; // uint8 = unsigned interger, biến này là 8 bit...
// Công thức = 2^8 = 0 - 255 là 256 giá trị
// biến
int16_t bien = 32768;

int main(int argc, char const *argv[])
{
    printf("\ntest: %d",  bien);
    return 0;
}
