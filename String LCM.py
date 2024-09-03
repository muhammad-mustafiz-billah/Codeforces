# /*
# ****@Author:Muhammad Mustafiz Billah*****
# */

tc = int(input())
while tc>0:
    flag = 0
    s = input()
    t = input()
    for i in range(20):
        for j in range(20):
            if s*(i+1)==(j+1)*t:
                flag = 1
                print(s*(i+1))
                break
        if flag==1:
            break
    if flag==0:
        print(-1)
    tc -= 1