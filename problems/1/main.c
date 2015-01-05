/* Print the sum of all number which are multiple of 3 & 5
 * between 1 and 1000.
 *
 * Date: 05/01/2015
 *
 * Copyright (C) Prasanna Navaratna
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details and LICENSE file
 * in repository.
 */

#include <stdio.h>
#include <stdlib.h>

#define FROM_NUMBER	0
#define TO_NUMBER	1000

int main(int argc, char *argv)
{
	int num;
	unsigned int sum = 0;

	/* loop from FROM_NUMBER to TO_NUMBER */
	for (num = FROM_NUMBER; num < TO_NUMBER; num++) {
		/* if number divisble by 3 or 5, sum it up */
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}

	/* print the sum of all number between FROM & TO NUMBER
	 * which are multiple of 3 & 5 */
	printf ("Sum of all numbers between %d - %d which are multiple of 3 & 5: %d\n",
			FROM_NUMBER, TO_NUMBER, sum);

	/* return success */
	return EXIT_SUCCESS;
}
