#include <iostream>
#include <vector>


class Myclass {};

void foo(Myclass&) {

}
void foo(const Myclass&) {

}

void foo(Myclass&&) {

}

template <typename T>
void call_foo(T&& x) //This is Universal Reference 
{
	foo(std::forward<T>(x));
}
int main()
{
	Myclass m;
	const Myclass cm;

	foo(m);
	call_foo(m);

	foo(cm);
	call_foo(cm);

	foo(Myclass{});
	call_foo(Myclass{});
}