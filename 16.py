from math import*
b = input()
a = float(b);
print ('cos a + sin a + cos 3a + sin 3a');
print (cos(a) + sin(a) + cos(3 * a) + sin (3 * a));

print ('fibonachi');
str = input ();
n = int(str)
def fib(n):
    a = 0
    b = 1
    for __ in range(n):
        a, b = b, a + b
    return a

print (fib(n))

Ar = [[1,2,3,4,5],
    [6,7,8,9,10],
    [11,12,13,14,15],
    [16,17,18,19,20]];
for i in range(len(Ar)):
    tmp = Ar[i][0];
    Ar[i][0] = Ar[i][2];
    Ar[i][2] =tmp;

print (Ar[3][2]);