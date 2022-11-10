def lexSmallest(s):
    lex_small_char = s[0]

    for i in s:
        if ord(lex_small_char)>ord(i):
            lex_small_char = i
    return lex_small_char


numOfSets = int(input())
for i in range(numOfSets):
    n = int(input())

    super_spell = ""

    for j in range(n):
        s = input()
    
        super_spell= super_spell + lexSmallest(s)
    print(super_spell)

print(lexSmallest("asdfsdf"))





