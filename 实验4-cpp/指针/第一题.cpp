#include<iostream>
using std::endl;
using std::cout;
using std::cin;
int indexOf(const char *s1, const char *s2)
{
	bool is = false;
	int i;
	for (i = 0; i < 50; i++)
	{	
		if (strlen(s1) == 1 && s1[0] == s2[i])
		{
			return i;
		}
		//考虑到s1只由一个字符组成的情况；
		if (s1[0] == s2[i])
		{
			int j = 1;
			do {
				if (s1[j] == s2[i + j])
				{
					j++;
					is = true;
				}
				else
				{
					is = false;
					break;
				}
			} while (j < strlen(s1));
			if (is == true)
			{
				return i;
				break;
			}
			//s1由多个字符组成；
		}
	}
	if (is == false)
		return -1;
}
int main() {
	cout << "Enter first string:";
	char s1[50];
	cin.getline(s1, 50);
	cout << "Enter second string:";
	char s2[50];
	cin.getline(s2, 50);
	cout << "indexOf(" << "“" << s1 << "”" << "，“" << s2 << "”" << ")is:" <<
		indexOf(s1, s2) << endl;
	system("pause");
	return 0;
}