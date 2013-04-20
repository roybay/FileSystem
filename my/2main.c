#include "../lib/my.h"

int main()
{
	char s1[] = "index";
	char s2[] = "01234";
	char s3[] = "01";
	char s4[] = "#";
	char s5[] = "";
	
	/*char*/
	my_char('/');
	/*string */
	my_str("hello World! 'z'\n");
	my_str(s1);
	my_str("\nROY\n");
	/*int */
	my_int(125);
	my_str("\n");
	my_int(-125);
	my_str("\n");

	my_int(0);
	my_char('\n');
	/*my_int();   doesnt work Good*/
	my_char('\n');
	/*num_base*/
	my_num_base(8, s1);my_char('\n');/*ne*/
	my_num_base(5, "INDEX!");my_char('\n');/*!*/
	my_num_base(0, "0123456789");my_char('\n');
	my_num_base(125, "01");my_char('\n');/*!*/
	my_num_base(124, s2);my_char('\n');/*444*/
	my_num_base(5, s3);my_char('\n');/*101*/
	my_num_base(8, s4);my_char('\n');/*########*/
	my_num_base(8, s5);my_char('\n');/*you do not have a correct BASE..NULL pointer*/
	my_num_base(8, NULL);my_char('\n');
	/*my_strlen*/
	my_int(my_strlen("hello"));
	my_int(my_strlen("h"));
	my_int(my_strlen(""));
	my_int(my_strlen(NULL));

my_str("----------------------------------------------------------");
 my_str("\nmy_char()\n---------\n");
  my_str("my_char(' ') = ");
  my_char(' ');
  my_char('\n');
  my_str("my_char('a') = ");
  my_char('a');
  my_char('\n');
  my_str("my_char('e') = ");
  my_char('e');
  my_char('\n');
  my_str("my_char('.') = ");
  my_char('.');
  my_char('\n');

  my_str("\nmy_str()\n--------\n");
  my_str("my_str(\"\") = ");
  my_str("");
  my_char('\n');
  my_str("my_str(\"hello\\n\") = ");
  my_str("hello\n");
  my_str("my_str(\"123\\n\") = ");
  my_str("123\n");
  my_str("my_str(NULL) = ");
  my_str(NULL);
  my_char('\n');

  my_str("\nmy_int()\n--------\n");
  my_str("my_int(-1234) = ");
  my_int(-1234);
  my_char('\n');
  my_str("my_int(-123) = ");
  my_int(-123);
  my_char('\n');
  my_str("my_int(12) = ");
  my_int(12);
  my_char('\n');
  my_str("my_int(1) = ");
  my_int(1);
  my_char('\n');
  my_str("my_int(0) = ");
  my_int(0);
  my_char('\n');

  my_str("\nmy_alpha()\n----------\n");
  my_alpha();
  my_char('\n');

  my_str("\nmy_digits()\n-----------\n");
  my_digits();
  my_char('\n');

  my_str("\nmy_strlen()\n-----------\n");
  my_str("my_strlen(\"hello\") = ");
  my_int(my_strlen("hello"));
  my_char('\n');
  my_str("my_strlen(\"\") = ");
  my_int(my_strlen(""));
  my_char('\n');
  my_str("my_strlen(NULL) = ");
  my_int(my_strlen(NULL));
  my_char('\n');
  my_str("my_strlen(\"a\") = ");
  my_int(my_strlen("a"));
  my_char('\n');

  my_str("\nmy_strindex()\n-------------\n");
  my_str("my_strindex(\"hello\", 'l') = ");
  my_int(my_strindex("hello", 'l'));
  my_char('\n');
  my_str("my_strindex(\"hello\", 'h') = ");
  my_int(my_strindex("hello", 'h'));
  my_char('\n');
  my_str("my_strindex(\"hello\", 'o') = ");
  my_int(my_strindex("hello", 'o'));
  my_char('\n');
  my_str("my_strindex(\"\", 'l') = ");
  my_int(my_strindex("", 'l'));
  my_char('\n');
  my_str("my_strindex(NULL, 'l') = ");
  my_int(my_strindex(NULL, 'l'));
  my_char('\n');
  my_str("my_strindex(\"hello\", 'r') = ");
  my_int(my_strindex("hello", 'r'));
  my_char('\n');

  char str[] = "carlos";
  char str1[] = "hello";
  char str2[] = "a";
  char str3[] = "";
  char str4[] = "BR";

  my_str("\nmy_revstr()\n-----------\n");
  my_str("my_revstr(\"carlos\") = ");
  my_int(my_revstr(str));
  my_char(' ');
  my_str(str);
  my_char('\n');
  my_str("my_revstr(\"hello\") = ");
  my_int(my_revstr(str1));
  my_char(' ');
  my_str(str1);
  my_char('\n');
  my_str("my_revstr(\"a\") = ");
  my_int(my_revstr(str2));
  my_char(' ');
  my_str(str2);
  my_char('\n');
  my_str("my_revstr(\"\") = ");
  my_int(my_revstr(str3));
  my_char(' ');
  my_str(str3);
  my_char('\n');
  my_str("my_revstr(\"BR\") = ");
  my_int(my_revstr(str4));
  my_char(' ');
  my_str(str4);
  my_char('\n');
  my_str("my_revstr(NULL) = ");
  my_int(my_revstr(NULL));
  my_char(' ');
  my_str(NULL);
  my_char('\n');

  my_str("\nmy_strrindex()\n--------------\n");
  my_str("my_strrindex(\"hello\", 'l') = ");
  my_int(my_strrindex("hello", 'l'));
  my_char('\n');
  my_str("my_strrindex(\"hello\", 'h') = ");
  my_int(my_strrindex("hello", 'h'));
  my_char('\n');
  my_str("my_strrindex(\"hello\", 'w') = ");
  my_int(my_strrindex("hello", 'w'));
  my_char('\n');
  my_str("my_strrindex(\"\", 'l') = ");
  my_int(my_strrindex("", 'l'));
  my_char('\n');
  my_str("my_strrindex(NULL, 'l') = ");
  my_int(my_strrindex(NULL, 'l'));
  my_char('\n');
  my_str("my_strrindex(\"hello\", 'o') = ");
  my_int(my_strrindex("hello", 'o'));
  my_char('\n');

  my_str("\nmy_num_base()\n-------------\n");
  my_str("my_num_base(9, \"RTFM\") = ");
  my_num_base(9, "RTFM");
  my_char('\n');
  my_str("my_num_base(-3, \"!\") = ");
  my_num_base(-3, "!");
  my_char('\n');
  my_str("my_num_base(9, \"\") = ");
  my_num_base(9, "");
  my_str("my_num_base(3, NULL) = ");
  my_num_base(3, NULL);
  my_str("my_num_base(6, \"01\") = ");
  my_num_base(6, "01");
  my_char('\n');
  my_str("my_num_base(0, \"hello\") = ");
  my_num_base(0, "hello");
  my_char('\n');
  my_str("my_num_base(8, \"index\") = ");
  my_num_base(8, "index");
  my_char('\n');
  my_str("my_num_base(9, \"0123456789\") = ");
  my_num_base(9, "0123456789");
  my_char('\n');
  my_str("my_num_base(123, \"0123456789\") = ");
  my_num_base(123, "0123456789");
  my_char('\n');

	my_int(-2147483647);my_str("\t");	my_int(2147483647);my_str("\n");
	my_int(-2147483648);my_str("\t");	my_int(2147483648);my_str("\n");

	
	
	return 0;
}
