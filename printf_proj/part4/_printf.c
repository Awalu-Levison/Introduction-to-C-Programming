#include "main.h"
/**
 *  * _printf - Customize the standard printf function
 *   * @format: The format specifier
 *    * Return: Number of characters printed
 *     */
int _printf(const char *format, ...)
{
		unsigned int counter = 0;

			va_list mylist;

				va_start(mylist, format);

					if (format == NULL)
								return (-1);

						while (*format != '\0')
								{
											if (*format == '%')
														{
																		format++;
																					counter += handle_format(*format, mylist);
																							}
													else
																	counter += write(1, &(*format), 1);
															format++;
																}
							va_end(mylist);
								return (counter);
}
