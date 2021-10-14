#include <iostream>
#include <string>


int ask_user_for_integer ( std :: string prompt )
{
	std :: cout << prompt << " int :";
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

int find_highest_of_three( int first, int second, int third) {
	int highest = first;
	if(compare(first, second) == -1) {
		highest = second;
	}
	if(compare(second, third) == -1) {
		highest = third;
	}
	return highest;
}

int main ()
{
	auto const a = ask_user_for_integer ("a = ");
	auto const b = ask_user_for_integer ("b = ");
	auto const c = ask_user_for_integer ("c = ");
	std :: cout << find_highest_of_three(a,b,c) << '\n';
	return 0;
}

