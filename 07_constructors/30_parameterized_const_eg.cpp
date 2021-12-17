#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
    friend void dist(Point, Point);
};
void dist(Point p, Point q)
{
    int diffx = p.x - q.x;
    int diffy = p.y - q.y;
    int sq = (diffx * diffx + diffy * diffy);

    double result = sqrt(sq);

    cout << "The distance is " << result << endl;
}

int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    dist(p, q);

    return 0;
}