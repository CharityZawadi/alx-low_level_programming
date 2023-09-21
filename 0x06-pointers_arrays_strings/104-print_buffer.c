#incude "main.h"

/**
 * print_buffer - prints a buffer
 * @b: pointer to the buffer to print
 * @size: number of bytes to print
 */


void print_buffer(char *b, int size)

{

if (size <= 0)
{
printf("\n");
return;
}

int lineSize = 10;
int position = 0;

for (int i = 0; i < size; i += lineSize)
{
printf("%08x ", position);

for (int j = 0; j < lineSize; j++)
{
if (i + j < size)
{
printf("%02x ", (unsigned char)b[i + j]);
} else
{
printf("   ");
}

if (j == 4)
{
printf(" ");
}
}

printf(" ");
for (int j = 0; j < lineSize; j++) 
{
if (i + j < size) 
{
char c = b[i + j];
if (isprint(c)) 
{
printf("%c", c);
} else
{
printf(".");
}
} else
{
printf(" ");
}
}

printf("\n");
position += lineSize;
}
}

int main()
{
char buffer[] = "This is a sample buffer to print in hex and characters.";
int size = sizeof(buffer) - 1;

print_buffer(buffer, size);

return 0;
}
