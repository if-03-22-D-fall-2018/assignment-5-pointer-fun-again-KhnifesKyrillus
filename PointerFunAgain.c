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
void print_string(char string_to_print[]);
void change_string(char string1[], char *p_string[]);

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
  /*If you change the pointer of the struct you change the struct because the pointer is just the waywiser to the variable behind the pointer*/
  char other_string[16]="GCC";
  char* other_string_p=other_string;
  print_string(play_struct.a_string);
  change_string(play_struct.a_string, &other_string_p);
  print_string(play_struct.a_string);
  print_string(other_string_p);
  /*It just print the first two characters of play_struct.a_string because I replace the third index with \0 (\0 defines the end of a string)*/
  /*other_string_p prints completlely because its a Pointer and we just change the adress to the array*/
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

void print_string(char string_to_print[])
{
  printf("%s\n",string_to_print );
}

void change_string(char string1[], char *p_string[])
{
  strcpy(&string1[2],"\0");
  strcpy(p_string[1],"\0");
}
