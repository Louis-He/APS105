# Lec03

## char type
char	1byte	256possibilites
```
char input = 'A'; // NOT "A"
```

## Named constant
```
const double PI = 3.1415926535;
const int INPUT = 5;
INPUT = 7;//compile time error
```
## C standard Library

### Printf

```
printf("The result is:%d", result);// %d: decimal integer
printf("The result is %d %d", input, output");
```
integer	%d

Double	%lf

char	%c

```
// "%.2lf" 2 digits after the decimal point
const double PI = 3.1415926;
printf("%.2lf", PI); // Print 3.14
```

### Scanf

```
int inputs;
scanf("%d", &input);//& : the address of
```

## Expression

```
output = input * 7; // =, *: operator
```

Operator: *, /, %, +, -, (, )

```
5/6 // output: 0
3/6. // output: 0.5
5%3 // output: 2
-5%3 // output: -2
-5%-3 // output: 2
5%6 // output: 5

```


