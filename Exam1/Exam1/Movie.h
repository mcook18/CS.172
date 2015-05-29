//I affirm that all code given below was written solely by me,
//Madeline Cook, and that any help I received adhered to
//the rules stated for this exam. 
#include <string>
using namespace std;
class Movie{
private:
	string Title;
	string Genre;
	int ShowTime;
public:
	string GetTitle();
	string GetGenre();
	int GetShowTime();
	Movie(string title, string genre, int showtime);
	Movie();
	

};