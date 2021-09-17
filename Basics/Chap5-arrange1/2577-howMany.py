a=int(input())
b=int(input())
c=int(input())
mult = a*b*c

d = []
for i in str(mult):
    d.append(i)

num=[0,1,2,3,4,5,6,7,8,9]
output=[0,0,0,0,0,0,0,0,0,0]

for i in d:
    for j in num:
        if int(i)==j:
            output[j]+=1 

for i in output:
    print(i)