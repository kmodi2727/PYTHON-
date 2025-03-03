d = {'p':10,'q':40,'r':10}
d1 ={'p':80,'q':20}
d2={}
for i,j in (d.items()):
    for l,m in (d1.items()):

        if i==l:
            d2[i]=j+m
print(d2)
