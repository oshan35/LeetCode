from gettext import find


def Calculator(strParam):
    s = strParam
    if s.isdigit():
        return int(s)

    if "(" == s[0]:
        indexStart = strParam.find("(")+1
        indexEnd = len(strParam) - strParam[::-1].find(")")-1
        newExp = strParam[indexStart:indexEnd]
        #op = s[indexEnd + 1]
        if len(s)>indexEnd+1:
            op = s[indexEnd + 1]
            test = s[indexEnd+1:]
            if op == "/":
                return Calculator(newExp) /  Calculator(s[indexEnd+2:])
            elif op == "*":
                return Calculator(newExp) *  Calculator(s[indexEnd+2:])
            elif op == "-":
                return Calculator(newExp) -  Calculator(s[indexEnd+2:])
            elif op == "+":
                return Calculator(newExp) +  Calculator(s[indexEnd+2:])
        
        return Calculator(newExp)
    
    if s[1] == "/":
        return int(s[0]) /  Calculator(s[2:])
    elif s[1] == "*":
        return int(s[0]) * Calculator(s[2:])
    elif s[1] == "-":
        return int(s[0]) - Calculator(s[2:])
    elif s[1] == "+":
        return int(s[0]) + Calculator(s[2:])


test3 = "6*(4/2)+3*1"
test4 = "5*5*(4-2)"
test1 = "4*4*3+1"
test2 = "6/3-1"
print(Calculator(test1))