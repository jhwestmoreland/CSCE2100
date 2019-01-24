/*
        Jared Westmoreland

        Computer Foundations I	2100	Section 002

	Description: Allows the user to input multiple students's classes and organizes them
		     to where their finals will not intercept one another.
*/

#include <iostream>
using namespace std;

//sorry for the simple code, I would like to use linked list but I was barely taught the concept
//structure to store simple variables
struct variables
{
	int i;
	int j;
	int z;
	int k;
	int l;
}stuff;

//Yeah I really didn't need more than 1 structure... Sorry
struct count
{
	int m;
}item;

//goes to compare each student
void compare(string schedule[][200], int i, int j);

int main()
{
	//Sets these three variables to zero
	stuff.i=0;
	stuff.j=0;
	stuff.z=0;

	string str;
	string str2;
	//makes a 2 dim array to store courses and students
	string schedule[20][200];

	//gets user's file
	while(cin>> str)
	{
		//tries and finds all student names within the file
		size_t found = str.find(str2);
		found = str.find("Student");
		//if found student is found
		if(found != string::npos)
		{
			stuff.i++;
			//stores them in second - infinite column
			schedule[stuff.j][stuff.z] = str;
			//this allows the z axis to move over 1
			stuff.z++;
		}
		//because students are located at zero anything else won't be zero, such as courses
		else if(found != 0)
		{
			//when found !=0 this rests z to 1 for the student variable
			stuff.z=1;
			//moves courses down
			stuff.j++;
			//stores them in the first column
                        schedule[stuff.j][0] = str;
		}
	}

	/*This is for me to see if it separated each class
	for(stuff.l=0; stuff.l<=stuff.j; stuff.l++)
	{
		cout<<" "<<stuff.l<<" ";
		for(stuff.k=0; stuff.k<=stuff.i; stuff.k++)
		{
			cout<<schedule[stuff.l][stuff.k].stuff<<" "<<stuff.k;
		}
		cout<<endl;
	}*/

	//goes to compare
	compare(schedule, stuff.i, stuff.j);
	//classic return 0
	return 0;
}

//this will compare each class with each student within
void compare(string schedule[][200], int i, int j)
{
	//moves the courses name, only to make it clean looking
	string space = "\t";
	//sets each variable to zero
	item.m=0;
	//makes a 2 dim array to display
	string final[20][20];
	//need to compare each student within the class with other classes's students
		//nice and pretty title
		cout<<"\n+-------------------------------------------------------------------------------------------------------+"<<endl
		    <<"| Time Slot\t|\t\t\tClasses Scheduled in that time slot\t\t\t\t|"
		    <<"\n+-------------------------------------------------------------------------------------------------------+"<<endl;
	//Compare students with in each course
	for(stuff.l=1; stuff.l<=stuff.j; stuff.l++)
	{
		//moves the display for courses
		item.m++;
		for(stuff.k=1; stuff.k<=stuff.i; stuff.k++)
                {
			//this is an overly complicated thing that kind of works, but not at 100%
			//Basically it compares each student within the l course to each student to l+1 course
			if(schedule[stuff.l][1] == schedule[item.m+1][stuff.k] || schedule[stuff.l][2] == schedule[item.m+1][stuff.k] || schedule[stuff.l][3] == schedule[item.m+1][stuff.k] || schedule[stuff.l][4] == schedule[item.m+1][stuff.k] || schedule[stuff.l][5] == schedule[item.m+1][stuff.k] || schedule[stuff.l][6] == schedule[item.m+1][stuff.k] || schedule[stuff.l][7] == schedule[item.m+1][stuff.k] || schedule[stuff.l][8] == schedule[item.m+1][stuff.k] || schedule[stuff.l][9] == schedule[item.m+1][stuff.k] || schedule[stuff.l][10] == schedule[item.m+1][stuff.k] || schedule[stuff.l][11] == schedule[item.m+1][stuff.k] || schedule[stuff.l][12] == schedule[item.m+1][stuff.k] || schedule[stuff.l][13] == schedule[item.m+1][stuff.k] || schedule[stuff.l][14] == schedule[item.m+1][stuff.k] || schedule[stuff.l][15] == schedule[item.m+1][stuff.k] || schedule[stuff.l][16] == schedule[item.m+1][stuff.k] || schedule[stuff.l][17] == schedule[item.m+1][stuff.k] || schedule[stuff.l][18] == schedule[item.m+1][stuff.k] || schedule[stuff.l][19] == schedule[item.m+1][stuff.k] || schedule[stuff.l][20] == schedule[item.m+1][stuff.k])
                        {
				//if it is able to find a match
				final[item.m][stuff.k] = schedule[stuff.l][0] + space;
				break;
			}
                        else
                        {
				//if there is no match it puts it on the one above
				final[stuff.l+1][2] = schedule[stuff.l][0];
				//this is what puts it one above
				item.m--;
				break;
			}
                }
	}
	//displays all what is inside final[][]
	for(stuff.l=1; stuff.l<=10; stuff.l++)
	{
		//makes the number and lines to separate courses and time slot
		cout<<"| "<<stuff.l<<"\t\t|";
		for(stuff.k=0; stuff.k<=10; stuff.k++)
		{
			//displays all time
			cout<<final[stuff.l][stuff.k];
		}
		cout<<endl;
	}
	//line under 2 dim array
	cout<<"+-------------------------------------------------------------------------------------------------------+\n"<<endl;
}

//Again I'm sorry I really wish I could have completed this, but when making the comparsion I got stuck and could not figure out a solution
