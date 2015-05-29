//I affirm that all code given below was written solely by me,
//Madeline Cook, and that any help I received adhered to
//the rules stated for this exam

#include "Movie.h"

Movie::Movie(){
	Title = "Cloudy With a Chance of Meatballs";
	Genre = "Comedy";
	ShowTime = 12;
}
Movie::Movie(string title, string genre, int showtime){
	title = Title;
	if (genre == "Action"){
		showtime = ShowTime;
	}
	else if (genre == "Horror"){
		showtime = ShowTime;
	}
	else if (genre == "Documentary"){
		showtime == ShowTime;
	}
	else{
		showtime = ShowTime;
		genre = "comedy";
	}
	genre = Genre;

}
string Movie::GetTitle(){
	return Title;
}
string Movie::GetGenre(){
	return Genre;
}
int Movie::GetShowTime(){
	return ShowTime;
}