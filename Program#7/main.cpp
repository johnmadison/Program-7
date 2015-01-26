//
//  main.cpp
//  Program#7
//
//  Created by John Madison on 11/20/14.
//  Copyright (c) 2014 cmu. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class BoxClass
{
public:
    BoxClass();
    BoxClass(double length1, double width1, double height1);
    void printem(ofstream &outf);
    double getlength();
    double getwidth();
    double getheight();
    void setlength(double length1);
    void setwidth(double width1);
    void setheight(double height1);
    double getvolumeinches();
    double getvolumefeet();
    double getsurfaceinches();
    double getsurfacefeet();
private:
    double length, width, height;

};


int main()

{
    BoxClass Box1, Box2(10,15,12);
    ofstream outf("output.txt");
    outf << "The Dimensions of Box1 are: " << endl;
    Box1.printem(outf);
    outf << "The Dimensions of Box2 are: " << endl;
    Box2.printem(outf);
    
    Box1.setlength(35.5);
    Box1.setwidth(25.0);
    Box1.setheight(20.225);
    
    outf << "The Volume of Box1 in inches: "  << Box1.getvolumeinches()  << endl <<endl;
    outf << "The Volume of Box2 in inches: "  << Box2.getvolumeinches()  << endl <<endl;
    outf << "The Volume of Box1 in feet: "    << Box1.getvolumefeet()    << endl <<endl;
    outf << "The Volume of Box2 in feet: "    << Box2.getvolumefeet()    << endl <<endl;
    outf << "The Surface of Box1 in inches: " << Box1.getsurfaceinches() << endl <<endl;
    outf << "The Surface of Box2 in inches: " << Box2.getsurfaceinches() << endl <<endl;
    
    outf << "To wrap Box1 and Box2 You'll Need " << Box1.getsurfaceinches() + Box2.getsurfaceinches() << " square inches of wrapping paper." <<endl <<endl;
    
    outf << "To Fill Box1 and Box2 with soil you'll need " << (Box1.getvolumefeet() + Box2.getvolumefeet()) << " square feet of soil." <<endl <<endl;
    
    return 0;
}

double BoxClass::getlength()
{
    return length;
}

double BoxClass::getwidth()
{
    return width;
}

double BoxClass::getheight()
{
    return height;
}

void BoxClass::setlength(double length1)
{
    length = length1;
}

void BoxClass::setwidth(double width1)
{
    width = width1;
}

void BoxClass::setheight(double height1)
{
    height = height1;
}

double BoxClass::getvolumeinches()
{
    return length * width * height;
}

double BoxClass::getvolumefeet()
{
    return (length * width * height)/12.0;
}

double BoxClass::getsurfaceinches()
{
    return ((length * width)*2)+((width * height)*2)+((length * height)*2);
}

double BoxClass::getsurfacefeet()
{
    return (((length * width)*2)+((width * height)*2)+((length * height)*2))/12.0;
}

void BoxClass::printem(ofstream &outf)
{
    outf.setf(ios::fixed);
    outf.precision(3);
    outf << "Length = " << length <<endl;
    outf << "Width  = " << width <<endl;
    outf << "Height = " << height << endl;
    outf <<endl;
}

BoxClass::BoxClass()
    {
        length = 0.0;
        width = 0.0;
        height = 0.0;
    }
            
BoxClass::BoxClass(double length1, double width1, double height1)
    {
        length = length1;
        width = width1;
        height = height1;
    }
            



