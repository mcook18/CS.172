#include <iostream>
using namespace std;

class Rectangle2D{
private:
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D(){
		x = 0;
		y = 0;
		width = 1;
		height = 1;
	}
	Rectangle2D(double X, double Y, double Width, double Height){
		x = X;
		y = Y;
		width = Width;
		height = Height;
	}
	double getx();
	double gety();
	double getwidth();
	double getheight();
	void setx(double  x);
	void sety(double y);
	void setwidth(double width);
	void setheight(double height);
	double getArea();
	double getPerimeter();
	bool Contains(double X, double Y);
	bool contains( Rectangle2D &r);
	bool overlap( Rectangle2D &r);
	};
double Rectangle2D::getx(){ return x; }
double Rectangle2D::gety(){ return y; }
double Rectangle2D::getwidth(){ return width; }
double Rectangle2D::getheight(){ return height; }
void Rectangle2D::setx(double  newx){ x = newx; }
void Rectangle2D::sety(double newy){ y = newy; }
void Rectangle2D::setwidth(double newwidth){ width = newwidth; }
void Rectangle2D::setheight(double newheight){ height = newheight; }
double Rectangle2D::getArea(){
	double area;
	double Width = getwidth();
	double Height = getheight();
	area = Width*Height;
	return area;
}
double Rectangle2D::getPerimeter(){
	double perim;
	double Width = getwidth();
	double Height = getheight();
	perim = ((2 * Width) + (2 * Height));
	return perim;
}
bool Rectangle2D::Contains(double X, double Y){
	bool inside=false;
	if (X < width&&Y < height){
		inside = true;}
	return inside;
}
bool Rectangle2D::contains(Rectangle2D& r){ 
	bool inside=false;
	double widthr = r.getwidth();
	double rheight = r.getheight();
	if (widthr < width && rheight < height)
		inside = true;
	return inside;
}
bool Rectangle2D::overlap(Rectangle2D &r){
	bool overlap = false;
	double X = r.getx();
	double Y = r.gety();
	if (X < (x + width) && Y < (y + height)){
		overlap = true;
	}
	return overlap;
}

int main(){
	Rectangle2D r1(2, 2, 5.5, 4.9);
	Rectangle2D r2(4, 5, 10.5, 3.2);
	Rectangle2D r3(3, 5, 2.3, 5.4);
	cout << "ri's area is " << r1.getArea() << endl;
	cout<< "r1's perimeter is " << r1.getPerimeter() << endl;
	if (r1.Contains(3, 3)){
		cout<<"r1 constains (3,3)" << endl;
	}
	else
		cout << "r1 does not contain" << endl;

	if (r1.contains(r2))
		cout << "r1 contains r2" << endl;
	else
		cout << "r1 does not contain r2" << endl;
	if (r1.overlap(r3))
		cout << "r1 overlaps with r3" << endl;
	else
		cout << "r1 does not overlap with r3" << endl;
}