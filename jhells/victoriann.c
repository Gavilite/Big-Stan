#include <stdio.h>

/**
 * scores - school grades
 * description - assignment
 * 80 - 100 == A
 * 70 - 79 == B
 * 65 - 69 == C
 * 60 - 64 == D
 * 50 - 59 == E
 * 0 - 49 == F
 */

int main(void)
{
	int score;

	printf("what is your score \n" );
	scanf("%d" , &score);
	0/* check if the score is between 80 - 100
	 * then print the
	 * grade if it is
	 */

	if (score >= 80 && score <= 100 )
	{
		printf( "A" ) ;
	}

	/* check if the score is between 70 - 79
	 * then print the
	 * grade if it is
	 */
	else if (score >= 70 && score <= 79 )
	{
		printf( "B");
	}

	/* check if the score is between 65 - 69
	 * then print the
	 * grade if it is
	 */
	else if (score >= 65 && score <=69 )
	{
		printf( "C");
	}

	else if (score >= 60 && score <= 64 )
	{
		printf( "D" );
	}

	else if (score >= 50 && score <= 59 )

	{
		printf( "E" );
	}

	else if (score >= 0 && score <= 49)
	{
		printf( "F" );
	}

	else
	{
		printf("You have entered an invalid score" );
	}

	return 0;
}


