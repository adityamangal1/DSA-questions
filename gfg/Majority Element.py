from collections import Counter

n = 3
a = [3,1,3,3,2]
c = Counter(a)
print(c)
times = n/2
for key,val in c.items():
    if(val>times):
        print(key)