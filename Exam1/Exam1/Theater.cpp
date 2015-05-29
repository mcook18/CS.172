//I affirm that all code given below was written solely by me,
//Madeline Cook, and that any help I received adhered to
//the rules stated for this exam
#include "Theater.h"
#include"Movie.h"

void Theater::AddMovie(Movie& movie){
	
	
}
string Theater::GetMovieForHour(int Hour){ 
	
	string title;
	if (Hour > 0 && Hour<24){
		int showTime;
		Movie movie;
		showTime=movie.GetShowTime() ;
		if (Hour == showTime||Hour> showTime+2){
			
			title=movie.GetTitle();
		
		}
	}
	return title; }
int Theater::GetShowTimeForGenre(string Genre){
	int showTime;

	return showTime; }
int Theater::GetPopcornPrice(){ return Popcorn; }
int Theater::GetCokePrice(){ return Coke; }