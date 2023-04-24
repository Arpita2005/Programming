#include<stdio.h>
#include<conio.h>
enum compass_direction{north,east,south,west};
enum compass_direction get_direction()
{
    int a;
    scanf("%d",&a);
    // return south;
}
/* To shorten example, not using argp */
int main()
{
  enum compass_direction my_direction;
  puts("Which way are you going?");
  my_direction = get_direction();

  switch (my_direction)
  {
    case north:
      puts("North? Say hello to the polar bears!");
      break;

    case south:
      puts("South? Say hello to Tux the penguin!");
      break;

    case east:
      puts("If you go far enough east, you'll be west!");
      break;

    case west:
      puts("If you go far enough west, you'll be east!");
      break;
  }
  getch();
  return 0;
}
