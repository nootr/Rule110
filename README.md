# Rule 110 Simulator

I love cellular automata like Conway’s Game of Life, they’re extremely
interesting things to play with and think about. This is why I decided to write
a Rule 110 simulator in Brainfuck. The program accepts zeroes and ones to set
the initial state and it will calculate every next state when a newline is
entered. Your Brainfuck interpreter will need to handle cell wrapping for this
program to work, or just build the Brainfuck interpreter I wrote:

```bash
$ make
$ ./rule110
```

## Example output
![Example](example.png)

## Rule 110 in BF in C

```C
#include <stdio.h>
int main(){char c[0xbf110]="%c\0->"
">>+[->>>,----------]>>>-<<<<<<[>>"
"+ Rule 110  on  a  card: turing +"
"+ complete  cellular  automaton +"
"+ in  an  esoteric  programming +"
"[ language  interpreted  in  C! -"
"<                               +"
"+                  Joris Hartog +"
"+  https://github<dot>com/nootr +"
"+>]<+[-<->]<<<<]>>>+[[-[->+>+<<]>"
">[-<<+>>]>[-<+<+>>>+<]<[->+<]<<[-"
">>+>>+<<<<]>>[-<<+>>]<<<<<[->>>>>"
"+>>+<<<<<<<]>>>>>[-<<<<<+>>>>>]>>"
"---[<<<[>+<[-]]>>>[+]]<<<[-]>>+]>"
">-<<<[-]<<+[[-]<<<+]>>->>>>>>+[-["
"->+<]>>++++[->>++++<<]>>[-<<++>>]"
"<<<[>+++<-<+>]>.[-]>+],[-]-<+[-<+"
"]->>>>>>+]",*i=c,*p=c+99999,a;for(
;p>c+543;)*--p=0;for(;;a=1){if(*++i
==',')scanf(c,p);if(*i=='.')printf(
c,*p);if(*i=='>')p++;if(*i==']'&&*p
)while(a)i--,a+=(*i==']')-(*i=='[')
;if(*i=='+')(*p)++;if(*i=='['&&!*p)
while(a)i++,a-=(*i==']')-(*i=='[');
if(*i=='<')p--;if(*i=='-')(*p)--;}}
```

## Smaller version with compiler warnings

```C
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
```

## BF only

```brainfuck
 ->>>+[->>>,----------]>>>-<<<<<<[>>++++
++[-<++++++>]<+[-<->]<<<<]>>>+[[-[->+>+<<
]>>[-<<+>>]>[-<+<+>>>+<]<[->+<]<<[->>+>>+
<<<<]>>[-<<+>>]<<<<<[->>>>>+>>+<<<<<<<]>>
>>>[-<<<<<+>>>>>]>>---[<<<[>+<[-]]>>>[+]]
<<<[-]>>+]>>-<<<[-]<<+[[-]<<<+]>>->>>>>>+
[-[->+<]>>++++[->>++++<<]>>[-<<++>>]<<<[>
 +++<-<+>]>.[-]>+],[-]-<+[-<+]->>>>>>+=]
```

For more info about how this works, please checkout
`src/rule110_bf_commented.txt`.
