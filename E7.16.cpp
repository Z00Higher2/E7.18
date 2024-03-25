// Author: Zuhayer Tashin
// Course: CSCI-135
// Instructor: Tong Yi
// Assignment: HW E7.16
// 
// */

#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double distance(Point a, Point b) {
    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

int main() {
    Point p1, p2;
    cout << "Enter x and y coordinates of point 1: ";
    cin >> p1.x >> p1.y;
    cout << "Enter x and y coordinates of point 2: ";
    cin >> p2.x >> p2.y;
    double dist = distance(p1, p2);
    cout << "Distance between the points: " << dist << endl;
    return 0;
}

// E7.16
// #include <iostream>
// #include <cmath>

// using namespace std;

// struct Point {
//     double x, y;
// };

// struct Triangle {
//     Point p1, p2, p3;
// };

// double distance(Point p1, Point p2) {
//     return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
// }

// double perimeter(Triangle t) {
//     double d1 = distance(t.p1, t.p2);
//     double d2 = distance(t.p2, t.p3);
//     double d3 = distance(t.p3, t.p1);
//     return d1 + d2 + d3;
// }


// int main() {
//     Point p1, p2, p3;
//     cout << "Enter the coordinates of point 1 (x y): ";
//     cin >> p1.x >> p1.y;
//     cout << "Enter the coordinates of point 2 (x y): ";
//     cin >> p2.x >> p2.y;
//     cout << "Enter the coordinates of point 3 (x y): ";
//     cin >> p3.x >> p3.y;

//     Triangle t = {p1, p2, p3};
//     double p = perimeter(t);

//     cout << "The perimeter of the triangle is: " << p << endl;

//     return 0;
// }

