#include <iostream>
#include "locale.h"
#include <math.h>
#define _USE_MATH_DEFINES


using namespace std;
class Krug
{
private:
    int x;
    int y;
    int r;
public:
    Krug()
    {
        x = 1;
        y = 4;
        r = 8;
    }
    Krug(int b)
    {
        x = 1;
        y = 2;
        r = b;
    }
    static double plowad(int r)
    {
        return M_PI*(pow(r, 2));
    }
    static double perimetr(int r)
    {
        return 2 * M_PI*r;
    }
    static bool peresechenie(Krug krug1, Krug krug2)
    {
        int abs_vect = sqrt(pow((krug2.x - krug1.x), 2) + (pow((krug2.y - krug1.y), 2)));
        int sum_r = (krug1.r + krug2.r);
        if (sum_r >= abs_vect)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    static bool concentri4nost(Krug krug1, Krug krug2)
    {
        if (krug1.x == krug2.x && krug1.y == krug2.y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    static void vivod(Krug krug1)
    {
        cout << "Information about 1st circle: " << endl;
        cout << "X = " << krug1.x << endl;
        cout << "Y = " << krug1.y << endl;
        cout << "R = " << krug1.r << endl;
        cout << "Perimeter of the 1st circle = " << perimetr(krug1.r) << endl;
        cout << "Area of the 1st circle = " << plowad(krug1.r) << endl;
    }
    static void vivod1(Krug krug2)
    {
    cout << "Information about 2nd circle: " << endl;
    cout << "X = " << krug2.x << endl;
    cout << "Y = " << krug2.y << endl;
    cout << "R = " << krug2.r << endl;
    cout << "Perimeter of the 2nd circle = " << perimetr(krug2.r) << endl;
    cout << "Area of the 2nd circle = " << plowad(krug2.r) << endl;
}
    static bool sravnenie(Krug krug1, Krug krug2)
    {
        if (krug1.r == krug2.r)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


};



int main()
{
    setlocale(LC_ALL, "RUS");
    Krug krug1, krug2(8);
    krug1.vivod(krug1);
    krug2.vivod1(krug2);
    krug1.peresechenie(krug1, krug2);
    krug1.sravnenie(krug1,krug2);
    krug1.concentri4nost(krug1, krug2);


}
