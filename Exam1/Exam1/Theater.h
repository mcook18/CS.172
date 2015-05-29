//I affirm that all code given below was written solely by me,
//Madeline Cook, and that any help I received adhered to
//the rules stated for this exam
#include <string>
#include "Movie.h"
using namespace std;
class Theater{
private:
	string Name;
	string Phone;
	int Popcorn= 5;
	int Coke=3;

	Theater(string name, string phone){
		name = Name;
		phone = Phone;
	}
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(string Genre);
	int GetPopcornPrice();
	int GetCokePrice();

};