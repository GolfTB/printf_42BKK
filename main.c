#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	unsigned int	num;

	ft_printf("Character:%c\n", 'A'); // ทดสอบพิมพ์ตัวอักษร
	printf("Character:%c\n", 'A');
	ft_printf("String:%s\n", "Hello World"); // ทดสอบพิมพ์สตริง
	printf("String:%s\n", "Hello World");
	ft_printf("Integer:%d\n", 42); // ทดสอบพิมพ์ตัวเลขจำนวนเต็ม
	printf("Integer:%d\n", 42);
	ft_printf("Unsigned:%u\n", 4294967295); // ทดสอบพิมพ์ unsigned int
	num = 4294967295;
	printf("Unsigned:%u\n", num);
	ft_printf("Hex (lower):%x\n", 255); // ทดสอบพิมพ์เลขฐาน 16 ตัวพิมพ์เล็ก
	printf("Hex (lower):%x\n", 255);
	ft_printf("Hex (upper):%X\n", 255); // ทดสอบพิมพ์เลขฐาน 16 ตัวพิมพ์ใหญ่
	printf("Hex (upper):%X\n", 255);
	ft_printf("Pointer: %p\n", NULL); // ทดสอบพิมพ์ pointer
	printf("Pointer: %p\n", NULL);
	ft_printf("------------------\n");
	ft_printf("%x-%c-%d\n", 255, 'a', 42);
	printf("%x-%c-%d", 255, 'a', 42);
	ft_printf("%c%c%c\n", 'a', '\t', 'b');
	printf("%c%c%c\n", 'a', '\t', 'b');
	return (0);
}
