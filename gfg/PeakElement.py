N = 3
arr = [1, 2, 3]
a = []

for i in range(len(arr)):
    try:
        print(arr[i])

        if(arr[i] > arr[i+1]):
            print('ji')
            a.append(arr[i])
    except:
        pass

print(a)

