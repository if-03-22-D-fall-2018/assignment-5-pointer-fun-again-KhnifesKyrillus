#include "stdio.h"
#include "string.h"

struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};
void print_struct(struct PlayStruct ps, struct PlayStruct* pps);

int main(int argc, char const *argv[])
{
  struct PlayStruct play_struct;
  printf("Enter a string: ");
  scanf("%s",play_struct.a_string );
  printf("\nEnter an Integer: ");
  scanf("%d",&play_struct.int_value );
  printf("\nEnter a Double: ");
  scanf("%lf",&play_struct.double_value );
  printf("\n");
  struct PlayStruct* play_struct_pointer=&play_struct;
  print_struct(play_struct,play_struct_pointer);
  return 0;
}
void print_struct(struct PlayStruct ps, struct PlayStruct* pps)
{
  printf("ps:\nString: %s\nDouble: %f\nInt: %d\n",ps.a_string,ps.double_value,ps.int_value );
  printf("\npps:\nString: %s\nDouble: %.3lf\nInt: %d\n",pps->a_string,pps->double_value,pps->int_value);
}
