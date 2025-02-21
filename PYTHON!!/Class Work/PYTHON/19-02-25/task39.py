t = (1,3,"hello","why",1,3.455)

print(type(t))
print(t.count(1))
print(t.index(3))

l=list(t)

print(l)
l.append(100)
print(l)

t1=tuple(l)
print(t1)
