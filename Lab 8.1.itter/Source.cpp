#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

/*bool Include(const char* s, const char c)
{
	for (int i = 0; s[i] != '\0'; i++)
		if (c == s[i])
			return true;
	return false;
}*/

bool Include(const char* s, const char* cs)
{
	bool b, r = true;
	for (int i = 0; cs[i] != '\0'; i++)
	{
		b = false;
		for (int j = 0; s[j] != '\0'; j++)
			if (cs[i] == s[j])
			{
				b = true;
				break;
			}
		r = r && b;
	}
	return r;
}

//char* Change(char* str)
//{
//	size_t len = strlen(str);
//	if (len < 5)
//		return str;
//	char* tmp = new char[len * 2 / 5 + 1];
//	char* t = tmp;
//	tmp[0] = '\0';
//	size_t i = 0;
//		while (i < len && str[i + 4] != 0)
//		{
//			if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
//			{
//				strcat(t, "**");
//				t += 2;
//				i += 5;
//			}
//			else
//			{
//				*t++ = str[i++];
//				*t = '\0';
//			}
//		}
//	*t++ = str[i++];
//	*t++ = str[i++];
//	*t = '\0';
//	strcpy(str, tmp);
//	return tmp;
//}

char* Change(char* str)
{
	size_t len = strlen(str);
	if (len < 5)
		return str;
	char* tmp = new char[len * 2 / 5 + 1];
	char* t = tmp;
	tmp[0] = '\0';
	size_t i = 0;
		while (i < len && str[i + 4] != 0)
		{
			if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
			{
				strcat_s(t ,len + 10, "**");
				t += 2;
				i += 5;
			}
			else
			{
				*t++ = str[i++];
				*t = '\0';
			}
		}
	*t++ = str[i++];
	*t++ = str[i++];
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy_s(str, len + 10, tmp);
	return tmp;
}

int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	/*char a = 'w';
	char b = 'h';
	char c = 'i';
	char d = 'l';
	char e = 'e';
	if (Include(str, a) && Include(str, b) && Include(str, c) && Include(str, d) && Include(str, e))
		cout << "yes" << endl;
	else
		cout << "no" << endl;*/
	char cs[] = "while";
	if (Include(str, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	char* dest = new char[161];
    dest = Change(str);
 cout << "Modified string (param) : " << str << endl;
 cout << "Modified string (result): " << dest << endl;
	return 0;
}