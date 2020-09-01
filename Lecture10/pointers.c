#include <stdio.h>

int main(){

	int x, y;
	int *p1, *p2;  /* Declare 2 pointers to int,   */
				   /* p1 and p2                    */

	x = -42;
	y = 163;

	p1 = &x;       /* p1 holds the address of x    */   
	p2 = &y;       /* p2 holds the address of y    */   
	
	fprintf( stdout, "Initial values:\n"); 
	fprintf( stdout, "x = %d, y = %d\n", x, y); 
	fprintf( stdout, "&x = %p, &y = %p\n", (void *)&x, (void *)&y);
	fprintf( stdout, "Location of p1 is %p, Location of p2 is %p\n", (void *)&p1, (void *)&p2);
	fprintf( stdout, "Value in p1 is %p, Value in p2 is %p\n", (void *)p1, (void *)p2);
	fprintf( stdout, "*p1 = %d, *p2 = %d\n", *p1, *p2);
	fprintf( stdout, "Notice how p1's value is equal to &x, and p2's value = &y\n");
	fprintf( stdout, "Notice how *p1's value is equal to x, and *p2's value = y\n\n");
	
	*p1 = 17;      /* Put the value 17 into the    */
				   /* container that p1 points to  */
				   
	*p2 = 224;		/* Put the value 224 into the    */
					/* Put the value p2 into the    */

	fprintf( stdout, "After *p1 = 17; and *p2 = 224:\n"); 
	fprintf( stdout, "x = %d, y = %d\n", x, y); 
	fprintf( stdout, "&x = %p, &y = %p\n", (void *)&x, (void *)&y);
	fprintf( stdout, "Location of p1 is %p, Location of p2 is %p\n", (void *)&p1, (void *)&p2);
	fprintf( stdout, "Value in p1 is %p, Value in p2 is %p\n", (void *)p1, (void *)p2);
	fprintf( stdout, "*p1 = %d, *p2 = %d\n\n", *p1, *p2);


	p1 = p2;       /* Let the variable p1 now hold */ 
			   /* the same address as p2 holds */

	fprintf( stdout, "After p1 = p2:\n"); 
	fprintf( stdout, "x = %d, y = %d\n", x, y); 
	fprintf( stdout, "&x = %p, &y = %p\n", (void *)&x, (void *)&y);
	fprintf( stdout, "Location of p1 is %p, Location of p2 is %p\n", (void *)&p1, (void *)&p2);
	fprintf( stdout, "Value in p1 is %p, Value in p2 is %p\n", (void *)p1, (void *)p2);
	fprintf( stdout, "*p1 = %d, *p2 = %d\n\n", *p1, *p2);


	p1 = &x;       /* p1 holds the address of x    */
	
	fprintf( stdout, "After p1 = &x:\n"); 
	fprintf( stdout, "x = %d, y = %d\n", x, y); 
	fprintf( stdout, "&x = %p, &y = %p\n", (void *)&x, (void *)&y);
	fprintf( stdout, "Location of p1 is %p, Location of p2 is %p\n", (void *)&p1, (void *)&p2);
	fprintf( stdout, "Value in p1 is %p, Value in p2 is %p\n", (void *)p1, (void *)p2);
	fprintf( stdout, "*p1 = %d, *p2 = %d\n\n", *p1, *p2);

	   
	*p1 = *p2;     /* Put the value found at the   */
				   /* address that p2 points to    */
					/* into the container that p1   */
				/* points to.                   */

	fprintf( stdout, "After *p1 = *p2:\n"); 
	fprintf( stdout, "x = %d, y = %d\n", x, y); 
	fprintf( stdout, "&x = %p, &y = %p\n", (void *)&x, (void *)&y);
	fprintf( stdout, "Location of p1 is %p, Location of p2 is %p\n", (void *)&p1, (void *)&p2);
	fprintf( stdout, "Value in p1 is %p, Value in p2 is %p\n", (void *)p1, (void *)p2);
	fprintf( stdout, "*p1 = %d, *p2 = %d\n\n", *p1, *p2);

				
	return 0;

}
