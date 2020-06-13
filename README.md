# Rule 110 Simulator

I love cellular automata like Conway’s Game of Life, they’re extremely interesting things to play with and think about. This is why I decided to write a Rule 110 simulator in Brainfuck. The program accepts zeroes and ones to set the initial state and it will calculate every next state when a newline is entered. Your Brainfuck interpreter will need to handle cell wrapping for this program to work, or just build the Brainfuck interpreter I wrote:
```bash
$ make
$ ./rule110
```

## Example output
![Example](example.png)

## Rule 110 in BF in C

```C
       #include <stdio.h>
int main(){char c[0xbf110]="%c\0"
"->>>+[->>>,----------]>>>-<<<<<"
"< Rule 110 on a card: turing  ["
"> complete cellular automaton >"
"+ in an esoteric programming  +"
"+ language interpreted in C!  +"
"++[-<++++++>]<+[-<->]<<<<]>>>+["
"[-[->+>+<<]>>[-<<+>>]>[-<+<+>>>"
"+<]<[->+<]<<[->>+>>+<<<<]>>[-<<"
"+>>]<<<<<[->>>>>+>>+<<<<<<<]>>>"
">>[-<     jorishartog     <<<<+"
">>>>> <at>hotmail<dot>com ]>>--"
"-[<<<[>+<[-]]>>>[+]]<<<[-]>>+]>"
">-<<<[-]<<+[[-]<<<+]>>->>>>>>+["
"-[->+<]>>++++[->>++++<<]>>[-<<+"
"+>>]<<<[>+++<-<+>]>.[-]>+],[-]-"
"<+[-<+]->>>>>>+]",*p=c+782608,*i
=c,a;while(p>c+487)*--p=0;for(;;a
=1){if(*++i==',')scanf(c,p);if(*i
=='+')(*p)++;if(*i=='.')printf(c,
*p);if(*i=='>')p++;if(*i=='['&&!*
p)while(a){i++;a-=(*i==']')-(*i==
'[');}if(*i=='<')p--;if(*i=='-')(
*p)--;if(*i==']'&&*p)while(a){i--
   ;a+=(*i==']')-(*i=='[');}}}
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
