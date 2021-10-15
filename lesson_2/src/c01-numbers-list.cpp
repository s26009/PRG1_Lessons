#include <iostream>
#include <string>

int ask_user_for_integer ( std :: string prompt ) {
	std :: cout << prompt;
	auto n = std :: string {};
	std :: getline ( std :: cin , n);
	return std :: stoi (n);
}

int compare( int first, int second) {
	if (first < second) {
		return -1;
	} else if (first > second) {
		return 1;
	} 
	return 0;
}

void swap(int a, int b) {
	int buff = a;
	a = b;
	b = buff;
}

int main () {
	auto a = ask_user_for_integer ("a = ");
	auto b = ask_user_for_integer ("b = ");
	auto buff = 0;

	if(compare(a, b) == 1) {
		buff = a;
		a = b;
		b = buff;
	}

	for(int i = a; i < b; i++) {
		std::cout << i << " ";
	}
	return 0;
}

