/* Print the sum of all even number fibonacci numbers which are
 * below 4000000 (four million)
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

#define MAX_FIBONACCI_NUM	4000000

int main(int argc, char *argv)
{
	unsigned long fnum1, fnum2, fnum, fsum;

	/* initialize the first two fibonacci numbers */
	fnum1 = 1;
	fnum2 = 2;

	/* since fnum2 is even, initialize fsum with 2 */
	fsum = 2;

	/* generate next finbonacci number */
	fnum = fnum1 + fnum2;

	/* loop until fibonacci number is below MAX */
	while (fnum < MAX_FIBONACCI_NUM) {
		/* if fibonacci number is even, addup fsum */
		if (fnum % 2 == 0)
			fsum += fnum;

		/* update fnum1 and fnum2 */
		fnum1 = fnum2;
		fnum2 = fnum;

		/* calculate next fibonacci number */
		fnum = fnum1 + fnum2;
	}

	/* print the sum of even fibonacci numbers below 4million */
	printf ("Sum of even fibonacci numbers below %d: %ld\n",
			MAX_FIBONACCI_NUM, fsum);

	return EXIT_SUCCESS;
}
