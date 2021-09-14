#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

struct player {
	char name[25];
	char team[10];
	float batting_avg;
};

bool team_name(char x[10][10], char y[10], int z)
{
	for (int i = 0; i < z; i++)
	{
		if (strcmp(x[i], y) == 0)
		{
			return true;
		}
	}
	return false;
}

int main(int argc, char const *argv[])
{
	printf("ENTER DETAILS OF EACH PLAYER\n");
	int z = 0;
	char gar[5];
	char Team[10][10] = {"\n"};
	struct player cricket[50];
	for (int i = 0; i < 50; ++i)
	{
		printf("\nPlayer's Name : ");
		gets(cricket[i].name);
		printf("Team Name : ");
		gets(cricket[i].team);
		if (team_name(Team, cricket[i].team, z) == false)
		{
			strcpy(Team[z], cricket[i].team);
			++z;
		}
		printf("Batting Average : ");
		scanf("%f", &cricket[i].batting_avg);
		gets(gar);
	}
	printf("\n");
	for (int i = 0; i < z; ++i)
	{
		printf("*********\nTEAM : %s\n", Team[i]);
		for (int j = 0; j < 50; ++j)
		{
			if (strcmp(Team[i], cricket[j].team) == 0)
			{
				printf("\nName : %s\n", cricket[j].name);
				printf("Batting Average : %f\n", cricket[j].batting_avg);
			}
		}
	}
	printf("*********");
	return 0;
}

int** TransMatrix(int**source, int col, int row)
{
	int** Transpose = (int**)malloc(col*sizeof(int*));
	for (int i = 0; i < col; i++)
		Transpose[i] = (int*)malloc(row*sizeof(int));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			Transpose[j][i] = source[i][j];
		}
	}

	return Transpose;
}