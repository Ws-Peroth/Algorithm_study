# 피타고라스 

On = 0
for a in range(1, 333):
    for b in range(a + 1, int((1000-a)/2)):
        c = 1000 - a - b
        On = On + 1               
        if(c > b):
            if(a + b + c == 1000):
                if(a**2 + b**2 == c**2):

                    print(a*b*c)
print(On)
