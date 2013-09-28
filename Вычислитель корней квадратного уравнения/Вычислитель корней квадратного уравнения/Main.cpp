#include <fstream>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    ifstream input ("input.txt", ios_base::in);
    ofstream output ("output.txt", ios_base::out);
	int num =0;
	{
		while (true)
		{
			num++;
			double a,b,c=0;
			if (!(input>>a)) break;
			if (!(input>>b)) break;
			if (!(input>>c)) break;
			output << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n"<<num<<")\n";
			double d = sqrt(b*b-4*a*c);
			if ((b*b-4*a*c)<0)
				output << "Нет корней\n";
			else if ((b*b-4*a*c)==0)
                output << ((-b-d)/(2*a))<<"\n";
            else
				output << ((-b+d)/(2*a))<<"\n"<<((-b-d)/(2*a))<<"\n";
		}

		input.close();
		output.close();
    }
    return 0;
}
