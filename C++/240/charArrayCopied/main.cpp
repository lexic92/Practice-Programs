#include <cstring>
#include <iostream>
using namespace std;
class String
{
private:
	enum {SZ = 80};
	char str[SZ];
	char twoDimensionalArray[][3];

	
public:
	String()
	{
		str[0] = '\0';
	}
	String(char *s)
	{
		strcpy(str, s);
	}
	void display()
	{
		cout << str << endl;
	}
	void concat(String s2)
	{
		if(strlen(str) + strlen(s2.str) < SZ)
		{
			str[3] = 'a';
			str[4] = '\0';
		}
		else
			cout << "\nString too long";
	}
	
};
int main()
{
	String s2;
	
		String s1 = "one";
		s2 = s1;
		/* How can it copy the array, when a program like this says "invalid array assignment"?
	#include <iostream>
using namespace std;
int main()
{
	char hi[3] = "hi";
	char copy[3];
	cout << hi << endl;
	cout << copy << endl;

	copy = hi;
	cout << copy << endl;

	

}
*/
		s2.concat(s1);
	
	s2.display();
	s1.display();
	

}
