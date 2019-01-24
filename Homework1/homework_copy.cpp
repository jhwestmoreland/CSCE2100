/*
        Jared Westmoreland

        Computer Foundations I	2100	Section 002

	Description: Allows the user to input multiple students's classes and organizes them
		     to where their finals will not intercept one another.
*/

#include <iostream>
using namespace std;

struct variables
{
	int i;
	int j;
	int z;
	int k;
	int l;
	int m;
	int n;
}stuff;

void compare(string schedule[][200], int i, int j);

int main()
{
	//Stuff </3
	stuff.i=0;
	stuff.j=0;
	stuff.z=0;
	string str;
	string str2;
	string schedule[20][200];
	//gets user's file

	while(cin>> str)
	{
		//tries and finds all student names within the file
		size_t found = str.find(str2);
		found = str.find("Student");
		//if found
		if(found != string::npos)
		{
			stuff.i++;
			//stores them in second - infinite column
			schedule[stuff.j][stuff.z] = str;
			stuff.z++;
		}
		//because students are located at zero anything else won't be zero, such as courses
		else if(found != 0)
		{
			stuff.z=1;
			stuff.j++;
			//stores them in the first column
                        schedule[stuff.j][0] = str;
		}
	}
	/*This is for me to see if it separated each class
	for(int l=0; l<=j; l++)
	{
		cout<<" "<<l<<" ";
		for(int k=0; k<=i; k++)
		{
			cout<<schedule[l][k].stuff<<" "<<k;
		}
		cout<<endl;
	}*/

	//goes to compare
	compare(schedule, stuff.i, stuff.j);
	return 0;
}

void compare(string schedule[][200], int i, int j)
{
	string space = "\t";
	stuff.m=0;
	stuff.n=1;
	stuff.z=0;
	string final[20][20];
	//need to compare each student within the class with other classes's students
		cout<<"\n+-------------------------------------------------------------------------------------------------------+"<<endl
		    <<"| Time Slot\t|\t\t\tClasses Scheduled in that time slot\t\t\t\t|"
		    <<"\n+-------------------------------------------------------------------------------------------------------+"<<endl;
	for(stuff.l=1; stuff.l<=stuff.j; stuff.l++)
	{
		stuff.m++;
		for(stuff.k=1; stuff.k<=stuff.i; stuff.k++)
                {
			if(schedule[stuff.l][1] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][2] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][3] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][4] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][5] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][6] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][7] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][8] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][9] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][10] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][11] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][12] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][13] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][14] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][15] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][16] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][17] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][18] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][19] == schedule[stuff.m+1][stuff.k] || schedule[stuff.l][20] == schedule[stuff.m+1][stuff.k])
                        {
				final[stuff.m][stuff.k] = schedule[stuff.l][0] + space;
				break;
			}
                        else
                        {
				//cout<<"hello"<<endl;
				final[stuff.l+1][2] = schedule[stuff.l][0];
				stuff.m--;
				break;
			}
                }
	}
	for(stuff.l=1; stuff.l<=10; stuff.l++)
	{
		cout<<"| "<<stuff.l<<"\t\t|";
		for(stuff.k=0; stuff.k<=10; stuff.k++)
		{
			cout<<final[stuff.l][stuff.k];
		}
		cout<<endl;
	}
	cout<<"+-------------------------------------------------------------------------------------------------------+\n"<<endl;
}
