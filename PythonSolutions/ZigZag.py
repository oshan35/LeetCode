from cgitb import reset
from itertools import count


def zig_zag(s,num_of_rows):
    x,y,line_count = 0,0,1
    
    line_map = [""]*num_of_rows

    flag,zig = True,0

    for i in range(len(s)):
        if line_map[abs(y)] !="":
            line = line_map[abs(y)]
            line += s[i]
            line_map[abs(y)] = line
        else:
            line_map[abs(y)] = s[i]

        if flag:
            y = y -1
        else:
            x,y = x+1,y+1

        line_count +=1

        if line_count == num_of_rows and zig == 0:
            flag,zig,line_count = False,1,1

        elif line_count == num_of_rows and zig == 1:
            flag,zig,line_count = True,0,1

    return "".join(line_map)


s = "PAYPALISHIRING"
num_of_rows = 4
result = zig_zag(s,num_of_rows)
print(result)

output = "PINALSIGYAHRPI"

if result == output:
    print("TEST PASS")
