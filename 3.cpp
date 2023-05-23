#include <bits/stdc++.h>

using namespace std;

class Shape {
    public:
        void drawShape() {
            cout << "Drawing a Shape\n";
        }
};

class Circle : Shape 
{
    public: 
        void drawShape()
        {
            cout << ""
        }
}

/*
 * Create the Circle, Square, Rectangle and ShapeFactory class.
 */
int main() 
{
    int n;
    cin >> n;

    Shape* shape = new Shape();
    
    static_cast<Circle*>(shape)->drawShape();
    static_cast<Square*>(shape)->drawShape();
    static_cast<Rectangle*>(shape)->drawShape();
    
    cout << endl;
    
    ShapeFactory factory;

    for (int i = 0; i < n; i++) {
        string shape;
        cin >> shape;

        factory.drawShape(shape);
    }

    return 0;
}