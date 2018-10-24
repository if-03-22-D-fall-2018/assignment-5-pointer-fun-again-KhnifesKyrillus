#include "stdio.h"
#include "string.h"

struct PlayStruct
{
  int int_value;
  double double_value;
  char a_string[64];
};
void print_struct(struct PlayStruct ps, struct PlayStruct* pps);
void change_struct(struct PlayStruct ps, struct PlayStruct* pps);

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
  change_struct(play_struct,play_struct_pointer);
  print_struct(play_struct,play_struct_pointer);
  return 0;
}
void print_struct(struct PlayStruct ps, struct PlayStruct* pps)
{
  printf("\nps:\nString: %s\nDouble: %f\nInt: %d\n",ps.a_string,ps.double_value,ps.int_value );
  printf("pps:\nString: %s\nDouble: %.3lf\nInt: %d\n",pps->a_string,pps->double_value,pps->int_value);
}

void change_struct(struct PlayStruct ps, struct PlayStruct* pps)
{
  ps.int_value=14;
  ps.double_value=17.10312;
  strcpy(ps.a_string, "grüzzi");
  pps->int_value=7;
  pps->double_value=12312.321;
  strcpy(pps->a_string, "bye");
}
