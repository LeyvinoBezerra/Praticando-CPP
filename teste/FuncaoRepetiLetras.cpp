#include <iostream>

using namespace std;

void linha(char ch, int n);

int main() 
{

	
	
	linha('G', 40);
	
	return 0;

}
void linha(char ch, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << ch;
	}
}