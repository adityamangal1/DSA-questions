a = [73,74,75,7,2,107]
l = []
for i in range(len(a)):
    try:
        if(a[i]<a[i+1]):
            print(a[i+1])

    except:
        pass
    # break
    # if(a[i]<a[i+1]):
        # l.append(a[i+1])

print(l)