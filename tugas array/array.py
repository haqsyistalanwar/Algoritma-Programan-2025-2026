nim = input("masukan nim:n")

# ubah string menjadi array digit 
digit = [int(c) for c in nim]

#Total 
total = 0 
for d in digit:
    total += d
    
#Max
mak = digit[0]
for d in digit: 
    if d > maks:
        maks = d

#Min
minim = digit[0]
for d in digit:
    if d < minim:
        minim = d
        
#Rata
rata = total / len(digit)

#reverse array
rev = []
for i in range(len(digit)-1, -1, -1):
    rev.append(digit[i])
    
print("Digit        :", digit)
print("Total        =", total)
print("Maksimum     =", mak)
print("Minimum      =",minim)
print("Reverse array:", rev)



        