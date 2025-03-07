d={'p':30,'q':50,'r':100}
d1={'p':50,'q':87}
d2={}
for i,j in (d.items()):
    for l,m in (d1.items()):

        if i==l:
            d2[i]=j+m

print(d2)

