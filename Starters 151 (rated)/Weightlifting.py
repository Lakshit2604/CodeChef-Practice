# cook your dish here
score = input()
rwise = list()
i = 0
while i<len(score):
    rwise.append(score[i:i+3])
    i+=4
r_1 = rwise[:2]
r_2 = rwise[2:4]
r_3 = rwise[4:6]
ans_1 = int(max(r_1))
ans_2 = int(max(r_2))
ans_3 = int(max(r_3))

output = ans_1+ans_2+ans_3
print(output)