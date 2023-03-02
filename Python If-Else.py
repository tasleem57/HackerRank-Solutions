n = int(input(""))
i = n
while i in range(2,6):
    if i%2 == 0:
        print("Not Weird")
        break
    else:
        if i in range(2,6):
            print("Weird")
            break
while i in range(6,21):
    if i%2 == 0:
        print("Weird")
        break
    else:
        print("Not Weird")
        break
while i in range(21,100) or i == 100:
    if i%2 == 0: 
        print("Not Weird")
        break
    else:
        print("Weird")
        break
