chan = 0
le = 0 
sum = 0

for i in range(1, 11):
    sum += i

    if i % 2 == 0:
        chan += i 
    else:
        le += i 

print(chan, le, sum)