/*============= Khai bao =============*/
#include <stdio.h>
#include <stdint.h>
#include <math.h>


/*============= Class Point=============*/
class Point{
    private:
        double x; // truc x
        double y; // truc y
    public:
        Point(double x = 0, double y = 0 ) : x(x), y(y){} // Constructor
        double getx(){return this -> x;} // method
        double gety(){return this -> y;}
};

/*============= Class Space2D=============*/
class Space2D{
    private:
        Point p1;
        Point p2;
        Point p3;
        typedef enum Math{
            DISTANCE = 0,
            AREA 
        }Math;
        Math math;

    public:
        Space2D(Point p1, Point p2);
        Space2D(Point p1, Point p2, Point p3);
        Point getp1();
        Point getp2();
        Point getp3();
        double CalculateDistance();
        double CalculateArea();

};

Space2D::Space2D(Point p1, Point p2){
    Space2D::math = DISTANCE;
    this->p1 = p1;
    this->p1 = p2;
}
Space2D::Space2D(Point p1, Point p2, Point third_pop3int){
    Space2D::math = AREA;
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
}

Point Space2D::getp1(){
    return this->p1;
    }
Point Space2D::getp2(){
    return this->p2;
    }
Point Space2D::getp3(){
    if(Space2D::math != AREA){
        printf("KHONG NHAP VAO DIEM THU 3\n");
        return -1;
    }
    return this->p3;

}

/*============= Distance=============*/

double Space2D::CalculateDistance(){
    if(Space2D::math != DISTANCE){
        printf("DU LIEU NHAP VAO KHONG PHU HOP\n");
        return 0;
    }
    return (double)(sqrt(pow(this->p1.getx() - this->p2.getx(),2) \
    + pow(this->p1.gety() - this->p1.gety(),2)));
}

/*============= Area=============*/

double Space2D::CalculateArea(){
    if(Space2D::math != AREA){
        printf("KHONG PHAI LA TAM GIAC\n");
        return 0;
    }
    double distance_a = sqrt(pow(this->p1.getx() - this->p2.getx(),2) + pow(this->p1.gety() - this->p2.gety(),2));
    double distance_b = sqrt(pow(this->p1.getx() - this->p3.getx(),2) + pow(this->p1.gety() - this->p3.gety(),2));
    double distance_c = sqrt(pow(this->p3.getx() - this->p2.getx(),2) + pow(this->p3.gety() - this->p2.gety(),2));
    double p = (distance_a + distance_b + distance_c) / 2;
    return (double)(sqrt(p*(p - distance_a)*(p - distance_b)*(p - distance_c)));
}

int main(int argc, char const *argv[])
{
    /* code */
    Point point1(2.3, 3.2);
    Point point2(2.0, 3.0);
    Point point3(2.5, 3.9);

    Space2D space1(point1, point2);
    Space2D space2(point1, point2, point3);

 /*============= Space 1=============*/

    printf("POINT 1(%.2lf,%.2lf)\n", space1.getp1().getx(), space1.getp1().gety());
    printf("POINT 2(%.2lf,%.2lf)\n", space1.getp2().getx(), space1.getp2().gety());
    printf("DISTANCE: %.2lf\n\n", space1.CalculateDistance());

/*============= Space 2=============*/

    printf("POINT 1(%.2lf,%.2lf)\n", space2.getp1().getx(), space2.getp1().gety());
    printf("POINT 2(%.2lf,%.2lf)\n", space2.getp2().getx(), space2.getp2().gety());
    printf("AREA: %.2lf\n\n", space2.CalculateArea());

    return 0;
}