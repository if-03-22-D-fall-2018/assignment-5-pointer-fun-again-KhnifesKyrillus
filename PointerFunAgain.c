#include "stdio.h"




struct PlayStruct
{
  int int_value;
  double double_value
  char a_string[64];
};

int main(int argc, char const *argv[])
{
  struct PlayStruct play_struct;
  struct* PlayStruct play_struct_pointer;

  play_struct.int_value=123;
  play_struct.double_value=1.23;
  play_struct.a_string="Hallo";
  play_struct_pointer=&play_struct;
  return 0;
}
void print_struct(struct PlayStruct ps, struct* PlayStruct pps)
{
  printf("%s %d %d\n",ps.a_string,ps.double_value,ps.int_value );
}
