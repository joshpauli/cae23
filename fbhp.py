def f(i):
    r=str(i);h=hex(i).count('a');c=bin(i).count('1')
    if i%3==0:r+=' Fizz'
    if i%5==0:r+=' Buzz'
    if h:r+=' Ham'
    if c==2 or c==3:r+=' Prom'
    return r
for i in range(200):print(f(i+1))