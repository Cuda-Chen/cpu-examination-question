#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point
{
    int x;
    int y;
};

bool cmp(const Point &a, const Point &b)
{
    if(a.x != b.x)
    {
        return (a.x < b.x);
    }

    return (a.y < b.y);
}

int main()
{
    vector<Point> points;
    int xTemp, yTemp;
    Point temp;

    while(cin >> xTemp >> yTemp)
    {
        temp.x = xTemp;
        temp.y = yTemp; 
        points.push_back(temp);
    }

    // 適用於C++98之後的寫法
    //sort(temp, temp + points.size(), cmp);
    // 適用於C++11之後的寫法 (lambda表示式)
    sort(points.begin(), points.end(), [](const Point &a, const Point &b)
                                     { return a.x == b.x ? (a.y < b.y) : a.x < b.x; });

    cout << "W = " << points[points.size() - 1].x - points[0].x << " "
        << "H = " << points[points.size() - 1].y - points[0].y
        << endl;

    return 0;
}
