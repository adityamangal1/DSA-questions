s1 = "Hello" 
s2 = "Bye"
# Output: HBeylelo
a = ''
i = 0
while(i<len(s1) or i<len(s2)):
    if(i<len(s1)):
        a+=s1[i]
    if(i<len(s2)):
        a+=s2[i]
    
    i+=1
    

print(a)