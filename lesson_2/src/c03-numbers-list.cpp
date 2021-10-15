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
	auto s = ask_user_for_integer ("s = ");
	auto buff = 0;

	if(compare(a, b) == 1) {
		buff = a;
		a = b;
		b = buff;
	}

	
	if(s == 0) return 0;
	if(s >= 0) {
		for(int i = a; i < b; i+=s) {
			std::cout << i << " ";
		}
	} else {
		for(int i = b; i >= a; i+=s) {
			std::cout << i << " ";
		}
	}
	
	std::cout << "\n";
	return 0;
}
