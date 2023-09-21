,                 Read character into c0

>                 Move to c1

[                 Start loop
< +               Increment c0 by 1
> -               Decrement c1 by 1
]                 End loop

> ++++ ++++        Add 8 to c2

[                 Start loop
< ++++ ++         Add 6 to c1
> -               Decrement c2 by 1
]                 End loop

<                 Move to c1, which is initialized to 48

[                 Start loop
< -               Decrement c0 by 1
> -               Decrement c1 by 1
]                 End loop

< .               Move to c0 and print the result of the addition operation

