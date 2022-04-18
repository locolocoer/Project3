#include <iostream>
class X {
public:
	void f() {};
};
class Y {
public:
	void f() {};
	void g() {};
};
class Z :public X,public Y {
public :
	void g() {};
	void h() {};
};
int main() {
	Z obj;
	obj.X::f();
	obj.g();
}