#include <stdio.h> // Rule 110
char c[999]="%c\0->>>+[->>>,-"
"---------]>>>-<<<<<<[>>+++++"
"+[-<++++++>]<+[-<->]<<<<]>>>"
"+[[-[->+>+<<]>>[-<<+>>]>[-<+"
"<+>>>+<]<[->+<]<<[->>+>>+<<<"
"<]>>[-<<+>>]<<<<<[->>>>>+>>+"
"<<<<<<<]>>>>>[-<<<<<+>>>>>]>"
">---[<<<[>+<[-]]>>>[+]]<<<[-"
"]>>+]>>-<<<[-]<<+[[-]<<<+]>>"
"->>>>>>+[-[->+<]>>++++[->>++"
"++<<]>>[-<<++>>]<<<[>+++<-<+"
">]>.[-]>+],[-]-<+[-<+]->>>>>"
">+]",*i=c,*p=c+346;int l(char
x){for(char a=1;a;)i+=x,a-=x*(
(*i==93)-(*i==91));}int main()
{for(;;)*++i-44?*i-43?*i-45?*i
-60?*i-46?*i-62?*i-91?*i-93?:*
p?l(-1):0:*p?:l(1):p++:printf(
c,*p):p--:(*p)--:(*p)++:scanf(
c,p);}/*  github.com/nootr  */