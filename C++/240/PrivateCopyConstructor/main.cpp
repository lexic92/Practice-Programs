class myClass
{

private:
	myClass(const myClass & other){}

};

int main()
{
	myClass one;
	myClass two = one;

	return 0;
}
