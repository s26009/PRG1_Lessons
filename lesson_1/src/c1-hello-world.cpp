#include <iostream>
#include <string>

int main () {
	auto n = std :: string {};
	std :: cout << "Your name: ";
	getline ( std :: cin , n);
	if (not n.empty()) {
		std :: cout << "Hello, " << n << "!\n";
	}
	return 0;
}

