#include "sys.h"

int main(void)
{
	delay_init();

	while (1)
	{
		printf("hello world\r\n");
		delay_ms(1000);
	}
}
