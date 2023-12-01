#include <stdio.h>
#include<conio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c...", from_rod, to_rod);
		return;
	}
	towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
	printf("\n Move disk %d from rod %c to rod %c...", n, from_rod, to_rod);
	towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}

int main()
{
	int n ;          //= 4;  Number of disks
	printf("Enter the number of disks :\n");
	scanf("%d",&n);
	towerOfHanoi(n, 'A', 'C', 'B');    // A, B and C are names of rods
	printf("\n\n Completed\n");
    getch();
	return 0;
}

// If there is only one disk to move (base case, n == 1), the program directly moves it from rodA to rodC by printing the move statement. The recursion unwinds from here.
// If there is more than one disk to move (n > 1), the program recursively breaks down the problem into smaller subproblems. It first moves n-1 disks from rodA to rodB using rodC as an auxiliary rod. This step leaves the largest disk on rodA.
// After the above step, the program moves the largest disk (disk n) from rodA to rodC directly by printing the move statement.
// Finally, it recursively moves the n-1 disks from rodB to rodC, using rodA as the auxiliary rod. This completes the transfer of the entire stack of disks from rodA to rodC.