/*
        Jared Westmoreland

        Computer Foundations I	2100	Section 002

	Description: Allows the user to input multiple students's classes and organizes them
		     to where their finals will not intercept one another.
*/
#include <iostream>
//#include <string>
using namespace std;

struct variables
{
	int i=0, j=0, l=0, 

}

int main()
{
	int i=0, j=0, l=0, k=0, m=0;
	string str;
	string str2;
	string copy;
	string student[200];
	string course[10];
	string schedule[100][2000];
	string space = "\t";
	while(cin>> str)
	{
		size_t found = str.find(str2);
     		found = str.find("Student");
		if(found != string::npos)
		{
			i++;
			student[i] = str;
			cout<<i<<"i ";
		}
		else if(found !=0)
		{
			j++;
			course[j] = space+ str;
			cout<<j<<"j\n";
		}
	}
		for(k=0; k!=i+1; k++)
		{
			schedule[k][0] = student[k];
			for(l=0; l!=2; l++)
			{
				for
				schedule[k][1] = course[m];
			}
		}

	for(k=0; k!=i+1; k++)
        {
                for(l=0; l!=2; l++)
                {
			cout<<schedule[k][l];
                }
        	cout<<endl;
	}
}


