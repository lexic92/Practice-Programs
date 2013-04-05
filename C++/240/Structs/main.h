struct Wanbaka
	{
		int lol;
	};
struct Employee
	{
		Wanbaka w;
	    int nID;
	    int nAge;
	    float fWage;
	};
		// float fWage = 1;   You aren't allowed to initialize them to a default. I tried already and got compile errors:
			/*
			main.cpp: In function ‘int main()’:
			main.cpp:9: error: ISO C++ forbids initialization of member ‘nID’
			main.cpp:9: error: making ‘nID’ static
			main.cpp:9: error: ISO C++ forbids in-class initialization of non-const static member ‘nID’
			main.cpp:9: error: local class ‘struct main()::Employee’ shall not have static data member ‘int main()::Employee::nID’
			main.cpp:10: error: ISO C++ forbids initialization of member ‘nAge’
			main.cpp:10: error: making ‘nAge’ static
			main.cpp:10: error: ISO C++ forbids in-class initialization of non-const static member ‘nAge’
			main.cpp:10: error: local class ‘struct main()::Employee’ shall not have static data member ‘int main()::Employee::nAge’
			main.cpp:11: error: ISO C++ forbids initialization of member ‘fWage’
			main.cpp:11: error: making ‘fWage’ static
			main.cpp:11: error: ISO C++ forbids in-class initialization of non-const static member ‘fWage’
			main.cpp:11: error: local class ‘struct main()::Employee’ shall not have static data member ‘float main()::Employee::fWage’
			*/
void PrintInformation(Employee sEmployee);

