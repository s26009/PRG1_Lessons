#include <iostream>
#include <string>


int ask_user_for_integer ( std :: string prompt )
{
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
	} else if (first == second) {
		return 0;
	}
	return -2;
}

int main ()
{
	auto const a = ask_user_for_integer ("a = ");
	auto const b = ask_user_for_integer ("b = ");

	switch(compare(a,b)) {
		case 1:
			std :: cout << a << "\n";
			break;
		case 0:
			std :: cout << "Both numbers are equal (" << a << ")\n";
			break;
		case -1:
			std :: cout << b << "\n";
			break;
		case -2:
			std :: cout << "Error while comparison.\n";
			break;
		default:
			std :: cout << "Error while comparison.\n";
	}

	return 0;
}

