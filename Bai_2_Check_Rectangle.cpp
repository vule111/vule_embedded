/* Tạo một lớp hình chữ nhật với các thuộc tính chiều dài, chiều rộng và
các phương thức để tính chu vi, diện tích, đường chéo và kiểm tra xem
nó có phải là hình vuông hay không. */

#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <iostream>


class Rectangle
{ // thuộc tính, khai báo thuộc tính
    private:
        double length;
        double width;
        typedef enum Format{
        NOT_CORRECT = 0,
        CORRECT
    }Format;
    Format format;
// phương thức, khai báo phương thức
    public:
        Rectangle(double length, double width);
        double getlength();
        double getwidth();
        double calculatePerimeter();
        double calculateArea();
        double calculateDiagonalLine();
        void checkSquare();
    


};
// Định nghĩa phương thức bên ngoài class
Rectangle::Rectangle(double length, double width){
    if(length<=0 || width <= 0){
        printf("Khong ton tai hinh chu nhat");
        format = NOT_CORRECT;
        return;
    }
    this-> length = length; // không cần cũng được
    this-> width = width;
}
double Rectangle::getlength(){
    if (format == NOT_CORRECT){
        printf("Khong ton tai\n");
        return -1;
    }
    return length;
}
double Rectangle::getwidth(){
    if (format == NOT_CORRECT){
        printf("Khong ton tai\n");
        return -1;
    }
    return width;
}

// Phương thức tính chu vi
double Rectangle::calculatePerimeter(){
    if (format == NOT_CORRECT){
        printf("Khong ton tai\n");
        return -1;
    }
    return (double)((length + width) * 2);
}

// Phương thức tính diện tích
double Rectangle::calculateArea(){
    if (format == NOT_CORRECT){
        printf("KHONG DUNG DINH DANG DO DAI\n");
        return -1;
    }
    return (double)(length * width);
}

// Phương thức tính đường chéo
double Rectangle::calculateDiagonalLine(){
    if (format == NOT_CORRECT){
        printf("KHONG DUNG DINH DANG DO DAI\n");
        return -1;
    }
    return (double)(sqrt(pow(length, 2) + pow(width, 2)));
}

// Kiểm tra xem có phải la hình vuông hay không
void Rectangle::checkSquare(){
    if (format == NOT_CORRECT){
        printf("KHONG DUNG DINH DANG DO DAI\n");
        return;
    }
    if(length == width){
        printf("DAY LA HINH VUONG\n");
    }
    else{
        printf("DAY KHONG PHAI LA HINH VUONG\n");
    }
}


int main(int argc, char const *argv[])
 {
// hàm main
    Rectangle rec(5, 5);
    printf("CHIEU DAI: %.2f\n", rec.getlength());
    printf("CHIEU RONG: %.2f\n", rec.getwidth());
    printf("CHU VI: %.2f\n", rec.calculatePerimeter());
    printf("DIEN TICH: %.2f\n", rec.calculateArea());
    printf("DUONG CHEO: %.2f\n", rec.calculateDiagonalLine());
    rec.checkSquare();
    return 0;
 }