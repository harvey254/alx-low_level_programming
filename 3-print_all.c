#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	va_list args;

	va_start(args, format);

	int i = 0;
	char c;
	char *s;
	float f;

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(args, int);

				printf("%c", c);
				break;

			case 'i':
				i = va_arg(args, int);

				printf("%d", i);
				break;

			case 'f':
				f = (float) va_arg(args, double);

				printf("%f", f);
				break;

			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}

		i++;

		if (format[i])
		{
			int j = i;
			while (format[j] && format[j] != 'c' && format[j] != 'i' && format[j] != 'f' && format[j] != 's')
			{
				j++;
			}

			if (format[j])
			{
				printf(", ");
			}
		}
	}
	va_end(args);
	printf("\n");
}

