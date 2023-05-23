unsigned char testMe1();
unsigned char testMe2();
unsigned char timeOutFunc();
unsigned char timeOutFunc2();

int main()
{
	testMe1();
    return 0;
}

unsigned char testMe1()
{
	if (timeOutFunc() == 0)
	{
		return 1;
	}

	if (timeOutFunc2() == 1)
	{
		return 2;
	}
	return 0;
}

unsigned char testMe2(int n)
{
	return n;
}

unsigned char timeOutFunc()
{
	unsigned char i = 0;

	for (i = 0; i < 255; i++)
	{
		;
	}

	return i;
}

unsigned char timeOutFunc2()
{
	unsigned char i = 0;

	for (i = 0; i < 255; i++)
	{
		;
	}

	return i;
}
