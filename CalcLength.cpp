#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "What do we want to convert that into?" << endl;
    cout << "1.Milimeters to others" << endl;
    cout << "2.Centimeters to others" << endl;
    cout << "3.Decimeters to others" << endl;
    cout << "4.Meters to others" << endl;
    cout << "5.Kilometers to others" << endl;
    cout << "6.Feet to others" << endl;
    cout << "7.Miles to others" << endl;
    cout << "8.Inches to others" << endl;
    cout << "===========================================================================================================" << endl;

    double milimeter, centimeter, decimeter, meter, kilometer, foot, mile, inch;

    int choice_1;
    cin >> choice_1;
    switch (choice_1)
    {
    case 1:
        cout << "Our length in milimeters is: " << endl;
        cin >> milimeter;
        cout << milimeter << " in milimeters" << endl;

        centimeter = milimeter / 10;
        cout << centimeter << " in centimeters" << endl;

        decimeter = milimeter / 100;
        cout << decimeter << " in decimeters" << endl;

        meter = milimeter / 1000;
        cout << meter << " in meters" << endl;

        kilometer = milimeter / 10000;
        cout << kilometer << " in kilometers" << endl;

        foot = milimeter / 304.8;
        cout << foot << " in foot" << endl;

        mile = milimeter / 16093440;
        cout << mile << " in miles" << endl;

        inch = milimeter / 25.4;
        cout << inch << " in inches" << endl;
        break;
    case 2:
        cout << "Our length in centimeters is: " << endl;
        cin >> centimeter;
        milimeter = centimeter * 10;
        cout << milimeter << " in milimeters" << endl;

        cout << centimeter << " in centimeters" << endl;

        decimeter = centimeter / 10;
        cout << decimeter << " in decimeters" << endl;

        meter = centimeter / 100;
        cout << meter << " in meters" << endl;

        kilometer = centimeter / 1000;
        cout << kilometer << " in kilometers" << endl;

        foot = centimeter / 30.48;
        cout << foot << " in foot" << endl;

        mile = centimeter / 1609.34;
        cout << mile << " in miles" << endl;

        inch = centimeter / 2.54;
        cout << inch << " in inches" << endl;
        break;
    case 3:
        cout << "Our length in decimeters is: " << endl;
        cin >> decimeter;
        milimeter = decimeter * 100;
        cout << milimeter << " in milimeters" << endl;

        centimeter = decimeter * 10;
        cout << centimeter << " in centimeters" << endl;

        cout << decimeter << " in decimeters" << endl;

        meter = decimeter / 10;
        cout << meter << " in meters" << endl;

        kilometer = decimeter / 100;
        cout << kilometer << " in meters" << endl;

        foot = decimeter * 3.05;
        cout << foot << " in feet" << endl;

        mile = decimeter * 16092.69;
        cout << mile << " in miles" << endl;

        inch = decimeter * 0.25;
        cout << inch << " in inches" << endl;
        break;
    case 4:
        cout << "Our length in meters is: " << endl;
        cin >> meter;
        milimeter = meter * 1000;
        cout << milimeter << " in milimeters" << endl;

        centimeter = meter * 100;
        cout << centimeter << " in centimeters" << endl;

        decimeter = meter * 10;
        cout << decimeter << " in decimeters" << endl;

        cout << meter << " in meters" << endl;

        kilometer = meter / 1000;
        cout << kilometer << " in kilometers" << endl;

        foot = meter * 3.28;
        cout << foot << " in feet" << endl;

        mile = meter * 0.00062;
        cout << mile << " in miles" << endl;

        inch = meter * 39.3701;
        cout << inch << " in inches" << endl;
        break;
    case 5:
        cout << "Our length in kilometers is: " << endl;
        cin >> kilometer;
        milimeter = kilometer * 1000000;
        cout << milimeter << " in milimeters" << endl;

        centimeter = kilometer * 100000;
        cout << centimeter << " in centimeters" << endl;

        decimeter = kilometer * 10000;
        cout << kilometer << " in kilometers" << endl;

        meter = kilometer * 1000;
        cout << meter << " in meters" << endl;

        cout << kilometer << " in kilometers" << endl;

        foot = kilometer * 3280.84;
        cout << foot << " in feet" << endl;

        mile = kilometer * 0.62;
        cout << mile << " in miles" << endl;

        inch = kilometer * 39370.08;
        cout << inch << " in inches" << endl;
        break;
    case 6:
        cout << "Our length in feet is: " << endl;
        cin >> foot;
        milimeter = foot * 304.80;
        cout << milimeter << " in milimeters" << endl;

        centimeter = foot * 30.480;
        cout << centimeter << " in centimeters" << endl;

        decimeter = foot * 3.0480;
        cout << decimeter << " in decimeters" << endl;

        meter = foot * 0.304;
        cout << meter << " in meters" << endl;

        kilometer = foot * 0.000304;
        cout << kilometer << " in kilometers" << endl;

        cout << foot << " in feet" << endl;

        mile = foot * 0.00019;
        cout << mile << " in miles" << endl;

        inch = foot * 11.99999;
        cout << inch << " in inches" << endl;
        break;
    case 7:
        cout << "Our length in miles is: " << endl;
        cin >> mile;
        milimeter = mile * 1609269.39;
        cout << milimeter << " in milimeters" << endl;

        centimeter = mile * 160926.939;
        cout << centimeter << " in centimeters" << endl;

        decimeter = mile * 16092.69;
        cout << decimeter << " in decimeters" << endl;

        meter = mile * 1609.269;
        cout << meter << " in meters" << endl;

        kilometer = mile * 1.609;
        cout << kilometer << " in kilometers" << endl;

        foot = mile * 5279.76;
        cout << foot << " in feet" << endl;

        cout << mile << " in miles" << endl;

        inch = mile * 63357.06;
        cout << inch << " in meters" << endl;
        break;
    case 8:
        cout << "Our length in inches is: " << endl;
        cin >> inch;
        milimeter = inch * 25.4;
        cout << milimeter << " in milimeters" << endl;

        centimeter = inch * 2.54;
        cout << centimeter << " in centimeters" << endl;

        decimeter = inch * 0.254;
        cout << " in decimeters" << endl;

        meter = inch * 0.0254;
        cout << meter << " in meters" << endl;

        kilometer = inch * 0.0000254;
        cout << kilometer << " in kilometers" << endl;

        foot = inch * 0.083;
        cout << foot << " in feet" << endl;

        mile = inch * 0.000016;
        cout << mile << " in miles" << endl;

        cout << inch << " in inches" << endl;
        break;
    default:
        cout << "Something went wrong" << endl;
        break;
    }
    return 0;
}

