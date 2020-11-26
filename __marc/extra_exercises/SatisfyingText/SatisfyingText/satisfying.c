#include <stdio.h>
#include <windows.h>

int main(void) {
	int space = 0;
	char text[] = " ";

	do
	{

		for (int i = 0; i < space; i++)
		{
			printf("%s", text);
		}

		printf("SATISFYING\n");
		space++;
		Sleep(20);
	} while (space < 30);


	do
	{
		for (int i = 0; i < space; i++)
		{
			printf("%s", text);
		}

		printf("SATISFYING\n");
		space--;
		Sleep(20);
	} while (space > 0);

	main();

	return 0;
}